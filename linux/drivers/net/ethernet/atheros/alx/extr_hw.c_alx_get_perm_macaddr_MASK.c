
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct alx_hw {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (struct alx_hw*,int *) ;
 int FUNC_1 (struct alx_hw*,int ) ;
 int FUNC_2 (struct alx_hw*,int ,int,int*) ;
 int FUNC_3 (struct alx_hw*,int ,int) ;

int FUNC_4(struct alx_hw *VAR_9, u8 *VAR_10)
{
 u32 VAR_11;


 if (FUNC_0(VAR_9, VAR_10))
  return 0;


 if (!FUNC_2(VAR_9, VAR_5, VAR_7 | VAR_6, &VAR_11))
  return -VAR_8;
 FUNC_3(VAR_9, VAR_5, VAR_11 | VAR_6);
 if (!FUNC_2(VAR_9, VAR_5, VAR_6, ((void*)0)))
  return -VAR_8;
 if (FUNC_0(VAR_9, VAR_10))
  return 0;


 VAR_11 = FUNC_1(VAR_9, VAR_0);
 if (VAR_11 & (VAR_2 | VAR_1)) {
  if (!FUNC_2(VAR_9, VAR_0,
      VAR_4 | VAR_3, &VAR_11))
   return -VAR_8;
  FUNC_3(VAR_9, VAR_0, VAR_11 | VAR_3);
  if (!FUNC_2(VAR_9, VAR_0, VAR_3, ((void*)0)))
   return -VAR_8;
  if (FUNC_0(VAR_9, VAR_10))
   return 0;
 }

 return -VAR_8;
}
