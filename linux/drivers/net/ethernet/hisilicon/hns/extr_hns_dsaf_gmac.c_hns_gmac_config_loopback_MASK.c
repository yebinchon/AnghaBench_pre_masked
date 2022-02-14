
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mac_driver {int dev; } ;
typedef enum hnae_loop { ____Placeholder_hnae_loop } hnae_loop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct mac_driver*,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_3, enum hnae_loop VAR_4,
        u8 VAR_5)
{
 struct mac_driver *VAR_6 = (struct mac_driver *)VAR_3;

 switch (VAR_4) {
 case 128:
  FUNC_1(VAR_6, VAR_1, VAR_2,
     !!VAR_5);
  break;
 default:
  FUNC_0(VAR_6->dev, "loop_mode error\n");
  return -VAR_0;
 }

 return 0;
}
