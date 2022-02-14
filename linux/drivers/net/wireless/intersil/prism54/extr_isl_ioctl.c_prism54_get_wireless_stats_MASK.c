
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_7__ {scalar_t__ updated; } ;
struct iw_statistics {TYPE_2__ qual; } ;
struct TYPE_6__ {scalar_t__ updated; } ;
struct TYPE_9__ {TYPE_1__ qual; } ;
struct TYPE_8__ {scalar_t__ stats_timestamp; struct iw_statistics iwstatistics; int stats_work; int stats_lock; TYPE_5__ local_iwstatistics; } ;
typedef TYPE_3__ islpci_private ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct iw_statistics*,TYPE_5__*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_3__* FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

struct iw_statistics *
FUNC_6(struct net_device *VAR_2)
{
 islpci_private *VAR_3 = FUNC_3(VAR_2);


 if (FUNC_1(&VAR_3->stats_lock)) {
  FUNC_0(&VAR_3->iwstatistics, &VAR_3->local_iwstatistics,
         sizeof (struct iw_statistics));

  VAR_3->local_iwstatistics.qual.updated = 0;
  FUNC_2(&VAR_3->stats_lock);
 } else
  VAR_3->iwstatistics.qual.updated = 0;



 if ((VAR_3->stats_timestamp == 0) ||
     FUNC_5(VAR_1, VAR_3->stats_timestamp + 1 * VAR_0)) {
  FUNC_4(&VAR_3->stats_work);
  VAR_3->stats_timestamp = VAR_1;
 }

 return &VAR_3->iwstatistics;
}
