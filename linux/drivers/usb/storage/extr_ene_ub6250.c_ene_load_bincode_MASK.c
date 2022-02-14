
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us_data {int * srb; TYPE_1__* pusb_dev; scalar_t__ extra; scalar_t__ iobuf; } ;
struct firmware {int size; int data; } ;
struct ene_ub6250_info {unsigned char BIN_FLAG; } ;
struct bulk_cb_wrap {int Flags; int* CDB; int DataTransferLength; int Signature; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;

 char* VAR_3 ;

 char* VAR_4 ;

 char* VAR_5 ;

 char* VAR_6 ;

 char* VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct us_data*,int ,unsigned char*,int ) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct bulk_cb_wrap*,int ,int) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,char*,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (struct us_data*,char*,...) ;

__attribute__((used)) static int FUNC_9(struct us_data *VAR_11, unsigned char VAR_12)
{
 int VAR_13;
 char *VAR_14 = ((void*)0);
 unsigned char *VAR_15 = ((void*)0);
 const struct firmware *VAR_16 = ((void*)0);
 int VAR_17 = VAR_8;
 struct bulk_cb_wrap *VAR_18 = (struct bulk_cb_wrap *) VAR_11->iobuf;
 struct ene_ub6250_info *VAR_19 = (struct ene_ub6250_info *) VAR_11->extra;

 if (VAR_19->BIN_FLAG == VAR_12)
  return VAR_9;

 switch (VAR_12) {

 case 130:
  FUNC_8(VAR_11, "SD_INIT1_PATTERN\n");
  VAR_14 = VAR_5;
  break;
 case 129:
  FUNC_8(VAR_11, "SD_INIT2_PATTERN\n");
  VAR_14 = VAR_6;
  break;
 case 128:
  FUNC_8(VAR_11, "SD_RW_PATTERN\n");
  VAR_14 = VAR_7;
  break;

 case 132:
  FUNC_8(VAR_11, "MS_INIT_PATTERN\n");
  VAR_14 = VAR_3;
  break;
 case 133:
  FUNC_8(VAR_11, "MSP_RW_PATTERN\n");
  VAR_14 = VAR_2;
  break;
 case 131:
  FUNC_8(VAR_11, "MS_RW_PATTERN\n");
  VAR_14 = VAR_4;
  break;
 default:
  FUNC_8(VAR_11, "----------- Unknown PATTERN ----------\n");
  goto nofw;
 }

 VAR_13 = FUNC_6(&VAR_16, VAR_14, &VAR_11->pusb_dev->dev);
 if (VAR_13) {
  FUNC_8(VAR_11, "load firmware %s failed\n", VAR_14);
  goto nofw;
 }
 VAR_15 = FUNC_3(VAR_16->data, VAR_16->size, VAR_1);
 if (VAR_15 == ((void*)0))
  goto nofw;

 FUNC_4(VAR_18, 0, sizeof(struct bulk_cb_wrap));
 VAR_18->Signature = FUNC_0(VAR_10);
 VAR_18->DataTransferLength = VAR_16->size;
 VAR_18->Flags = 0x00;
 VAR_18->CDB[0] = 0xEF;

 VAR_17 = FUNC_1(VAR_11, VAR_0, VAR_15, 0);
 if (VAR_11->srb != ((void*)0))
  FUNC_7(VAR_11->srb, 0);
 VAR_19->BIN_FLAG = VAR_12;
 FUNC_2(VAR_15);

nofw:
 FUNC_5(VAR_16);
 return VAR_17;
}
