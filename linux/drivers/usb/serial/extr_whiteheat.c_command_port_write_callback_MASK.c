
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {int status; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static void FUNC_1(struct urb *VAR_0)
{
 int VAR_1 = VAR_0->status;

 if (VAR_1) {
  FUNC_0(&VAR_0->dev->dev, "nonzero urb status: %d\n", VAR_1);
  return;
 }
}
