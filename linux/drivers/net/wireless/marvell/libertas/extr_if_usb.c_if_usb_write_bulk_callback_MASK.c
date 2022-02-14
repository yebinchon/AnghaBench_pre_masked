
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ status; int actual_length; TYPE_1__* dev; scalar_t__ context; } ;
struct lbs_private {scalar_t__ dnld_sent; } ;
struct if_usb_card {struct lbs_private* priv; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_1)
{
 struct if_usb_card *VAR_2 = (struct if_usb_card *) VAR_1->context;



 if (VAR_1->status == 0) {
  struct lbs_private *VAR_3 = VAR_2->priv;

  FUNC_0(&VAR_1->dev->dev, "URB status is successful\n");
  FUNC_0(&VAR_1->dev->dev, "Actual length transmitted %d\n",
        VAR_1->actual_length);




  if (VAR_3 && VAR_3->dnld_sent != VAR_0)
   FUNC_1(VAR_3);
 } else {

  FUNC_2("URB in failure status: %d\n", VAR_1->status);
 }
}
