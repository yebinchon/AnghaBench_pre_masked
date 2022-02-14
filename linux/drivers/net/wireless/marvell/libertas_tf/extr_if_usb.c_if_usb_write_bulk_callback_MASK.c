
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ status; int actual_length; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 if (VAR_0->status != 0) {

  FUNC_1("URB in failure status: %d\n", VAR_0->status);
 } else {
  FUNC_0(&VAR_0->dev->dev, "URB status is successful\n");
  FUNC_0(&VAR_0->dev->dev, "Actual length transmitted %d\n",
        VAR_0->actual_length);
 }
}
