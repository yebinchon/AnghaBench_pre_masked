
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int DescDate; int BoardRev; int CpuRev; int RamSize; int RomSize; int NumPorts; } ;
struct TYPE_6__ {int BuildNumber; int MinorVersion; int MajorVersion; } ;
struct edgeport_product_info {int IsRS232; int IsRS422; int IsRS485; scalar_t__ ProductId; int iDownloadFile; int ManufactureDescDate; int BootBuildNumber; int BootMinorVersion; int BootMajorVersion; int BoardRev; int CpuRev; int RamSize; int RomSize; scalar_t__ ProdInfoVer; int NumPorts; } ;
struct edgeport_serial {TYPE_5__* serial; TYPE_2__ manuf_descriptor; TYPE_1__ boot_descriptor; struct edgeport_product_info product_info; } ;
typedef scalar_t__ __u16 ;
struct TYPE_10__ {TYPE_4__* dev; } ;
struct TYPE_8__ {int idProduct; } ;
struct TYPE_9__ {TYPE_3__ descriptor; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct edgeport_serial*,struct edgeport_product_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct edgeport_product_info*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct edgeport_serial *VAR_3)
{
 struct edgeport_product_info *VAR_4 = &VAR_3->product_info;

 FUNC_4(VAR_4, 0, sizeof(struct edgeport_product_info));

 VAR_4->ProductId = (__u16)(FUNC_2(VAR_3->serial->dev->descriptor.idProduct) & ~VAR_2);
 VAR_4->NumPorts = VAR_3->manuf_descriptor.NumPorts;
 VAR_4->ProdInfoVer = 0;

 VAR_4->RomSize = VAR_3->manuf_descriptor.RomSize;
 VAR_4->RamSize = VAR_3->manuf_descriptor.RamSize;
 VAR_4->CpuRev = VAR_3->manuf_descriptor.CpuRev;
 VAR_4->BoardRev = VAR_3->manuf_descriptor.BoardRev;

 VAR_4->BootMajorVersion =
    VAR_3->boot_descriptor.MajorVersion;
 VAR_4->BootMinorVersion =
    VAR_3->boot_descriptor.MinorVersion;
 VAR_4->BootBuildNumber =
    VAR_3->boot_descriptor.BuildNumber;

 FUNC_3(VAR_4->ManufactureDescDate,
   VAR_3->manuf_descriptor.DescDate,
   sizeof(VAR_3->manuf_descriptor.DescDate));


 if (FUNC_2(VAR_3->serial->dev->descriptor.idProduct)
         & VAR_2)
  VAR_4->iDownloadFile = VAR_0;
 else
  VAR_4->iDownloadFile = VAR_1;


 switch (FUNC_0(VAR_4->ProductId)) {
 case 128:
 case 133:
 case 136:
 case 140:
 case 129:
 case 131:
 case 135:
 case 139:
 case 137:
 case 132:
 case 141:
  VAR_4->IsRS232 = 1;
  break;

 case 138:
  VAR_4->IsRS422 = 1;
  VAR_4->IsRS485 = 1;
  break;

 case 130:
 case 134:
  VAR_4->IsRS422 = 1;
  break;
 }

 FUNC_1(VAR_3, VAR_4);
}
