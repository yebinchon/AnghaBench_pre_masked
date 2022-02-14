
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct stk1160 {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ,int,int,int,int,int ,int *,int,int ) ;
 int FUNC_4 (int ,int ) ;

int FUNC_5(struct stk1160 *VAR_6, u16 VAR_7, u8 *VAR_8)
{
 int VAR_9;
 int VAR_10 = FUNC_4(VAR_6->udev, 0);
 u8 *VAR_11;

 *VAR_8 = 0;

 VAR_11 = FUNC_1(sizeof(u8), VAR_1);
 if (!VAR_11)
  return -VAR_0;
 VAR_9 = FUNC_3(VAR_6->udev, VAR_10, 0x00,
   VAR_3 | VAR_5 | VAR_4,
   0x00, VAR_7, VAR_11, sizeof(u8), VAR_2);
 if (VAR_9 < 0) {
  FUNC_2("read failed on reg 0x%x (%d)\n",
   VAR_7, VAR_9);
  FUNC_0(VAR_11);
  return VAR_9;
 }

 *VAR_8 = *VAR_11;
 FUNC_0(VAR_11);
 return 0;
}
