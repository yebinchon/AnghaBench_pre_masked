
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long ppll_max; unsigned long ppll_min; int ref_div; int ref_clk; } ;
struct radeonfb_info {scalar_t__ family; TYPE_1__ pll; scalar_t__ has_CRTC2; } ;
struct radeon_regs {int ppll_ref_div; int ppll_div_3; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct radeonfb_info*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct radeonfb_info *VAR_4, struct radeon_regs *VAR_5,
     unsigned long VAR_6)
{
 static const struct {
  int divider;
  int bitvalue;
 } *VAR_7,
   VAR_8[] = {
  { 1, 0 },
  { 2, 1 },
  { 4, 2 },
  { 8, 3 },
  { 3, 4 },
  { 16, 5 },
  { 6, 6 },
  { 12, 7 },
  { 0, 0 },
 };
 int VAR_9, VAR_10 = 0;
 int VAR_11 = 0;
 while (VAR_4->has_CRTC2) {
  u32 VAR_12 = FUNC_0(VAR_2);
  u32 VAR_13;
  int VAR_14;


  if ((VAR_12 & VAR_3) == 0)
   break;



  if (VAR_4->family == VAR_0 || FUNC_1(VAR_4)) {
   VAR_14 = (VAR_12 >> 10) & 0x3;



   if (VAR_14 == 3) {
    VAR_13 = FUNC_0(VAR_1);
    VAR_14 = (VAR_13 >> 12) & 0x3;
   }
  } else
   VAR_14 = (VAR_12 >> 13) & 0x1;

  if (VAR_14 == 1)
   break;


  VAR_11 = 1;
  break;
 }



 if (VAR_6 > VAR_4->pll.ppll_max)
  VAR_6 = VAR_4->pll.ppll_max;
 if (VAR_6*12 < VAR_4->pll.ppll_min)
  VAR_6 = VAR_4->pll.ppll_min / 12;
 FUNC_2("freq = %lu, PLL min = %u, PLL max = %u\n",
        VAR_6, VAR_4->pll.ppll_min, VAR_4->pll.ppll_max);

 for (VAR_7 = &VAR_8[0]; VAR_7->divider; ++VAR_7) {
  VAR_10 = VAR_7->divider * VAR_6;



  if (VAR_11 && (VAR_7->divider & 1))
   continue;
  if (VAR_10 >= VAR_4->pll.ppll_min &&
      VAR_10 <= VAR_4->pll.ppll_max)
   break;
 }



 if ( !VAR_7->divider ) {
  VAR_7 = &VAR_8[VAR_7->bitvalue];
  VAR_10 = VAR_7->divider * VAR_6;
 }
 FUNC_2("ref_div = %d, ref_clk = %d, output_freq = %d\n",
        VAR_4->pll.ref_div, VAR_4->pll.ref_clk,
        VAR_10);



 if ( !VAR_7->divider ) {
  VAR_7 = &VAR_8[VAR_7->bitvalue];
  VAR_10 = VAR_7->divider * VAR_6;
 }
 FUNC_2("ref_div = %d, ref_clk = %d, output_freq = %d\n",
        VAR_4->pll.ref_div, VAR_4->pll.ref_clk,
        VAR_10);

 VAR_9 = FUNC_3(VAR_4->pll.ref_div*VAR_10,
      VAR_4->pll.ref_clk);
 VAR_5->ppll_ref_div = VAR_4->pll.ref_div;
 VAR_5->ppll_div_3 = VAR_9 | (VAR_7->bitvalue << 16);

 FUNC_2("post div = 0x%x\n", VAR_7->bitvalue);
 FUNC_2("fb_div = 0x%x\n", VAR_9);
 FUNC_2("ppll_div_3 = 0x%x\n", VAR_5->ppll_div_3);
}
