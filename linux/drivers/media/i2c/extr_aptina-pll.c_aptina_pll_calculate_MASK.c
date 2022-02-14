
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct aptina_pll_limits {unsigned int ext_clock_min; unsigned int ext_clock_max; unsigned int pix_clock_max; unsigned int m_min; unsigned int out_clock_min; unsigned int n_min; unsigned int p1_min; unsigned int m_max; unsigned int out_clock_max; unsigned int n_max; unsigned int p1_max; unsigned int int_clock_max; unsigned int int_clock_min; } ;
struct aptina_pll {unsigned int ext_clock; unsigned int pix_clock; unsigned int m; unsigned int n; unsigned int p1; } ;


 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct device*,char*,unsigned int,unsigned int,...) ;
 int FUNC_2 (struct device*,char*) ;
 unsigned int FUNC_3 (unsigned int,unsigned int) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;

int FUNC_7(struct device *VAR_1,
    const struct aptina_pll_limits *VAR_2,
    struct aptina_pll *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 FUNC_1(VAR_1, "PLL: ext clock %u pix clock %u\n",
  VAR_3->ext_clock, VAR_3->pix_clock);

 if (VAR_3->ext_clock < VAR_2->ext_clock_min ||
     VAR_3->ext_clock > VAR_2->ext_clock_max) {
  FUNC_2(VAR_1, "pll: invalid external clock frequency.\n");
  return -VAR_0;
 }

 if (VAR_3->pix_clock == 0 || VAR_3->pix_clock > VAR_2->pix_clock_max) {
  FUNC_2(VAR_1, "pll: invalid pixel clock frequency.\n");
  return -VAR_0;
 }


 VAR_9 = FUNC_3(VAR_3->pix_clock, VAR_3->ext_clock);
 VAR_3->m = VAR_3->pix_clock / VAR_9;
 VAR_9 = VAR_3->ext_clock / VAR_9;
 VAR_4 = FUNC_0(VAR_2->m_min, VAR_3->m);
 VAR_4 = FUNC_4(VAR_4, VAR_2->out_clock_min /
       (VAR_3->ext_clock / VAR_2->n_min * VAR_3->m));
 VAR_4 = FUNC_4(VAR_4, VAR_2->n_min * VAR_2->p1_min / VAR_9);
 VAR_5 = VAR_2->m_max / VAR_3->m;
 VAR_5 = FUNC_5(VAR_5, VAR_2->out_clock_max /
      (VAR_3->ext_clock / VAR_2->n_max * VAR_3->m));
 VAR_5 = FUNC_5(VAR_5, FUNC_0(VAR_2->n_max * VAR_2->p1_max, VAR_9));

 FUNC_1(VAR_1, "pll: mf min %u max %u\n", VAR_4, VAR_5);
 if (VAR_4 > VAR_5) {
  FUNC_2(VAR_1, "pll: no valid combined N*P1 divisor.\n");
  return -VAR_0;
 }
 if (VAR_2->p1_min == 0) {
  FUNC_2(VAR_1, "pll: P1 minimum value must be >0.\n");
  return -VAR_0;
 }

 VAR_6 = FUNC_4(VAR_2->p1_min, FUNC_0(VAR_2->out_clock_min * VAR_9,
       VAR_3->ext_clock * VAR_3->m));
 VAR_7 = FUNC_5(VAR_2->p1_max, VAR_2->out_clock_max * VAR_9 /
       (VAR_3->ext_clock * VAR_3->m));

 for (VAR_8 = VAR_7 & ~1; VAR_8 >= VAR_6; VAR_8 -= 2) {
  unsigned int VAR_10 = VAR_8 / FUNC_3(VAR_9, VAR_8);
  unsigned int VAR_11;
  unsigned int VAR_12;

  VAR_12 = FUNC_6(FUNC_4(VAR_4, FUNC_0(VAR_3->ext_clock * VAR_8,
     VAR_2->int_clock_max * VAR_9)), VAR_10);
  VAR_11 = FUNC_5(VAR_5, VAR_3->ext_clock * VAR_8 /
         (VAR_2->int_clock_min * VAR_9));

  if (VAR_12 > VAR_11)
   continue;

  VAR_3->n = VAR_9 * VAR_12 / VAR_8;
  VAR_3->m *= VAR_12;
  VAR_3->p1 = VAR_8;
  FUNC_1(VAR_1, "PLL: N %u M %u P1 %u\n", VAR_3->n, VAR_3->m, VAR_3->p1);
  return 0;
 }

 FUNC_2(VAR_1, "pll: no valid N and P1 divisors found.\n");
 return -VAR_0;
}
