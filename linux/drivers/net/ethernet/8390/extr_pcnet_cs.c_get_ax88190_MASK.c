
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int config_base; struct net_device* priv; } ;
struct net_device {unsigned int base_addr; int* dev_addr; } ;
struct hw_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static struct hw_info *FUNC_2(struct pcmcia_device *VAR_7)
{
    struct net_device *VAR_8 = VAR_7->priv;
    unsigned int VAR_9 = VAR_8->base_addr;
    int VAR_10, VAR_11;


    if (VAR_7->config_base != 0x03c0)
 return ((void*)0);

    FUNC_1(0x01, VAR_9 + VAR_3);
    FUNC_1(0x00, VAR_9 + VAR_5);
    FUNC_1(0x04, VAR_9 + VAR_4);
    FUNC_1(VAR_1+VAR_2, VAR_9 + VAR_0);

    for (VAR_10 = 0; VAR_10 < 6; VAR_10 += 2) {
 VAR_11 = FUNC_0(VAR_9 + VAR_6);
 VAR_8->dev_addr[VAR_10] = VAR_11 & 0xff;
 VAR_8->dev_addr[VAR_10+1] = VAR_11 >> 8;
    }
    return ((void*)0);
}
