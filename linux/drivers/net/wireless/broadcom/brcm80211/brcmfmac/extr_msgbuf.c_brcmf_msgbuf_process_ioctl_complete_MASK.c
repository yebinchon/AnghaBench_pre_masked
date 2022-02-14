
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int request_id; } ;
struct TYPE_4__ {int status; } ;
struct msgbuf_ioctl_resp_hdr {TYPE_1__ msg; int resp_len; TYPE_2__ compl_hdr; } ;
struct brcmf_msgbuf {scalar_t__ cur_ioctlrespbuf; int ioctl_resp_pktid; scalar_t__ ioctl_resp_ret_len; scalar_t__ ioctl_resp_status; } ;
typedef scalar_t__ s16 ;


 int FUNC_0 (struct brcmf_msgbuf*) ;
 int FUNC_1 (struct brcmf_msgbuf*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct brcmf_msgbuf *VAR_0, void *VAR_1)
{
 struct msgbuf_ioctl_resp_hdr *VAR_2;

 VAR_2 = (struct msgbuf_ioctl_resp_hdr *)VAR_1;

 VAR_0->ioctl_resp_status =
   (s16)FUNC_2(VAR_2->compl_hdr.status);
 VAR_0->ioctl_resp_ret_len = FUNC_2(VAR_2->resp_len);
 VAR_0->ioctl_resp_pktid = FUNC_3(VAR_2->msg.request_id);

 FUNC_0(VAR_0);

 if (VAR_0->cur_ioctlrespbuf)
  VAR_0->cur_ioctlrespbuf--;
 FUNC_1(VAR_0);
}
