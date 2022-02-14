
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rt_firmware {int status; } ;
struct r8192_priv {struct rt_firmware* pFirmware; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct net_device*,char*) ;
 struct r8192_priv* FUNC_5 (struct net_device*) ;

__attribute__((used)) static bool FUNC_6(struct net_device *VAR_7,
       u8 VAR_8)
{
 struct r8192_priv *VAR_9 = FUNC_5(VAR_7);
 struct rt_firmware *VAR_10 = VAR_9->pFirmware;
 bool VAR_11 = 1;

 switch (VAR_8) {
 case 130:
  VAR_10->status = VAR_2;
  break;

 case 129:
  VAR_10->status = VAR_3;

  VAR_11 = FUNC_1(VAR_7);
  if (VAR_11)
   VAR_10->status = VAR_4;
  else
   FUNC_4(VAR_7, "_rtl92e_fw_boot_cpu fail!\n");

  break;

 case 128:
  VAR_10->status = VAR_5;
  FUNC_3(1);

  VAR_11 = FUNC_2(VAR_7, VAR_1, 20);
  if (VAR_11)
   VAR_10->status = VAR_6;
  else
   FUNC_0(VAR_0,
     "_rtl92e_is_fw_ready fail(%d)!\n",
     VAR_11);
  break;
 default:
  VAR_11 = 0;
  FUNC_4(VAR_7, "Unknown firmware status");
  break;
 }

 return VAR_11;
}
