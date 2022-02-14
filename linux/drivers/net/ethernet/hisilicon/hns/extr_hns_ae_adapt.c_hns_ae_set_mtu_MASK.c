
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct hns_mac_cb {TYPE_2__* dsaf_dev; } ;
struct TYPE_3__ {int buf_size; } ;
struct hnae_queue {TYPE_1__ rx_ring; } ;
struct hnae_handle {int q_num; struct hnae_queue** qs; } ;
struct TYPE_4__ {int buf_size; int dsaf_ver; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct hns_mac_cb* FUNC_1 (struct hnae_handle*) ;
 int FUNC_2 (struct hns_mac_cb*,int,int) ;
 int FUNC_3 (struct hnae_queue*,int) ;

__attribute__((used)) static int FUNC_4(struct hnae_handle *VAR_1, int VAR_2)
{
 struct hns_mac_cb *VAR_3 = FUNC_1(VAR_1);
 struct hnae_queue *VAR_4;
 u32 VAR_5;
 int VAR_6, VAR_7;


 if (!FUNC_0(VAR_3->dsaf_dev->dsaf_ver)) {
  if (VAR_2 <= VAR_0)
   VAR_5 = 2048;
  else
   VAR_5 = 4096;
 } else {
  VAR_5 = VAR_3->dsaf_dev->buf_size;
 }

 VAR_7 = FUNC_2(VAR_3, VAR_2, VAR_5);

 if (!VAR_7) {

  for (VAR_6 = 0; VAR_6 < VAR_1->q_num; VAR_6++) {
   VAR_4 = VAR_1->qs[VAR_6];
   VAR_4->rx_ring.buf_size = VAR_5;
   FUNC_3(VAR_4, VAR_5);
  }
 }

 return VAR_7;
}
