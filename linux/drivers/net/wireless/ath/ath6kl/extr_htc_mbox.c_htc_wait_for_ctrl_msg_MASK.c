
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct htc_target {int dev; } ;
struct TYPE_3__ {scalar_t__ exp_hdr; scalar_t__ rx_flags; } ;
struct TYPE_4__ {TYPE_1__ rx; } ;
struct htc_packet {scalar_t__ act_len; scalar_t__ buf_len; scalar_t__ status; int buf; int endpoint; int * completion; TYPE_2__ info; } ;
struct htc_frame_hdr {scalar_t__ eid; int payld_len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,int ) ;
 scalar_t__ FUNC_3 (struct htc_target*,struct htc_packet*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct htc_target*,struct htc_packet*,int *,int *) ;
 struct htc_packet* FUNC_5 (struct htc_target*,int) ;
 int FUNC_6 (struct htc_packet*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct htc_target*,struct htc_packet*) ;
 int FUNC_9 (scalar_t__,int ,int ,scalar_t__) ;

__attribute__((used)) static struct htc_packet *FUNC_10(struct htc_target *VAR_4)
{
 struct htc_packet *VAR_5 = ((void*)0);
 struct htc_frame_hdr *VAR_6;
 u32 VAR_7;

 if (FUNC_2(VAR_4->dev, &VAR_7,
           VAR_3))
  return ((void*)0);

 FUNC_0(VAR_0,
     "htc rx wait ctrl look_ahead 0x%X\n", VAR_7);

 VAR_6 = (struct htc_frame_hdr *)&VAR_7;

 if (VAR_6->eid != VAR_1)
  return ((void*)0);

 VAR_5 = FUNC_5(VAR_4, 0);

 if (!VAR_5)
  return ((void*)0);

 VAR_5->info.rx.rx_flags = 0;
 VAR_5->info.rx.exp_hdr = VAR_7;
 VAR_5->act_len = FUNC_7(VAR_6->payld_len) + VAR_2;

 if (VAR_5->act_len > VAR_5->buf_len)
  goto fail_ctrl_rx;


 VAR_5->completion = ((void*)0);


 if (FUNC_3(VAR_4, VAR_5, VAR_5->act_len))
  goto fail_ctrl_rx;

 FUNC_9(VAR_5->status, VAR_5->endpoint,
       VAR_5->buf, VAR_5->act_len);


 VAR_5->status = FUNC_4(VAR_4, VAR_5, ((void*)0), ((void*)0));

 if (VAR_5->status) {
  FUNC_1("htc_wait_for_ctrl_msg, ath6kl_htc_rx_process_hdr failed (status = %d)\n",
      VAR_5->status);
  goto fail_ctrl_rx;
 }

 return VAR_5;

fail_ctrl_rx:
 if (VAR_5 != ((void*)0)) {
  FUNC_6(VAR_5);
  FUNC_8(VAR_4, VAR_5);
 }

 return ((void*)0);
}
