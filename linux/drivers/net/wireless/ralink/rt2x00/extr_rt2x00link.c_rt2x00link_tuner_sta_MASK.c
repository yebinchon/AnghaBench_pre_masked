
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dot11FCSErrorCount; } ;
struct link_qual {int rssi; int rx_success; scalar_t__ rx_failed; } ;
struct TYPE_8__ {struct link_qual qual; } ;
struct rt2x00_dev {TYPE_3__* ops; TYPE_1__ low_level_stats; TYPE_4__ link; } ;
struct link {int count; int avg_rssi; } ;
struct TYPE_7__ {TYPE_2__* lib; } ;
struct TYPE_6__ {int (* link_tuner ) (struct rt2x00_dev*,struct link_qual*,int ) ;int (* link_stats ) (struct rt2x00_dev*,struct link_qual*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rt2x00_dev*) ;
 int FUNC_1 (struct rt2x00_dev*,int ) ;
 scalar_t__ FUNC_2 (struct rt2x00_dev*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rt2x00_dev*) ;
 int FUNC_5 (struct rt2x00_dev*,struct link_qual*) ;
 int FUNC_6 (struct rt2x00_dev*,struct link_qual*,int ) ;

__attribute__((used)) static void FUNC_7(struct rt2x00_dev *VAR_1, struct link *VAR_2)
{
 struct link_qual *VAR_3 = &VAR_1->link.qual;




 VAR_1->ops->lib->link_stats(VAR_1, VAR_3);
 VAR_1->low_level_stats.dot11FCSErrorCount += VAR_3->rx_failed;







 if (!VAR_3->rx_success)
  VAR_3->rssi = VAR_0;
 else
  VAR_3->rssi = FUNC_3(&VAR_2->avg_rssi);






 if (FUNC_0(VAR_1))
  VAR_1->ops->lib->link_tuner(VAR_1, VAR_3, VAR_2->count);




 FUNC_1(VAR_1, VAR_3->rssi);






 if (FUNC_2(VAR_1))
  FUNC_4(VAR_1);
}
