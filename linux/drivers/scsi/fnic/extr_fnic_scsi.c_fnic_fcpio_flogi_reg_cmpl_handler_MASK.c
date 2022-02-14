
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct fnic {scalar_t__ state; int fnic_lock; int frame_work; scalar_t__ stop_rx_link_events; TYPE_1__* lport; } ;
struct fcpio_tag {int dummy; } ;
struct fcpio_fw_req {int hdr; } ;
struct TYPE_2__ {int host; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int *,struct fcpio_tag*) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fnic*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct fnic *VAR_5,
          struct fcpio_fw_req *VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 struct fcpio_tag VAR_9;
 int VAR_10 = 0;
 unsigned long VAR_11;

 FUNC_1(&VAR_6->hdr, &VAR_7, &VAR_8, &VAR_9);


 FUNC_6(&VAR_5->fnic_lock, VAR_11);

 if (VAR_5->state == VAR_1) {


  if (!VAR_8) {
   FUNC_0(VAR_3, VAR_5->lport->host,
          "flog reg succeeded\n");
   VAR_5->state = VAR_2;
  } else {
   FUNC_0(VAR_3,
          VAR_5->lport->host,
          "fnic flogi reg :failed %s\n",
          FUNC_2(VAR_8));
   VAR_5->state = VAR_0;
   VAR_10 = -1;
  }
 } else {
  FUNC_0(VAR_3, VAR_5->lport->host,
         "Unexpected fnic state %s while"
         " processing flogi reg completion\n",
         FUNC_4(VAR_5->state));
  VAR_10 = -1;
 }

 if (!VAR_10) {
  if (VAR_5->stop_rx_link_events) {
   FUNC_7(&VAR_5->fnic_lock, VAR_11);
   goto reg_cmpl_handler_end;
  }
  FUNC_7(&VAR_5->fnic_lock, VAR_11);

  FUNC_3(VAR_5);
  FUNC_5(VAR_4, &VAR_5->frame_work);
 } else {
  FUNC_7(&VAR_5->fnic_lock, VAR_11);
 }

reg_cmpl_handler_end:
 return VAR_10;
}
