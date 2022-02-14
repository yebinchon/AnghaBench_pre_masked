
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_private {int cfg; int mii_if; } ;
struct net_device {unsigned int base_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 struct smc_private* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_3)
{
    unsigned int VAR_4 = VAR_3->base_addr;
    struct smc_private *VAR_5 = FUNC_3(VAR_3);

    if (VAR_5->cfg & VAR_0) {
 return FUNC_2(&VAR_5->mii_if);
    } else {
        FUNC_0(0);
 return FUNC_1(VAR_4 + VAR_1) & VAR_2;
    }
}
