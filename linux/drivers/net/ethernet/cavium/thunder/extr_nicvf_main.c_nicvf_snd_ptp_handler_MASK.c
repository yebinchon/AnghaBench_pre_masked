
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ts ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct nicvf {int * ptp_skb; int ptp_clock; int tx_ptp_skbs; struct nicvf* pnicvf; } ;
struct net_device {int dummy; } ;
struct cqe_send_t {scalar_t__ send_status; int ptp_timestamp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct skb_shared_hwtstamps*,int ,int) ;
 struct nicvf* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,struct skb_shared_hwtstamps*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_2,
      struct cqe_send_t *VAR_3)
{
 struct nicvf *VAR_4 = FUNC_4(VAR_2);
 struct skb_shared_hwtstamps VAR_5;
 u64 VAR_6;

 VAR_4 = VAR_4->pnicvf;


 FUNC_7();


 FUNC_0(&VAR_4->tx_ptp_skbs, 0);


 if (!VAR_4->ptp_skb)
  return;


 if (VAR_3->send_status == VAR_1 ||
     VAR_3->send_status == VAR_0)
  goto no_tstamp;


 FUNC_3(&VAR_5, 0, sizeof(VAR_5));
 VAR_6 = FUNC_1(VAR_4->ptp_clock, VAR_3->ptp_timestamp);
 VAR_5.hwtstamp = FUNC_5(VAR_6);
 FUNC_6(VAR_4->ptp_skb, &VAR_5);

no_tstamp:

 FUNC_2(VAR_4->ptp_skb);
 VAR_4->ptp_skb = ((void*)0);

 FUNC_8();
}
