
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mantis_pci {int dummy; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
typedef enum fe_sec_voltage { ____Placeholder_fe_sec_voltage } fe_sec_voltage ;
struct TYPE_2__ {struct mantis_pci* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_0 (int ,int,char*,...) ;
 int FUNC_1 (struct mantis_pci*,int,int) ;
 int FUNC_2 (int,int ) ;

int FUNC_3(struct dvb_frontend *VAR_3, enum fe_sec_voltage VAR_4)
{
 struct mantis_pci *VAR_5 = VAR_3->dvb->priv;

 switch (VAR_4) {
 case 130:
  FUNC_0(VAR_1, 1, "Polarization=[13V]");
  FUNC_1(VAR_5, 13, 1);
  FUNC_1(VAR_5, 14, 0);
  break;
 case 129:
  FUNC_0(VAR_1, 1, "Polarization=[18V]");
  FUNC_1(VAR_5, 13, 1);
  FUNC_1(VAR_5, 14, 1);
  break;
 case 128:
  FUNC_0(VAR_1, 1, "Frontend (dummy) POWERDOWN");
  break;
 default:
  FUNC_0(VAR_1, 1, "Invalid = (%d)", (u32) VAR_4);
  return -VAR_0;
 }
 FUNC_2(0x00, VAR_2);

 return 0;
}
