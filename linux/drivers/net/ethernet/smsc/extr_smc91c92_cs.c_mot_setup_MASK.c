
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct pcmcia_device {struct net_device* priv; } ;
struct net_device {unsigned int base_addr; int* dev_addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct pcmcia_device *VAR_7)
{
    struct net_device *VAR_8 = VAR_7->priv;
    unsigned int VAR_9 = VAR_8->base_addr;
    int VAR_10, VAR_11, VAR_12;
    u_int VAR_13;



    for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
 FUNC_0(2);
 FUNC_2(VAR_5 + VAR_10, VAR_9 + VAR_6);
 FUNC_0(1);
 FUNC_2((VAR_2 | VAR_1), VAR_9 + VAR_0);

 for (VAR_12 = VAR_11 = 0; VAR_12 < 200; VAR_12++) {
     FUNC_3(10);
     VAR_11 = ((VAR_2 | VAR_3) & FUNC_1(VAR_9 + VAR_0));
     if (VAR_11 == 0) break;
 }

 if (VAR_11)
     return -1;

 VAR_13 = FUNC_1(VAR_9 + VAR_4);
 VAR_8->dev_addr[2*VAR_10] = VAR_13 & 0xff;
 VAR_8->dev_addr[2*VAR_10+1] = (VAR_13 >> 8) & 0xff;
    }

    return 0;
}
