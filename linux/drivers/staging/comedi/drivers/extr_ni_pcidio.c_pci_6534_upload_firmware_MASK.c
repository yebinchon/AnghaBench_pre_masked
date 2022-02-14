
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nidio96_private {TYPE_2__* mite; } ;
struct comedi_device {struct nidio96_private* private; } ;
struct TYPE_4__ {TYPE_1__* pcidev; } ;
struct TYPE_3__ {int dev; } ;





 int FUNC_0 (struct comedi_device*,int *,char const* const,int ,int) ;
 int FUNC_1 (struct comedi_device*) ;
 int VAR_0 ;
 int FUNC_2 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1)
{
 struct nidio96_private *VAR_2 = VAR_1->private;
 static const char *const VAR_3[3] = {
  129,
  128,
  130,
 };
 int VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 for (VAR_5 = 2; VAR_5 >= 0; VAR_5--) {
  VAR_4 = FUNC_0(VAR_1, &VAR_2->mite->pcidev->dev,
        VAR_3[VAR_5],
        VAR_0, VAR_5);
  if (VAR_4 == 0 && VAR_5 == 2)
   FUNC_1(VAR_1);
  if (VAR_4 < 0)
   break;
 }
 return VAR_4;
}
