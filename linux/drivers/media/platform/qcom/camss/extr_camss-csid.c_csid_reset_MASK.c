
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct csid_device {TYPE_1__* camss; int reset_complete; scalar_t__ base; } ;
struct TYPE_2__ {int dev; int version; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (int *,int ) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct csid_device *VAR_2)
{
 unsigned long VAR_3;

 FUNC_3(&VAR_2->reset_complete);

 FUNC_5(0x7fff, VAR_2->base +
         FUNC_0(VAR_2->camss->version));

 VAR_3 = FUNC_4(&VAR_2->reset_complete,
  FUNC_2(VAR_0));
 if (!VAR_3) {
  FUNC_1(VAR_2->camss->dev, "CSID reset timeout\n");
  return -VAR_1;
 }

 return 0;
}
