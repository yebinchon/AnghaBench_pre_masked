
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct rio_mport {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rio_mport*,int ,int ,int ,int *) ;

int
FUNC_2(struct rio_mport *VAR_3, u16 VAR_4, u8 VAR_5)
{
 int VAR_6 = 0;
 u32 VAR_7;

 while (FUNC_1(VAR_3, VAR_4, VAR_5,
     VAR_1, &VAR_7)) {
  VAR_6++;
  if (VAR_6 == VAR_2)
   return -VAR_0;
  FUNC_0(1);
 }

 return 0;
}
