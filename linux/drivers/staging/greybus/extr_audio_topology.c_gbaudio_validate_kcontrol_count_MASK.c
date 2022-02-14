
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_audio_widget {int type; int ncontrols; } ;


 int VAR_0 ;
__attribute__((used)) static int FUNC_0(struct gb_audio_widget *VAR_1)
{
 int VAR_2 = 0;

 switch (VAR_1->type) {
 case 129:
 case 134:
 case 132:
 case 130:
 case 133:
  if (VAR_1->ncontrols)
   VAR_2 = -VAR_0;
  break;
 case 128:
 case 131:
  if (VAR_1->ncontrols != 1)
   VAR_2 = -VAR_0;
  break;
 default:
  break;
 }

 return VAR_2;
}
