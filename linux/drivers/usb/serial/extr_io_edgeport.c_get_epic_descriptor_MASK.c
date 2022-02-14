
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct usb_serial {TYPE_1__* interface; TYPE_2__* dev; } ;
struct edge_compatibility_bits {scalar_t__ TrueEdgeport; scalar_t__ IOSPSetBaudRate; scalar_t__ IOSPWriteLCR; scalar_t__ IOSPWriteMCR; scalar_t__ IOSPSetClrBreak; scalar_t__ IOSPRxCheck; scalar_t__ IOSPSetXChar; scalar_t__ IOSPSetTxFlow; scalar_t__ IOSPSetRxFlow; scalar_t__ IOSPChase; scalar_t__ IOSPClose; scalar_t__ IOSPOpen; scalar_t__ VendEnableSuspend; } ;
struct TYPE_7__ {struct edge_compatibility_bits Supports; } ;
struct edgeport_product_info {int ProductId; int Epic; int EpicVer; int iDownloadFile; int FirmwareBuildNumber; int FirmwareMinorVersion; int FirmwareMajorVersion; scalar_t__ ProdInfoVer; int NumPorts; } ;
struct edgeport_serial {int is_epic; TYPE_4__ epic_descriptor; struct edgeport_product_info product_info; struct usb_serial* serial; } ;
struct edge_compatibility_descriptor {int Supports; int EpicVer; int iDownloadFile; int BuildNumber; int MinorVersion; int MajorVersion; int NumPorts; } ;
struct device {int dummy; } ;
struct TYPE_6__ {struct device dev; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct edgeport_serial*,struct edgeport_product_info*) ;
 int FUNC_3 (struct edge_compatibility_descriptor*) ;
 struct edge_compatibility_descriptor* FUNC_4 (int,int ) ;
 int FUNC_5 (TYPE_4__*,struct edge_compatibility_descriptor*,int) ;
 int FUNC_6 (struct edgeport_product_info*,int ,int) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int,int,int,struct edge_compatibility_descriptor*,int,int) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_9(struct edgeport_serial *VAR_5)
{
 int VAR_6;
 struct usb_serial *VAR_7 = VAR_5->serial;
 struct edgeport_product_info *VAR_8 = &VAR_5->product_info;
 struct edge_compatibility_descriptor *VAR_9;
 struct edge_compatibility_bits *VAR_10;
 struct device *VAR_11 = &VAR_7->dev->dev;

 VAR_5->is_epic = 0;

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_6 = FUNC_7(VAR_7->dev, FUNC_8(VAR_7->dev, 0),
     VAR_4,
     0xC0, 0x00, 0x00,
     VAR_9, sizeof(*VAR_9),
     300);
 if (VAR_6 == sizeof(*VAR_9)) {
  VAR_5->is_epic = 1;
  FUNC_5(&VAR_5->epic_descriptor, VAR_9, sizeof(*VAR_9));
  FUNC_6(VAR_8, 0, sizeof(struct edgeport_product_info));

  VAR_8->NumPorts = VAR_9->NumPorts;
  VAR_8->ProdInfoVer = 0;
  VAR_8->FirmwareMajorVersion = VAR_9->MajorVersion;
  VAR_8->FirmwareMinorVersion = VAR_9->MinorVersion;
  VAR_8->FirmwareBuildNumber = VAR_9->BuildNumber;
  VAR_8->iDownloadFile = VAR_9->iDownloadFile;
  VAR_8->EpicVer = VAR_9->EpicVer;
  VAR_8->Epic = VAR_9->Supports;
  VAR_8->ProductId = VAR_3;
  FUNC_2(VAR_5, VAR_8);

  VAR_10 = &VAR_5->epic_descriptor.Supports;
  FUNC_0(VAR_11, "**EPIC descriptor:\n");
  FUNC_0(VAR_11, "  VendEnableSuspend: %s\n", VAR_10->VendEnableSuspend ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPOpen         : %s\n", VAR_10->IOSPOpen ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPClose        : %s\n", VAR_10->IOSPClose ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPChase        : %s\n", VAR_10->IOSPChase ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPSetRxFlow    : %s\n", VAR_10->IOSPSetRxFlow ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPSetTxFlow    : %s\n", VAR_10->IOSPSetTxFlow ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPSetXChar     : %s\n", VAR_10->IOSPSetXChar ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPRxCheck      : %s\n", VAR_10->IOSPRxCheck ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPSetClrBreak  : %s\n", VAR_10->IOSPSetClrBreak ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPWriteMCR     : %s\n", VAR_10->IOSPWriteMCR ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPWriteLCR     : %s\n", VAR_10->IOSPWriteLCR ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  IOSPSetBaudRate  : %s\n", VAR_10->IOSPSetBaudRate ? "TRUE": "FALSE");
  FUNC_0(VAR_11, "  TrueEdgeport     : %s\n", VAR_10->TrueEdgeport ? "TRUE": "FALSE");

  VAR_6 = 0;
 } else if (VAR_6 >= 0) {
  FUNC_1(&VAR_7->interface->dev, "short epic descriptor received: %d\n",
    VAR_6);
  VAR_6 = -VAR_0;
 }

 FUNC_3(VAR_9);

 return VAR_6;
}
