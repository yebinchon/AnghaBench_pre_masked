
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ql_adapter {int rss_ring_count; int flags; TYPE_1__* rx_ring; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int napi; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct ql_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (struct net_device*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct ql_adapter*) ;
 int FUNC_7 (struct ql_adapter*) ;
 int FUNC_8 (struct ql_adapter*) ;
 int FUNC_9 (struct ql_adapter*) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_1)
{
 int VAR_2;
 struct ql_adapter *VAR_3 = FUNC_1(VAR_1);

 if (FUNC_3(VAR_1)) {
  FUNC_2(VAR_1);
  FUNC_5(VAR_1);
 }


 FUNC_6(VAR_3);

 for (VAR_2 = 0; VAR_2 < VAR_3->rss_ring_count; VAR_2++)
  FUNC_4(&VAR_3->rx_ring[VAR_2].napi);

 FUNC_0(VAR_0, &VAR_3->flags);
 FUNC_9(VAR_3);
 FUNC_7(VAR_3);
 FUNC_8(VAR_3);
}
