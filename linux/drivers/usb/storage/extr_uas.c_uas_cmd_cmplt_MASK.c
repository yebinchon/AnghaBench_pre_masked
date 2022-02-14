
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ status; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct urb*) ;

__attribute__((used)) static void FUNC_2(struct urb *VAR_0)
{
 if (VAR_0->status)
  FUNC_0(&VAR_0->dev->dev, "cmd cmplt err %d\n", VAR_0->status);

 FUNC_1(VAR_0);
}
