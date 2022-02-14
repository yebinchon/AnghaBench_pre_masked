
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct stk1160 {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int,int,int,int ,int ,int *,int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(struct stk1160 *VAR_4, u16 VAR_5, u16 VAR_6)
{
 int VAR_7;
 int VAR_8 = FUNC_2(VAR_4->udev, 0);

 VAR_7 = FUNC_1(VAR_4->udev, VAR_8, 0x01,
   VAR_1 | VAR_3 | VAR_2,
   VAR_6, VAR_5, ((void*)0), 0, VAR_0);
 if (VAR_7 < 0) {
  FUNC_0("write failed on reg 0x%x (%d)\n",
   VAR_5, VAR_7);
  return VAR_7;
 }

 return 0;
}
