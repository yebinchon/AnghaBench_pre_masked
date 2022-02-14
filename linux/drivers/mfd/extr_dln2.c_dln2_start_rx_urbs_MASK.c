
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dln2_dev {int * rx_urb; TYPE_1__* interface; } ;
struct device {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct dln2_dev *VAR_1, gfp_t VAR_2)
{
 struct device *VAR_3 = &VAR_1->interface->dev;
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_1(VAR_1->rx_urb[VAR_5], VAR_2);
  if (VAR_4 < 0) {
   FUNC_0(VAR_3, "failed to submit RX URB: %d\n", VAR_4);
   return VAR_4;
  }
 }

 return 0;
}
