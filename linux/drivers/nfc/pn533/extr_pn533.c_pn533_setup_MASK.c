
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int timing ;
struct pn533_config_timing {int dep_timeout; void* atr_res_timeout; void* rfu; } ;
struct pn533_config_max_retries {int mx_rty_atr; int mx_rty_psl; int mx_rty_passive_act; } ;
struct pn533 {int device_type; int dev; } ;
typedef int max_retries ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;




 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct pn533*) ;
 int FUNC_2 (struct pn533*,int ,int*,int) ;

__attribute__((used)) static int FUNC_3(struct pn533 *VAR_7)
{
 struct pn533_config_max_retries VAR_8;
 struct pn533_config_timing VAR_9;
 u8 VAR_10[3] = {0x08, 0x01, 0x08};
 int VAR_11;

 switch (VAR_7->device_type) {
 case 128:
 case 130:
 case 131:
 case 129:
  VAR_8.mx_rty_atr = 0x2;
  VAR_8.mx_rty_psl = 0x1;
  VAR_8.mx_rty_passive_act =
   VAR_4;

  VAR_9.rfu = VAR_5;
  VAR_9.atr_res_timeout = VAR_5;
  VAR_9.dep_timeout = VAR_6;

  break;

 default:
  FUNC_0(VAR_7->dev, "Unknown device type %d\n",
   VAR_7->device_type);
  return -VAR_0;
 }

 VAR_11 = FUNC_2(VAR_7, VAR_1,
         (u8 *)&VAR_8, sizeof(VAR_8));
 if (VAR_11) {
  FUNC_0(VAR_7->dev,
   "Error on setting MAX_RETRIES config\n");
  return VAR_11;
 }


 VAR_11 = FUNC_2(VAR_7, VAR_3,
         (u8 *)&VAR_9, sizeof(VAR_9));
 if (VAR_11) {
  FUNC_0(VAR_7->dev, "Error on setting RF timings\n");
  return VAR_11;
 }

 switch (VAR_7->device_type) {
 case 128:
 case 129:
  break;

 case 130:
  FUNC_1(VAR_7);

  VAR_11 = FUNC_2(VAR_7, VAR_2,
          VAR_10, 3);
  if (VAR_11) {
   FUNC_0(VAR_7->dev,
    "Error while settings PASORI config\n");
   return VAR_11;
  }

  FUNC_1(VAR_7);

  break;
 }

 return 0;
}
