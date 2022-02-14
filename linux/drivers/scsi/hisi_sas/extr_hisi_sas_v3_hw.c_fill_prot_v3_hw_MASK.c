
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct scsi_cmnd {int request; } ;
struct hisi_sas_protect_iu_v3_hw {int dw0; int dw4; void* lbrtcv; void* lbrtgv; } ;


 int VAR_0 ;






 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,unsigned int) ;
 int FUNC_1 (struct scsi_cmnd*) ;
 unsigned char FUNC_2 (struct scsi_cmnd*) ;
 unsigned int FUNC_3 (struct scsi_cmnd*) ;
 void* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct scsi_cmnd *VAR_5,
       struct hisi_sas_protect_iu_v3_hw *VAR_6)
{
 unsigned char VAR_7 = FUNC_2(VAR_5);
 unsigned int VAR_8 = FUNC_3(VAR_5);
 u32 VAR_9 = FUNC_4(VAR_5->request);

 switch (VAR_7) {
 case 133:
  VAR_6->dw0 |= VAR_2;
  VAR_6->lbrtgv = VAR_9;
  break;
 case 131:
  VAR_6->dw0 |= (VAR_3 | VAR_1);
  VAR_6->lbrtcv = VAR_9;
  VAR_6->dw4 |= FUNC_1(VAR_5);
  break;
 case 132:
  VAR_6->dw0 |= VAR_1;
  VAR_6->lbrtcv = VAR_9;
  VAR_6->dw4 |= FUNC_1(VAR_5);
  break;
 case 130:
  VAR_6->dw0 |= VAR_2;
  VAR_6->lbrtgv = VAR_9;
  break;
 case 128:
  VAR_6->dw0 |= (VAR_3 | VAR_1);
  VAR_6->lbrtcv = VAR_9;
  break;
 case 129:
  VAR_6->dw0 |= VAR_1;
  VAR_6->lbrtcv = VAR_9;
  VAR_6->dw4 |= FUNC_1(VAR_5);
  break;
 default:
  FUNC_0(1, "prot_op(0x%x) is not valid\n", VAR_7);
  break;
 }

 switch (VAR_8) {
 case 512:
  break;
 case 4096:
  VAR_6->dw0 |= (0x1 << VAR_4);
  break;
 case 520:
  VAR_6->dw0 |= (0x2 << VAR_4);
  break;
 default:
  FUNC_0(1, "protection interval (0x%x) invalid\n",
       VAR_8);
  break;
 }

 VAR_6->dw0 |= VAR_0;
}
