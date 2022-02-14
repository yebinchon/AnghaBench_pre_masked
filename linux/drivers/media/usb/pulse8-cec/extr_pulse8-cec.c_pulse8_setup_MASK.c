
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
typedef int time64_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; } ;
struct serio {int dummy; } ;
struct pulse8 {int* data; int vers; int autonomous; int dev; } ;
struct cec_log_addrs {int* primary_device_type; int log_addr_mask; int num_log_addrs; int cec_version; int osd_name; void** all_device_types; void** log_addr_type; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;







 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int,...) ;
 int FUNC_3 (struct pulse8*,int*,int,int,int) ;
 int FUNC_4 (int,int*,int) ;
 int FUNC_5 (int,int ,struct tm*) ;

__attribute__((used)) static int FUNC_6(struct pulse8 *VAR_21, struct serio *VAR_22,
   struct cec_log_addrs *VAR_23, u16 *VAR_24)
{
 u8 *VAR_25 = VAR_21->data + 1;
 u8 VAR_26[2];
 int VAR_27;
 struct tm VAR_28;
 time64_t VAR_29;

 VAR_21->vers = 0;

 VAR_26[0] = VAR_13;
 VAR_27 = FUNC_3(VAR_21, VAR_26, 1, VAR_26[0], 2);
 if (VAR_27)
  return VAR_27;
 VAR_21->vers = (VAR_25[0] << 8) | VAR_25[1];
 FUNC_2(VAR_21->dev, "Firmware version %04x\n", VAR_21->vers);
 if (VAR_21->vers < 2) {
  *VAR_24 = VAR_12;
  return 0;
 }

 VAR_26[0] = VAR_15;
 VAR_27 = FUNC_3(VAR_21, VAR_26, 1, VAR_26[0], 4);
 if (VAR_27)
  return VAR_27;
 VAR_29 = (VAR_25[0] << 24) | (VAR_25[1] << 16) | (VAR_25[2] << 8) | VAR_25[3];
 FUNC_5(VAR_29, 0, &VAR_28);
 FUNC_2(VAR_21->dev, "Firmware build date %04ld.%02d.%02d %02d:%02d:%02d\n",
   VAR_28.tm_year + 1900, VAR_28.tm_mon + 1, VAR_28.tm_mday,
   VAR_28.tm_hour, VAR_28.tm_min, VAR_28.tm_sec);

 FUNC_1(VAR_21->dev, "Persistent config:\n");
 VAR_26[0] = VAR_14;
 VAR_27 = FUNC_3(VAR_21, VAR_26, 1, VAR_26[0], 1);
 if (VAR_27)
  return VAR_27;
 VAR_21->autonomous = VAR_25[0];
 FUNC_1(VAR_21->dev, "Autonomous mode: %s",
  VAR_25[0] ? "on" : "off");

 VAR_26[0] = VAR_16;
 VAR_27 = FUNC_3(VAR_21, VAR_26, 1, VAR_26[0], 1);
 if (VAR_27)
  return VAR_27;
 VAR_23->primary_device_type[0] = VAR_25[0];
 FUNC_1(VAR_21->dev, "Primary device type: %d\n", VAR_25[0]);
 switch (VAR_23->primary_device_type[0]) {
 case 128:
  VAR_23->log_addr_type[0] = VAR_4;
  VAR_23->all_device_types[0] = VAR_11;
  break;
 case 131:
  VAR_23->log_addr_type[0] = VAR_1;
  VAR_23->all_device_types[0] = VAR_8;
  break;
 case 129:
  VAR_23->log_addr_type[0] = VAR_3;
  VAR_23->all_device_types[0] = VAR_10;
  break;
 case 133:
  VAR_23->log_addr_type[0] = VAR_0;
  VAR_23->all_device_types[0] = VAR_7;
  break;
 case 134:
  VAR_23->log_addr_type[0] = VAR_0;
  VAR_23->all_device_types[0] = VAR_6;
  break;
 case 130:
  VAR_23->log_addr_type[0] = VAR_5;
  VAR_23->all_device_types[0] = VAR_9;
  break;
 case 132:
  VAR_23->log_addr_type[0] = VAR_2;
  VAR_23->all_device_types[0] = VAR_9;
  break;
 default:
  VAR_23->log_addr_type[0] = VAR_5;
  VAR_23->all_device_types[0] = VAR_9;
  FUNC_2(VAR_21->dev, "Unknown Primary Device Type: %d\n",
    VAR_23->primary_device_type[0]);
  break;
 }

 VAR_26[0] = VAR_18;
 VAR_27 = FUNC_3(VAR_21, VAR_26, 1, VAR_26[0], 2);
 if (VAR_27)
  return VAR_27;
 VAR_23->log_addr_mask = (VAR_25[0] << 8) | VAR_25[1];
 FUNC_1(VAR_21->dev, "Logical address ACK mask: %x\n",
  VAR_23->log_addr_mask);
 if (VAR_23->log_addr_mask)
  VAR_23->num_log_addrs = 1;

 VAR_26[0] = VAR_20;
 VAR_27 = FUNC_3(VAR_21, VAR_26, 1, VAR_26[0], 1);
 if (VAR_27)
  return VAR_27;
 *VAR_24 = (VAR_25[0] << 8) | VAR_25[1];
 FUNC_1(VAR_21->dev, "Physical address: %x.%x.%x.%x\n",
  FUNC_0(*VAR_24));

 VAR_26[0] = VAR_17;
 VAR_27 = FUNC_3(VAR_21, VAR_26, 1, VAR_26[0], 1);
 if (VAR_27)
  return VAR_27;
 VAR_23->cec_version = VAR_25[0];
 FUNC_1(VAR_21->dev, "CEC version: %d\n", VAR_23->cec_version);

 VAR_26[0] = VAR_19;
 VAR_27 = FUNC_3(VAR_21, VAR_26, 1, VAR_26[0], 0);
 if (VAR_27)
  return VAR_27;
 FUNC_4(VAR_23->osd_name, VAR_25, sizeof(VAR_23->osd_name));
 FUNC_1(VAR_21->dev, "OSD name: %s\n", VAR_23->osd_name);

 return 0;
}
