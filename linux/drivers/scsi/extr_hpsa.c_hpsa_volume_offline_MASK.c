
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ctlr_info {int dummy; } ;
struct CommandList {TYPE_1__* err_info; } ;
struct TYPE_2__ {unsigned char* SenseInfo; int SenseLen; int ScsiStatus; int CommandStatus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 unsigned char VAR_3 ;







 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct CommandList* FUNC_0 (struct ctlr_info*) ;
 int FUNC_1 (struct ctlr_info*,struct CommandList*) ;
 int FUNC_2 (unsigned char*,int,int *,int *,int *) ;
 int FUNC_3 (struct CommandList*,int ,struct ctlr_info*,int *,int ,int ,unsigned char*,int ) ;
 int FUNC_4 (struct ctlr_info*,unsigned char*) ;
 int FUNC_5 (struct ctlr_info*,struct CommandList*,int ,int ) ;

__attribute__((used)) static unsigned char FUNC_6(struct ctlr_info *VAR_7,
     unsigned char VAR_8[])
{
 struct CommandList *VAR_9;
 unsigned char *VAR_10;
 u8 VAR_11, VAR_12, VAR_13;
 int VAR_14;
 int VAR_15, VAR_16 = 0;
 u16 VAR_17;
 u8 VAR_18;




 VAR_9 = FUNC_0(VAR_7);

 (void) FUNC_3(VAR_9, VAR_5, VAR_7, ((void*)0), 0, 0, VAR_8, VAR_6);
 VAR_15 = FUNC_5(VAR_7, VAR_9, VAR_2,
     VAR_4);
 if (VAR_15) {
  FUNC_1(VAR_7, VAR_9);
  return 128;
 }
 VAR_10 = VAR_9->err_info->SenseInfo;
 if (VAR_9->err_info->SenseLen > sizeof(VAR_9->err_info->SenseInfo))
  VAR_14 = sizeof(VAR_9->err_info->SenseInfo);
 else
  VAR_14 = VAR_9->err_info->SenseLen;
 FUNC_2(VAR_10, VAR_14, &VAR_11, &VAR_12, &VAR_13);
 VAR_17 = VAR_9->err_info->CommandStatus;
 VAR_18 = VAR_9->err_info->ScsiStatus;
 FUNC_1(VAR_7, VAR_9);


 VAR_16 = FUNC_4(VAR_7, VAR_8);


 switch (VAR_16) {
 case 136:
 case 130:
 case 135:
 case 129:
 case 134:
 case 137:
 case 133:
 case 132:
 case 131:
 case 138:
  return VAR_16;
 case 128:



  if ((VAR_13 == 0x04) ||
   (VAR_13 == 0x02))
   return VAR_16;
  break;
 default:
  break;
 }
 return VAR_3;
}
