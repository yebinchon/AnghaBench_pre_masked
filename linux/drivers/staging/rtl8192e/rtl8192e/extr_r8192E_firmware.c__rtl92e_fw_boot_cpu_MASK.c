
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct net_device*,char*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct net_device*,int ,int ) ;

__attribute__((used)) static bool FUNC_6(struct net_device *VAR_4)
{
 u32 VAR_5 = 0;

 if (!FUNC_0(VAR_4, VAR_2, 200)) {
  FUNC_3(VAR_4, "Firmware download failed.\n");
  return 0;
 }
 FUNC_2(VAR_4, "Download Firmware: Put code ok!\n");

 VAR_5 = FUNC_4(VAR_4, VAR_0);
 FUNC_5(VAR_4, VAR_0,
        (u8)((VAR_5|VAR_3)&0xff));
 FUNC_1(1);

 if (!FUNC_0(VAR_4, VAR_1, 200)) {
  FUNC_3(VAR_4, "Firmware boot failed.\n");
  return 0;
 }

 FUNC_2(VAR_4, "Download Firmware: Boot ready!\n");

 return 1;
}
