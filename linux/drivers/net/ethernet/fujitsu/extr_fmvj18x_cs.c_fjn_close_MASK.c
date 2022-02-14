
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int open; } ;
struct net_device {unsigned int base_addr; int name; } ;
struct local_info {scalar_t__ cardtype; scalar_t__ open_time; struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 struct local_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (char*,int ) ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_9)
{
    struct local_info *VAR_10 = FUNC_0(VAR_9);
    struct pcmcia_device *VAR_11 = VAR_10->p_dev;
    unsigned int VAR_12 = VAR_9->base_addr;

    FUNC_3("fjn_close('%s').\n", VAR_9->name);

    VAR_10->open_time = 0;
    FUNC_1(VAR_9);


    if( VAR_8 == 0 )
 FUNC_2(VAR_1 ,VAR_12 + VAR_3);
    else
 FUNC_2(VAR_2 ,VAR_12 + VAR_3);




    FUNC_2(VAR_0 ,VAR_12 + VAR_4);


    if (VAR_10->cardtype == VAR_7)
 FUNC_2(VAR_5, VAR_12 + VAR_6);

    VAR_11->open--;

    return 0;
}
