
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st95hf_context {int sendrcv_trflag; } ;
struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct st95hf_context* FUNC_0 (struct nfc_digital_dev*) ;
 int FUNC_1 (struct st95hf_context*,int) ;

__attribute__((used)) static int FUNC_2(struct nfc_digital_dev *VAR_5,
      int VAR_6,
      int VAR_7)
{
 struct st95hf_context *VAR_8 = FUNC_0(VAR_5);

 if (VAR_6 == VAR_1)
  return FUNC_1(VAR_8, VAR_7);

 if (VAR_6 == VAR_0) {
  switch (VAR_7) {
  case 132:
   VAR_8->sendrcv_trflag = VAR_2;
   break;
  case 131:
   VAR_8->sendrcv_trflag = VAR_3;
   break;
  case 129:
  case 133:
  case 130:
   VAR_8->sendrcv_trflag = VAR_4;
   break;
  case 128:
  case 135:
  case 134:
   break;
  }
 }

 return 0;
}
