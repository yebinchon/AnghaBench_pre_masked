
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u16 ;
struct MPT3SAS_ADAPTER {int logging_level; } ;
struct TYPE_8__ {scalar_t__ IOCLogInfo; scalar_t__ IOCStatus; } ;
struct TYPE_6__ {int PageType; int PageNumber; } ;
struct TYPE_7__ {scalar_t__ PageAddress; int Action; TYPE_1__ Header; int ExtPageType; } ;
typedef TYPE_2__ Mpi2ConfigRequest_t ;
typedef TYPE_3__ MPI2DefaultReply_t ;
 int VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (struct MPT3SAS_ADAPTER*,char*,char*,char*,...) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (struct MPT3SAS_ADAPTER*,int ) ;

__attribute__((used)) static void
FUNC_4(struct MPT3SAS_ADAPTER *VAR_2, u16 VAR_3,
 char *VAR_4, MPI2DefaultReply_t *VAR_5)
{
 Mpi2ConfigRequest_t *VAR_6;
 char *VAR_7 = ((void*)0);

 if (!(VAR_2->logging_level & VAR_1))
  return;

 VAR_6 = FUNC_3(VAR_2, VAR_3);
 switch (VAR_6->Header.PageType & VAR_0) {
 case 131:
  VAR_7 = "io_unit";
  break;
 case 132:
  VAR_7 = "ioc";
  break;
 case 134:
  VAR_7 = "bios";
  break;
 case 128:
  VAR_7 = "raid_volume";
  break;
 case 130:
  VAR_7 = "manufacturing";
  break;
 case 129:
  VAR_7 = "physdisk";
  break;
 case 133:
  switch (VAR_6->ExtPageType) {
  case 137:
   VAR_7 = "sas_io_unit";
   break;
  case 138:
   VAR_7 = "sas_expander";
   break;
  case 139:
   VAR_7 = "sas_device";
   break;
  case 136:
   VAR_7 = "sas_phy";
   break;
  case 145:
   VAR_7 = "log";
   break;
  case 147:
   VAR_7 = "enclosure";
   break;
  case 140:
   VAR_7 = "raid_config";
   break;
  case 148:
   VAR_7 = "driver_mapping";
   break;
  case 135:
   VAR_7 = "sas_port";
   break;
  case 146:
   VAR_7 = "ext_manufacturing";
   break;
  case 143:
   VAR_7 = "pcie_io_unit";
   break;
  case 141:
   VAR_7 = "pcie_switch";
   break;
  case 144:
   VAR_7 = "pcie_device";
   break;
  case 142:
   VAR_7 = "pcie_link";
   break;
  }
  break;
 }

 if (!VAR_7)
  return;

 FUNC_0(VAR_2, "%s: %s(%d), action(%d), form(0x%08x), smid(%d)\n",
   VAR_4, VAR_7,
   VAR_6->Header.PageNumber, VAR_6->Action,
   FUNC_2(VAR_6->PageAddress), VAR_3);

 if (!VAR_5)
  return;

 if (VAR_5->IOCStatus || VAR_5->IOCLogInfo)
  FUNC_0(VAR_2, "\tiocstatus(0x%04x), loginfo(0x%08x)\n",
    FUNC_1(VAR_5->IOCStatus),
    FUNC_2(VAR_5->IOCLogInfo));
}
