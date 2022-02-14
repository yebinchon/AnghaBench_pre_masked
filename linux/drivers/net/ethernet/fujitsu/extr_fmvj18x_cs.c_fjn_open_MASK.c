
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmcia_device {int open; } ;
struct net_device {int name; } ;
struct local_info {int open_time; scalar_t__ tx_queue_len; scalar_t__ tx_queue; scalar_t__ tx_started; struct pcmcia_device* p_dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 struct local_info* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2)
{
    struct local_info *VAR_3 = FUNC_1(VAR_2);
    struct pcmcia_device *VAR_4 = VAR_3->p_dev;

    FUNC_4("fjn_open('%s').\n", VAR_2->name);

    if (!FUNC_3(VAR_4))
 return -VAR_0;

    VAR_4->open++;

    FUNC_0(VAR_2);

    VAR_3->tx_started = 0;
    VAR_3->tx_queue = 0;
    VAR_3->tx_queue_len = 0;
    VAR_3->open_time = VAR_1;
    FUNC_2(VAR_2);

    return 0;
}
