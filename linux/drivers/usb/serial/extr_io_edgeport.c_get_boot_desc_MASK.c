
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int UConfig1; int UConfig0; int Capabilities; int BuildNumber; int MinorVersion; int MajorVersion; int BootCodeLength; } ;
struct edgeport_serial {TYPE_2__ boot_descriptor; TYPE_3__* serial; } ;
struct device {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_6__ {TYPE_1__* dev; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*,int,int ,int ,int *) ;

__attribute__((used)) static void FUNC_4(struct edgeport_serial *VAR_2)
{
 struct device *VAR_3 = &VAR_2->serial->dev->dev;
 int VAR_4;

 FUNC_0(VAR_3, "getting boot descriptor\n");

 VAR_4 = FUNC_3(VAR_2->serial,
    (VAR_0 & 0xffff0000) >> 16,
    (__u16)(VAR_0 & 0x0000ffff),
    VAR_1,
    (__u8 *)(&VAR_2->boot_descriptor));

 if (VAR_4 < 0) {
  FUNC_1(VAR_3, "error in getting boot descriptor: %d\n",
    VAR_4);
 } else {
  FUNC_0(VAR_3, "**Boot Descriptor:\n");
  FUNC_0(VAR_3, "  BootCodeLength: %d\n",
   FUNC_2(VAR_2->boot_descriptor.BootCodeLength));
  FUNC_0(VAR_3, "  MajorVersion:   %d\n",
   VAR_2->boot_descriptor.MajorVersion);
  FUNC_0(VAR_3, "  MinorVersion:   %d\n",
   VAR_2->boot_descriptor.MinorVersion);
  FUNC_0(VAR_3, "  BuildNumber:    %d\n",
   FUNC_2(VAR_2->boot_descriptor.BuildNumber));
  FUNC_0(VAR_3, "  Capabilities:   0x%x\n",
        FUNC_2(VAR_2->boot_descriptor.Capabilities));
  FUNC_0(VAR_3, "  UConfig0:       %d\n",
   VAR_2->boot_descriptor.UConfig0);
  FUNC_0(VAR_3, "  UConfig1:       %d\n",
   VAR_2->boot_descriptor.UConfig1);
 }
}
