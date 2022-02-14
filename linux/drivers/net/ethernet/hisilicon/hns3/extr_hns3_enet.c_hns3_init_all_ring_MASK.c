
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct hns3_nic_priv {TYPE_1__* ring_data; int dev; struct hnae3_handle* ae_handle; } ;
struct TYPE_6__ {int num_tqps; } ;
struct hnae3_handle {TYPE_2__ kinfo; } ;
struct TYPE_7__ {int syncp; } ;
struct TYPE_5__ {TYPE_3__* ring; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct hns3_nic_priv *VAR_1)
{
 struct hnae3_handle *VAR_2 = VAR_1->ae_handle;
 int VAR_3 = VAR_2->kinfo.num_tqps * 2;
 int VAR_4, VAR_5;
 int VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_6 = FUNC_1(VAR_1->ring_data[VAR_4].ring);
  if (VAR_6) {
   FUNC_0(VAR_1->dev,
    "Alloc ring memory fail! ret=%d\n", VAR_6);
   goto out_when_alloc_ring_memory;
  }

  FUNC_3(&VAR_1->ring_data[VAR_4].ring->syncp);
 }

 return 0;

out_when_alloc_ring_memory:
 for (VAR_5 = VAR_4 - 1; VAR_5 >= 0; VAR_5--)
  FUNC_2(VAR_1->ring_data[VAR_5].ring);

 return -VAR_0;
}
