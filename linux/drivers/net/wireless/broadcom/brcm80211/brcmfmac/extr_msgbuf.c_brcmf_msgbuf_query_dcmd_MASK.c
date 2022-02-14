
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct sk_buff {int data; } ;
struct brcmf_pub {TYPE_1__* proto; } ;
struct brcmf_msgbuf {int ctl_completed; scalar_t__ ioctl_resp_ret_len; int ioctl_resp_status; int ioctl_resp_pktid; int rx_pktids; TYPE_3__* drvr; } ;
struct TYPE_6__ {TYPE_2__* bus_if; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ pd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct brcmf_pub*,char*) ;
 int FUNC_1 (int ,char*,int,scalar_t__,scalar_t__) ;
 struct sk_buff* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct brcmf_msgbuf*) ;
 int FUNC_4 (struct brcmf_pub*,int,scalar_t__,void*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (void*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct brcmf_pub *VAR_3, int VAR_4,
       uint VAR_5, void *VAR_6, uint VAR_7, int *VAR_8)
{
 struct brcmf_msgbuf *VAR_9 = (struct brcmf_msgbuf *)VAR_3->proto->pd;
 struct sk_buff *VAR_10 = ((void*)0);
 int VAR_11;
 int VAR_12;

 FUNC_1(VAR_2, "ifidx=%d, cmd=%d, len=%d\n", VAR_4, VAR_5, VAR_7);
 *VAR_8 = 0;
 VAR_9->ctl_completed = 0;
 VAR_12 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_12)
  return VAR_12;

 VAR_11 = FUNC_3(VAR_9);
 if (!VAR_11) {
  FUNC_0(VAR_3, "Timeout on response for query command\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_2(VAR_9->drvr->bus_if->dev,
         VAR_9->rx_pktids,
         VAR_9->ioctl_resp_pktid);
 if (VAR_9->ioctl_resp_ret_len != 0) {
  if (!VAR_10)
   return -VAR_0;

  FUNC_6(VAR_6, VAR_10->data, (VAR_7 < VAR_9->ioctl_resp_ret_len) ?
           VAR_7 : VAR_9->ioctl_resp_ret_len);
 }
 FUNC_5(VAR_10);

 *VAR_8 = VAR_9->ioctl_resp_status;
 return 0;
}
