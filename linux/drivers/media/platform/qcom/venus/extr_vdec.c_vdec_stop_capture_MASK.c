
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int codec_state; int registeredbufs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_1 (struct venus_inst*,int ) ;
 int FUNC_2 (struct venus_inst*) ;
 int FUNC_3 (struct venus_inst*) ;

__attribute__((used)) static int FUNC_4(struct venus_inst *VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4->codec_state) {
 case 130:
  VAR_5 = FUNC_1(VAR_4, VAR_0);

 case 129:
  FUNC_2(VAR_4);
  VAR_4->codec_state = VAR_3;
  break;
 case 128:
  VAR_5 = FUNC_1(VAR_4, VAR_1);
  FUNC_2(VAR_4);
  VAR_4->codec_state = VAR_2;
  FUNC_0(&VAR_4->registeredbufs);
  FUNC_3(VAR_4);
  break;
 default:
  return 0;
 }

 return VAR_5;
}
