
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct redrat3_dev {int wideband; int dev; int learn_urb; } ;
struct rc_dev {struct redrat3_dev* priv; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct rc_dev *VAR_1, int VAR_2)
{
 struct redrat3_dev *VAR_3 = VAR_1->priv;
 int VAR_4 = 0;

 VAR_3->wideband = VAR_2 != 0;

 if (VAR_2) {
  VAR_4 = FUNC_1(VAR_3->learn_urb, VAR_0);
  if (VAR_4)
   FUNC_0(VAR_3->dev, "Failed to submit learning urb: %d",
         VAR_4);
 }

 return VAR_4;
}
