
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trf7970a {int state; int aborting; int ignore_timeout; int lock; int dev; int timeout_work; } ;
struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct trf7970a* FUNC_4 (struct nfc_digital_dev*) ;
 int FUNC_5 (struct trf7970a*,int ) ;

__attribute__((used)) static void FUNC_6(struct nfc_digital_dev *VAR_1)
{
 struct trf7970a *VAR_2 = FUNC_4(VAR_1);

 FUNC_1(VAR_2->dev, "Abort process initiated\n");

 FUNC_2(&VAR_2->lock);

 switch (VAR_2->state) {
 case 129:
 case 131:
 case 130:
 case 128:
  VAR_2->aborting = 1;
  break;
 case 132:
  VAR_2->ignore_timeout = !FUNC_0(&VAR_2->timeout_work);
  FUNC_5(VAR_2, -VAR_0);
  FUNC_1(VAR_2->dev, "Abort process complete\n");
  break;
 default:
  break;
 }

 FUNC_3(&VAR_2->lock);
}
