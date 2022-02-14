
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct venus_inst {int codec_state; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;

 int FUNC_0 (struct venus_inst*,int ) ;

__attribute__((used)) static int FUNC_1(struct venus_inst *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->codec_state) {
 case 131:
 case 130:
 case 128:
  VAR_4 = FUNC_0(VAR_3, VAR_0);
  VAR_3->codec_state = VAR_2;
  break;
 case 129:
 case 132:
  VAR_4 = FUNC_0(VAR_3, VAR_1);
  break;
 default:
  break;
 }

 return VAR_4;
}
