
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int extra_rcvbufs_sent; } ;
struct visornic_devdata {int num_rcv_bufs_could_not_alloc; int num_rcv_bufs; TYPE_1__ chstat; int ** rcvbuf; int alloc_failed_in_if_needed_cnt; struct net_device* netdev; scalar_t__ enab_dis_acked; scalar_t__ enabled; struct uiscmdrsp* cmdrsp_rcv; } ;
struct uiscmdrsp {int dummy; } ;
struct net_device {int dummy; } ;


 int * FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct uiscmdrsp*,struct visornic_devdata*,int *) ;

__attribute__((used)) static void FUNC_3(struct visornic_devdata *VAR_0)
{
 int VAR_1;
 struct net_device *VAR_2;
 struct uiscmdrsp *VAR_3 = VAR_0->cmdrsp_rcv;
 int VAR_4, VAR_5;
 int VAR_6;


 if (!(VAR_0->enabled && VAR_0->enab_dis_acked))
  return;

 VAR_2 = VAR_0->netdev;
 VAR_5 = 0;



 VAR_4 = VAR_0->num_rcv_bufs_could_not_alloc;
 while (VAR_4 > 0) {
  VAR_4--;
  for (VAR_1 = 0; VAR_1 < VAR_0->num_rcv_bufs; VAR_1++) {
   if (VAR_0->rcvbuf[VAR_1])
    continue;
   VAR_0->rcvbuf[VAR_1] = FUNC_0(VAR_2);
   if (!VAR_0->rcvbuf[VAR_1]) {
    VAR_0->alloc_failed_in_if_needed_cnt++;
    break;
   }
   VAR_5++;
   VAR_6 = FUNC_2(VAR_3, VAR_0, VAR_0->rcvbuf[VAR_1]);
   if (VAR_6) {
    FUNC_1(VAR_0->rcvbuf[VAR_1]);
    VAR_0->rcvbuf[VAR_1] = ((void*)0);
    break;
   }
   VAR_0->chstat.extra_rcvbufs_sent++;
  }
 }
 VAR_0->num_rcv_bufs_could_not_alloc -= VAR_5;
}
