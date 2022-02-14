
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nic; } ;
struct TYPE_4__ {scalar_t__ available; scalar_t__ entries; scalar_t__ next; scalar_t__ oldest; } ;
struct ipw2100_priv {TYPE_1__ status_queue; int net_dev; TYPE_2__ rx_queue; int rxq_stat; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (struct ipw2100_priv*,TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct ipw2100_priv *VAR_5)
{
 FUNC_1("enter\n");

 VAR_5->rx_queue.oldest = 0;
 VAR_5->rx_queue.available = VAR_5->rx_queue.entries - 1;
 VAR_5->rx_queue.next = VAR_5->rx_queue.entries - 1;

 FUNC_0(&VAR_5->rxq_stat);
 FUNC_2(&VAR_5->rxq_stat, VAR_5->rx_queue.available);

 FUNC_3(VAR_5, &VAR_5->rx_queue,
       VAR_0,
       VAR_1,
       VAR_2,
       VAR_4);


 FUNC_4(VAR_5->net_dev, VAR_3,
         VAR_5->status_queue.nic);

 FUNC_1("exit\n");
}
