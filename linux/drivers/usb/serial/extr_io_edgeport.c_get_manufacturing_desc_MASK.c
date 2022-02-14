
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char* RomSize; char* RamSize; char* CpuRev; char* BoardRev; char* NumPorts; int SerNumLength; int AssemblyNumLength; int OemAssyNumLength; char* UartType; char* IonPid; char* IonConfig; int OemAssyNumber; int AssemblyNumber; int SerialNumber; scalar_t__* DescDate; } ;
struct edgeport_serial {TYPE_2__ manuf_descriptor; TYPE_3__* serial; } ;
struct device {int dummy; } ;
typedef int string ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (TYPE_3__*,int,int ,int ,int *) ;
 int FUNC_3 (char*,int,int ,int) ;

__attribute__((used)) static void FUNC_4(struct edgeport_serial *VAR_2)
{
 struct device *VAR_3 = &VAR_2->serial->dev->dev;
 int VAR_4;

 FUNC_0(VAR_3, "getting manufacturer descriptor\n");

 VAR_4 = FUNC_2(VAR_2->serial,
    (VAR_0 & 0xffff0000) >> 16,
    (__u16)(VAR_0 & 0x0000ffff),
    VAR_1,
    (__u8 *)(&VAR_2->manuf_descriptor));

 if (VAR_4 < 0) {
  FUNC_1(VAR_3, "error in getting manufacturer descriptor: %d\n",
    VAR_4);
 } else {
  char VAR_5[30];
  FUNC_0(VAR_3, "**Manufacturer Descriptor\n");
  FUNC_0(VAR_3, "  RomSize:        %dK\n",
   VAR_2->manuf_descriptor.RomSize);
  FUNC_0(VAR_3, "  RamSize:        %dK\n",
   VAR_2->manuf_descriptor.RamSize);
  FUNC_0(VAR_3, "  CpuRev:         %d\n",
   VAR_2->manuf_descriptor.CpuRev);
  FUNC_0(VAR_3, "  BoardRev:       %d\n",
   VAR_2->manuf_descriptor.BoardRev);
  FUNC_0(VAR_3, "  NumPorts:       %d\n",
   VAR_2->manuf_descriptor.NumPorts);
  FUNC_0(VAR_3, "  DescDate:       %d/%d/%d\n",
   VAR_2->manuf_descriptor.DescDate[0],
   VAR_2->manuf_descriptor.DescDate[1],
   VAR_2->manuf_descriptor.DescDate[2]+1900);
  FUNC_3(VAR_5, sizeof(VAR_5),
   VAR_2->manuf_descriptor.SerialNumber,
   VAR_2->manuf_descriptor.SerNumLength/2);
  FUNC_0(VAR_3, "  SerialNumber: %s\n", VAR_5);
  FUNC_3(VAR_5, sizeof(VAR_5),
   VAR_2->manuf_descriptor.AssemblyNumber,
   VAR_2->manuf_descriptor.AssemblyNumLength/2);
  FUNC_0(VAR_3, "  AssemblyNumber: %s\n", VAR_5);
  FUNC_3(VAR_5, sizeof(VAR_5),
      VAR_2->manuf_descriptor.OemAssyNumber,
      VAR_2->manuf_descriptor.OemAssyNumLength/2);
  FUNC_0(VAR_3, "  OemAssyNumber:  %s\n", VAR_5);
  FUNC_0(VAR_3, "  UartType:       %d\n",
   VAR_2->manuf_descriptor.UartType);
  FUNC_0(VAR_3, "  IonPid:         %d\n",
   VAR_2->manuf_descriptor.IonPid);
  FUNC_0(VAR_3, "  IonConfig:      %d\n",
   VAR_2->manuf_descriptor.IonConfig);
 }
}
