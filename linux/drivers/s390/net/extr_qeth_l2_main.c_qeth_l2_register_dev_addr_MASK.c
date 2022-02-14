
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mac_bits; } ;
struct qeth_card {TYPE_2__ info; TYPE_1__* dev; } ;
struct TYPE_3__ {int dev_addr; } ;


 int FUNC_0 (struct qeth_card*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct qeth_card*) ;
 int FUNC_3 (struct qeth_card*,int ) ;

__attribute__((used)) static void FUNC_4(struct qeth_card *VAR_1)
{
 if (!FUNC_1(VAR_1->dev->dev_addr))
  FUNC_2(VAR_1);

 if (!FUNC_0(VAR_1) && !FUNC_3(VAR_1, VAR_1->dev->dev_addr))
  VAR_1->info.mac_bits |= VAR_0;
}
