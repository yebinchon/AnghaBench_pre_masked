
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trf7970a {int is_initiator; scalar_t__ state; int lock; int dev; } ;
struct nfc_digital_dev {int dummy; } ;


 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct trf7970a* FUNC_3 (struct nfc_digital_dev*) ;
 int FUNC_4 (struct trf7970a*,int) ;
 int FUNC_5 (struct trf7970a*,int) ;
 int FUNC_6 (struct trf7970a*) ;

__attribute__((used)) static int FUNC_7(struct nfc_digital_dev *VAR_3, int VAR_4,
        int VAR_5)
{
 struct trf7970a *VAR_6 = FUNC_3(VAR_3);
 int VAR_7;

 FUNC_0(VAR_6->dev, "Configure hw - type: %d, param: %d\n", VAR_4, VAR_5);

 FUNC_1(&VAR_6->lock);

 VAR_6->is_initiator = 1;

 if ((VAR_6->state == VAR_1) ||
     (VAR_6->state == VAR_2)) {
  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7)
   goto err_unlock;
 }

 switch (VAR_4) {
 case 128:
  VAR_7 = FUNC_5(VAR_6, VAR_5);
  break;
 case 129:
  VAR_7 = FUNC_4(VAR_6, VAR_5);
  break;
 default:
  FUNC_0(VAR_6->dev, "Unknown type: %d\n", VAR_4);
  VAR_7 = -VAR_0;
 }

err_unlock:
 FUNC_2(&VAR_6->lock);
 return VAR_7;
}
