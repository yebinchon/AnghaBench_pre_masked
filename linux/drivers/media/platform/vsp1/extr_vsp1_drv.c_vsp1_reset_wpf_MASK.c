
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vsp1_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int) ;
 int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int ,char*,unsigned int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct vsp1_device*,int ) ;
 int FUNC_5 (struct vsp1_device*,int ,int ) ;

int FUNC_6(struct vsp1_device *VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5;
 u32 VAR_6;

 VAR_6 = FUNC_4(VAR_3, VAR_2);
 if (!(VAR_6 & FUNC_1(VAR_4)))
  return 0;

 FUNC_5(VAR_3, VAR_1, FUNC_0(VAR_4));
 for (VAR_5 = 10; VAR_5 > 0; --VAR_5) {
  VAR_6 = FUNC_4(VAR_3, VAR_2);
  if (!(VAR_6 & FUNC_1(VAR_4)))
   break;

  FUNC_3(1000, 2000);
 }

 if (!VAR_5) {
  FUNC_2(VAR_3->dev, "failed to reset wpf.%u\n", VAR_4);
  return -VAR_0;
 }

 return 0;
}
