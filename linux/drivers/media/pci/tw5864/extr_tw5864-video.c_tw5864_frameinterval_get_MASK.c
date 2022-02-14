
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_fract {int numerator; int denominator; } ;
struct tw5864_input {int std; struct tw5864_dev* root; } ;
struct tw5864_dev {TYPE_1__* pci; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;



 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int FUNC_1(struct tw5864_input *VAR_1,
        struct v4l2_fract *VAR_2)
{
 struct tw5864_dev *VAR_3 = VAR_1->root;

 switch (VAR_1->std) {
 case 130:
  VAR_2->numerator = 1001;
  VAR_2->denominator = 30000;
  break;
 case 129:
 case 128:
  VAR_2->numerator = 1;
  VAR_2->denominator = 25;
  break;
 default:
  FUNC_0(&VAR_3->pci->dev, "tw5864_frameinterval_get requested for unknown std %d\n",
    VAR_1->std);
  return -VAR_0;
 }

 return 0;
}
