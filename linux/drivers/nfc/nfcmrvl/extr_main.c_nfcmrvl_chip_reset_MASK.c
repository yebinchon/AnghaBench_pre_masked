
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int reset_n_io; } ;
struct nfcmrvl_private {int dev; TYPE_1__ config; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int,int) ;

void FUNC_5(struct nfcmrvl_private *VAR_1)
{

 FUNC_0(VAR_0, &VAR_1->flags);

 if (FUNC_1(VAR_1->config.reset_n_io)) {
  FUNC_3(VAR_1->dev, "reset the chip\n");
  FUNC_2(VAR_1->config.reset_n_io, 0);
  FUNC_4(5000, 10000);
  FUNC_2(VAR_1->config.reset_n_io, 1);
 } else
  FUNC_3(VAR_1->dev, "no reset available on this interface\n");
}
