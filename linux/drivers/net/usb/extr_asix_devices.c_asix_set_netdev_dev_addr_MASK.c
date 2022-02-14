
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usbnet {TYPE_1__* net; } ;
struct TYPE_3__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (TYPE_1__*,char*) ;

__attribute__((used)) static void FUNC_4(struct usbnet *VAR_1, u8 *VAR_2)
{
 if (FUNC_1(VAR_2)) {
  FUNC_2(VAR_1->net->dev_addr, VAR_2, VAR_0);
 } else {
  FUNC_3(VAR_1->net, "invalid hw address, using random\n");
  FUNC_0(VAR_1->net);
 }
}
