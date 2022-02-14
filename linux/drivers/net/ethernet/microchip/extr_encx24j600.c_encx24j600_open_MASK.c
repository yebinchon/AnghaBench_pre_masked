
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* spi; } ;
struct encx24j600_priv {TYPE_2__ ctx; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct encx24j600_priv*) ;
 int FUNC_1 (struct encx24j600_priv*) ;
 int FUNC_2 (struct encx24j600_priv*) ;
 int VAR_3 ;
 int FUNC_3 (struct net_device*,char*,int ,int) ;
 struct encx24j600_priv* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,int *,int ,int,int ,struct encx24j600_priv*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_4)
{
 struct encx24j600_priv *VAR_5 = FUNC_4(VAR_4);

 int VAR_6 = FUNC_6(VAR_5->ctx.spi->irq, ((void*)0), VAR_3,
           VAR_2 | VAR_1,
           VAR_0, VAR_5);
 if (FUNC_7(VAR_6 < 0)) {
  FUNC_3(VAR_4, "request irq %d failed (ret = %d)\n",
      VAR_5->ctx.spi->irq, VAR_6);
  return VAR_6;
 }

 FUNC_0(VAR_5);
 FUNC_2(VAR_5);
 FUNC_1(VAR_5);
 FUNC_5(VAR_4);

 return 0;
}
