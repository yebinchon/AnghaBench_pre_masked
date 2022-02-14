
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mac_driver {int mac_id; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct mac_driver*,int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_3)
{
 struct mac_driver *VAR_4 = (struct mac_driver *)VAR_3;
 int VAR_5;
 u32 VAR_6;

 VAR_5 = 0;
 while (VAR_5++ < VAR_2) {
  VAR_6 = FUNC_1(VAR_4, VAR_1);

  if ((VAR_6 & 0x3f) == 0)
   break;
  FUNC_2(100, 200);
 }

 if (VAR_5 >= VAR_2) {
  FUNC_0(VAR_4->dev,
   "hns ge %d fifo was not idle.\n", VAR_4->mac_id);
  return -VAR_0;
 }

 return 0;
}
