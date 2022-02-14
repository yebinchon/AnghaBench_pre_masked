
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct smc_private {scalar_t__ base; } ;
struct pcmcia_device {scalar_t__ config_base; struct net_device* priv; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 struct smc_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_2)
{
    struct net_device *VAR_3 = VAR_2->priv;
    struct smc_private *VAR_4 = FUNC_1(VAR_3);
    u_char VAR_5;


    FUNC_2(VAR_4->base+VAR_1);
    FUNC_3(5);
    FUNC_2(VAR_4->base+VAR_1);


    FUNC_0(200);


    VAR_5 = FUNC_2(VAR_4->base + VAR_2->config_base + VAR_0);
    FUNC_3(5);
    FUNC_4(VAR_5, VAR_4->base + VAR_2->config_base + VAR_0);

    return 0;
}
