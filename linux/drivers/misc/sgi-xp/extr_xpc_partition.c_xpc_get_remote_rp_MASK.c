
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xpc_rsvd_page {scalar_t__ ts_jiffies; scalar_t__ SAL_partid; scalar_t__ max_npartitions; int version; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 scalar_t__ VAR_0 ;
 unsigned long* FUNC_0 (struct xpc_rsvd_page*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct xpc_rsvd_page*) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (int ,unsigned long,scalar_t__) ;
 unsigned long FUNC_4 (int) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

enum xp_retval
FUNC_5(int VAR_12, unsigned long *VAR_13,
    struct xpc_rsvd_page *VAR_14, unsigned long *VAR_15)
{
 int VAR_16;
 enum xp_retval VAR_17;



 *VAR_15 = FUNC_4(VAR_12);
 if (*VAR_15 == 0)
  return VAR_5;


 VAR_17 = FUNC_3(FUNC_2(VAR_14), *VAR_15,
          VAR_0 + VAR_10);
 if (VAR_17 != VAR_7)
  return VAR_17;

 if (VAR_13 != ((void*)0)) {
  unsigned long *VAR_18 =
      FUNC_0(VAR_14);

  for (VAR_16 = 0; VAR_16 < VAR_11; VAR_16++)
   VAR_13[VAR_16] |= VAR_18[VAR_16];
 }


 if (VAR_14->ts_jiffies == 0)
  return VAR_6;

 if (FUNC_1(VAR_14->version) !=
     FUNC_1(VAR_1)) {
  return VAR_2;
 }


 if (VAR_14->SAL_partid < 0 ||
     VAR_14->SAL_partid >= VAR_8 ||
     VAR_14->max_npartitions <= VAR_9) {
  return VAR_3;
 }

 if (VAR_14->SAL_partid == VAR_9)
  return VAR_4;

 return VAR_7;
}
