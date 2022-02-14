
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef int __u32 ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(__le32 VAR_15, int VAR_16, umode_t *VAR_17,
     umode_t *VAR_18)
{
 __u32 VAR_19 = FUNC_1(VAR_15);
 if (VAR_16 == VAR_1) {
  if (VAR_19 & VAR_5)
   *VAR_18 &= ~VAR_11;

  if ((VAR_19 & VAR_8) ||
   ((VAR_19 & VAR_4) == VAR_4))
   *VAR_18 &= ~VAR_12;
  if ((VAR_19 & VAR_7) ||
   ((VAR_19 & VAR_3) == VAR_3))
   *VAR_18 &= ~VAR_10;
  if ((VAR_19 & VAR_6) ||
   ((VAR_19 & VAR_2) == VAR_2))
   *VAR_18 &= ~VAR_13;
  return;
 } else if (VAR_16 != VAR_0) {
  FUNC_0(VAR_14, "unknown access control type %d\n", VAR_16);
  return;
 }


 if (VAR_19 & VAR_5) {
  *VAR_17 |= (VAR_11 & (*VAR_18));
  FUNC_0(VAR_9, "all perms\n");
  return;
 }
 if ((VAR_19 & VAR_8) ||
   ((VAR_19 & VAR_4) == VAR_4))
  *VAR_17 |= (VAR_12 & (*VAR_18));
 if ((VAR_19 & VAR_7) ||
   ((VAR_19 & VAR_3) == VAR_3))
  *VAR_17 |= (VAR_10 & (*VAR_18));
 if ((VAR_19 & VAR_6) ||
   ((VAR_19 & VAR_2) == VAR_2))
  *VAR_17 |= (VAR_13 & (*VAR_18));

 FUNC_0(VAR_9, "access flags 0x%x mode now 0x%x\n", VAR_19, *VAR_17);
 return;
}
