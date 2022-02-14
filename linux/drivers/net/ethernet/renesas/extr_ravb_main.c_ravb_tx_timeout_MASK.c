
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ravb_private {int work; } ;
struct TYPE_2__ {int tx_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 int VAR_0 ;
 struct ravb_private* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ravb_private*,int ,struct net_device*,char*,int ) ;
 int FUNC_2 (struct net_device*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_2)
{
 struct ravb_private *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_3, VAR_1, VAR_2,
    "transmit timed out, status %08x, resetting...\n",
    FUNC_2(VAR_2, VAR_0));


 VAR_2->stats.tx_errors++;

 FUNC_3(&VAR_3->work);
}
