
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_private {int bRadioOff; int byRFType; int PortOffset; int byLocalID; } ;


 int FUNC_0 (struct vnt_private*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;




 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (char*) ;

void FUNC_6(struct vnt_private *VAR_9)
{
 if (VAR_9->bRadioOff)
  return;

 switch (VAR_9->byRFType) {
 case 128:
  FUNC_3(VAR_9->PortOffset, VAR_4,
       VAR_8);
  FUNC_4(VAR_9->PortOffset, VAR_4,
      VAR_5);
  break;

 case 131:
 case 129:
 case 130:
  FUNC_3(VAR_9->PortOffset, VAR_4,
       VAR_6);
  FUNC_3(VAR_9->PortOffset, VAR_4,
       VAR_7);
  break;
 }

 FUNC_1(VAR_9->PortOffset, VAR_3, VAR_0);

 FUNC_0(VAR_9, VAR_9->byLocalID);

 VAR_9->bRadioOff = 1;
 FUNC_5("chester power off\n");
 FUNC_2(VAR_9->PortOffset, VAR_2,
        VAR_1);
}
