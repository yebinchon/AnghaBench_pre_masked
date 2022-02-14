
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct pulse8 {int restoring_config; int autonomous; int config_pending; int config_lock; } ;
struct TYPE_2__ {int* primary_device_type; int cec_version; char* osd_name; } ;
struct cec_adapter {int phys_addr; TYPE_1__ log_addrs; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;







 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 struct pulse8* FUNC_0 (struct cec_adapter*) ;
 int FUNC_1 (char*,char,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pulse8*,int*,int,int ,int ) ;
 size_t FUNC_5 (char*) ;
 int FUNC_6 (int*,char*,int) ;

__attribute__((used)) static int FUNC_7(struct cec_adapter *VAR_17, u8 VAR_18)
{
 struct pulse8 *VAR_19 = FUNC_0(VAR_17);
 u16 VAR_20 = 0;
 u16 VAR_21 = VAR_17->phys_addr;
 u8 VAR_22[16];
 int VAR_23 = 0;

 FUNC_2(&VAR_19->config_lock);
 if (VAR_18 != VAR_0)
  VAR_20 = 1 << VAR_18;
 VAR_22[0] = VAR_9;
 VAR_22[1] = VAR_20 >> 8;
 VAR_22[2] = VAR_20 & 0xff;
 VAR_23 = FUNC_4(VAR_19, VAR_22, 3,
       VAR_8, 0);
 if ((VAR_23 && VAR_20 != 0) || VAR_19->restoring_config)
  goto unlock;

 VAR_22[0] = VAR_10;
 VAR_22[1] = VAR_18 == VAR_0 ? 0 : 1;
 VAR_23 = FUNC_4(VAR_19, VAR_22, 2,
       VAR_8, 0);
 if (VAR_23)
  goto unlock;
 VAR_19->autonomous = VAR_22[1];
 if (VAR_18 == VAR_0)
  goto unlock;

 VAR_22[0] = VAR_12;
 VAR_22[1] = VAR_17->log_addrs.primary_device_type[0];
 VAR_23 = FUNC_4(VAR_19, VAR_22, 2,
       VAR_8, 0);
 if (VAR_23)
  goto unlock;

 switch (VAR_17->log_addrs.primary_device_type[0]) {
 case 128:
  VAR_20 = VAR_6;
  break;
 case 131:
  VAR_20 = VAR_3;
  break;
 case 129:
  VAR_20 = VAR_5;
  break;
 case 133:
  VAR_20 = VAR_2;
  break;
 case 134:
  VAR_20 = VAR_1;
  break;
 case 130:
  VAR_20 = VAR_7;
  break;
 case 132:
  VAR_20 = VAR_4;
  break;
 default:
  VAR_20 = 0;
  break;
 }
 VAR_22[0] = VAR_14;
 VAR_22[1] = VAR_20 >> 8;
 VAR_22[2] = VAR_20 & 0xff;
 VAR_23 = FUNC_4(VAR_19, VAR_22, 3,
       VAR_8, 0);
 if (VAR_23)
  goto unlock;

 VAR_22[0] = VAR_11;
 VAR_22[1] = VAR_18;
 VAR_23 = FUNC_4(VAR_19, VAR_22, 2,
       VAR_8, 0);
 if (VAR_23)
  goto unlock;

 VAR_22[0] = VAR_16;
 VAR_22[1] = VAR_21 >> 8;
 VAR_22[2] = VAR_21 & 0xff;
 VAR_23 = FUNC_4(VAR_19, VAR_22, 3,
       VAR_8, 0);
 if (VAR_23)
  goto unlock;

 VAR_22[0] = VAR_13;
 VAR_22[1] = VAR_17->log_addrs.cec_version;
 VAR_23 = FUNC_4(VAR_19, VAR_22, 2,
       VAR_8, 0);
 if (VAR_23)
  goto unlock;

 if (VAR_17->log_addrs.osd_name[0]) {
  size_t VAR_24 = FUNC_5(VAR_17->log_addrs.osd_name);
  char *VAR_25 = VAR_22 + 1;

  VAR_22[0] = VAR_15;
  FUNC_6(VAR_22 + 1, VAR_17->log_addrs.osd_name, sizeof(VAR_22) - 1);
  if (VAR_24 < 4) {
   FUNC_1(VAR_25 + VAR_24, ' ', 4 - VAR_24);
   VAR_24 = 4;
   VAR_25[VAR_24] = '\0';
   FUNC_6(VAR_17->log_addrs.osd_name, VAR_25,
    sizeof(VAR_17->log_addrs.osd_name));
  }
  VAR_23 = FUNC_4(VAR_19, VAR_22, 1 + VAR_24,
        VAR_8, 0);
  if (VAR_23)
   goto unlock;
 }

unlock:
 if (VAR_19->restoring_config)
  VAR_19->restoring_config = 0;
 else
  VAR_19->config_pending = 1;
 FUNC_3(&VAR_19->config_lock);
 return VAR_18 == VAR_0 ? 0 : VAR_23;
}
