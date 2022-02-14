
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_3__ {int bad_req_id; } ;
struct ena_ring {scalar_t__ ring_size; TYPE_2__* adapter; int syncp; TYPE_1__ rx_stats; int netdev; } ;
struct TYPE_4__ {int flags; int reset_reason; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int ,int ,char*,scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct ena_ring *VAR_4, u16 VAR_5)
{
 if (FUNC_0(VAR_5 < VAR_4->ring_size))
  return 0;

 FUNC_1(VAR_4->adapter, VAR_3, VAR_4->netdev,
    "Invalid rx req_id: %hu\n", VAR_5);

 FUNC_3(&VAR_4->syncp);
 VAR_4->rx_stats.bad_req_id++;
 FUNC_4(&VAR_4->syncp);


 VAR_4->adapter->reset_reason = VAR_2;
 FUNC_2(VAR_1, &VAR_4->adapter->flags);
 return -VAR_0;
}
