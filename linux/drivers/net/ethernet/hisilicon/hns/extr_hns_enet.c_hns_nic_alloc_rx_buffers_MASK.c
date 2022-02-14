
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {struct net_device* dev; } ;
struct hns_nic_ring_data {TYPE_1__ napi; struct hnae_ring* ring; } ;
struct TYPE_4__ {int sw_err_cnt; int reuse_pg_cnt; } ;
struct hnae_ring {size_t next_to_use; scalar_t__ io_base; TYPE_2__ stats; struct hnae_desc_cb* desc_cb; } ;
struct hnae_desc_cb {scalar_t__ reuse_flag; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hnae_ring*,size_t,struct hnae_desc_cb*) ;
 int FUNC_1 (struct hnae_ring*,struct hnae_desc_cb*) ;
 int FUNC_2 (struct hnae_ring*,size_t) ;
 int FUNC_3 (struct net_device*,char*) ;
 int VAR_1 ;
 int FUNC_4 (struct hnae_ring*,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int,scalar_t__) ;

__attribute__((used)) static void
FUNC_7(struct hns_nic_ring_data *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct hnae_desc_cb VAR_6;
 struct hnae_desc_cb *VAR_7;
 struct hnae_ring *VAR_8 = VAR_2->ring;
 struct net_device *VAR_9 = VAR_2->napi.dev;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_7 = &VAR_8->desc_cb[VAR_8->next_to_use];
  if (VAR_7->reuse_flag) {
   VAR_8->stats.reuse_pg_cnt++;
   FUNC_2(VAR_8, VAR_8->next_to_use);
  } else {
   VAR_5 = FUNC_1(VAR_8, &VAR_6);
   if (VAR_5) {
    VAR_8->stats.sw_err_cnt++;
    FUNC_3(VAR_9, "hnae reserve buffer map failed.\n");
    break;
   }
   FUNC_0(VAR_8, VAR_8->next_to_use, &VAR_6);
  }

  FUNC_4(VAR_8, VAR_1);
 }

 FUNC_5();
 FUNC_6(VAR_4, VAR_8->io_base + VAR_0);
}
