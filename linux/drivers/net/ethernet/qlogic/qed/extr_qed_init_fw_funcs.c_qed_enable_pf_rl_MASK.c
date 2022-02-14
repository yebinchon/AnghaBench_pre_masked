
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct qed_hwfn {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct qed_hwfn*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct qed_hwfn *VAR_10, bool VAR_11)
{
 FUNC_0(VAR_10, VAR_4, VAR_11 ? 1 : 0);
 if (VAR_11) {
  u8 VAR_12 = VAR_0;
  u64 VAR_13 = ((u64)1 << VAR_12) - 1;


  FUNC_0(VAR_10,
        VAR_8,
        (u32)VAR_13);
  if (VAR_12 >= 32)
   FUNC_0(VAR_10, VAR_7,
         (u32)(VAR_13 >> 32));


  FUNC_0(VAR_10,
        VAR_6, VAR_9);
  FUNC_0(VAR_10,
        VAR_5,
        VAR_9);


  if (VAR_1)
   FUNC_0(VAR_10,
         VAR_3,
         VAR_2);
 }
}
