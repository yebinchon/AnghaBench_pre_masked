
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pll_min_max {int max_vco; int p_transition_clk; int p_inc_lo; int p_inc_hi; int min_p; int max_p; int min_n; int max_n; int ref_clk; int min_m; int max_m; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int,int,int,int,int,int,int ) ;
 int FUNC_5 (int,int,int,int) ;
 struct pll_min_max* VAR_0 ;
 scalar_t__ FUNC_6 (int,int,int*,int*) ;
 scalar_t__ FUNC_7 (int,int,int*,int*) ;

__attribute__((used)) static int FUNC_8(int VAR_1, int VAR_2, u32 *VAR_3, u32 *VAR_4,
      u32 *VAR_5, u32 *VAR_6, u32 *VAR_7, u32 *VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 u32 VAR_16, VAR_17, VAR_18 = 0, VAR_19, VAR_20 = 0;
 u32 VAR_21 = 10000000;
 u32 VAR_22 = 0, VAR_23 = 0, VAR_24;
 u32 VAR_25, VAR_26, VAR_27, VAR_28;
 struct pll_min_max *VAR_29 = &VAR_0[VAR_1];

 FUNC_0("Clock is %d\n", VAR_2);

 VAR_28 = VAR_29->max_vco / VAR_2;

 VAR_27 = (VAR_2 <= VAR_29->p_transition_clk) ? VAR_29->p_inc_lo : VAR_29->p_inc_hi;
 VAR_25 = VAR_27;
 VAR_26 = FUNC_1(VAR_28, VAR_27);
 if (VAR_25 < VAR_29->min_p)
  VAR_25 = VAR_29->min_p;
 if (VAR_26 > VAR_29->max_p)
  VAR_26 = VAR_29->max_p;

 FUNC_0("p range is %d-%d (%d)\n", VAR_25, VAR_26, VAR_27);

 VAR_17 = VAR_25;
 do {
  if (FUNC_7(VAR_1, VAR_17, &VAR_12, &VAR_13)) {
   FUNC_3("cannot split p = %d\n", VAR_17);
   VAR_17 += VAR_27;
   continue;
  }
  VAR_11 = VAR_29->min_n;
  VAR_16 = VAR_2 * VAR_17;

  do {
   VAR_19 = FUNC_2(VAR_16 * VAR_11, VAR_29->ref_clk) / VAR_29->ref_clk;
   if (VAR_19 < VAR_29->min_m)
    VAR_19 = VAR_29->min_m + 1;
   if (VAR_19 > VAR_29->max_m)
    VAR_19 = VAR_29->max_m - 1;
   for (VAR_15 = VAR_19 - 1; VAR_15 <= VAR_19; VAR_15++) {
    VAR_20 = FUNC_5(VAR_1, VAR_15, VAR_11, VAR_17);
    if (FUNC_6(VAR_1, VAR_15, &VAR_9, &VAR_10)) {
     FUNC_3("cannot split m = %d\n",
      VAR_15);
     continue;
    }
    if (VAR_2 > VAR_20)
     VAR_24 = VAR_2 - VAR_20;
    else
     VAR_24 = VAR_20 - VAR_2 + 1;

    if (VAR_24 < VAR_21) {
     VAR_23 = VAR_15;
     VAR_22 = VAR_11;
     VAR_18 = VAR_17;
     VAR_21 = VAR_24;
    }
   }
   VAR_11++;
  } while ((VAR_11 <= VAR_29->max_n) && (VAR_20 >= VAR_2));
  VAR_17 += VAR_27;
 } while ((VAR_17 <= VAR_26));

 if (!VAR_23) {
  FUNC_3("cannot find parameters for clock %d\n", VAR_2);
  return 1;
 }
 VAR_19 = VAR_23;
 VAR_11 = VAR_22;
 VAR_17 = VAR_18;
 FUNC_6(VAR_1, VAR_19, &VAR_9, &VAR_10);
 FUNC_7(VAR_1, VAR_17, &VAR_12, &VAR_13);
 VAR_14 = VAR_11 - 2;

 FUNC_0("m, n, p: %d (%d,%d), %d (%d), %d (%d,%d), "
  "f: %d (%d), VCO: %d\n",
  VAR_19, VAR_9, VAR_10, VAR_11, VAR_14, VAR_17, VAR_12, VAR_13,
  FUNC_5(VAR_1, VAR_19, VAR_11, VAR_17),
  FUNC_4(VAR_1, VAR_9, VAR_10, VAR_14, VAR_12, VAR_13, 0),
  FUNC_5(VAR_1, VAR_19, VAR_11, VAR_17) * VAR_17);
 *VAR_3 = VAR_9;
 *VAR_4 = VAR_10;
 *VAR_5 = VAR_14;
 *VAR_6 = VAR_12;
 *VAR_7 = VAR_13;
 *VAR_8 = FUNC_4(VAR_1, VAR_9, VAR_10, VAR_14, VAR_12, VAR_13, 0);

 return 0;
}
