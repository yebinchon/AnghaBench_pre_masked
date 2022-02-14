
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int bRadioOff; int byRFType; int PortOffset; int byLocalID; scalar_t__ bRadioControlOff; scalar_t__ bHWRadioOff; } ;


 int FUNC_0 (struct vnt_private*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*) ;

bool FUNC_6(struct vnt_private *VAR_9)
{
 bool VAR_10 = 1;

 FUNC_5("chester power on\n");
 if (VAR_9->bRadioControlOff) {
  if (VAR_9->bHWRadioOff)
   FUNC_5("chester bHWRadioOff\n");
  if (VAR_9->bRadioControlOff)
   FUNC_5("chester bRadioControlOff\n");
  return 0; }

 if (!VAR_9->bRadioOff) {
  FUNC_5("chester pbRadioOff\n");
  return 1; }

 FUNC_0(VAR_9, VAR_9->byLocalID);

 FUNC_2(VAR_9->PortOffset, VAR_3, VAR_0);

 switch (VAR_9->byRFType) {
 case 128:
  FUNC_4(VAR_9->PortOffset, VAR_4,
      VAR_8);
  FUNC_3(VAR_9->PortOffset, VAR_4,
       VAR_5);
  break;

 case 131:
 case 129:
 case 130:
  FUNC_4(VAR_9->PortOffset, VAR_4,
      (VAR_6 | VAR_7));
  break;
 }

 VAR_9->bRadioOff = 0;
 FUNC_5("chester power on\n");
 FUNC_1(VAR_9->PortOffset, VAR_2,
         VAR_1);
 return VAR_10;
}
