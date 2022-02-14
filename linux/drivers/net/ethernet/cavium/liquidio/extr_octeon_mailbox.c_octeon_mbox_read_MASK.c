
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; } ;
union octeon_mbox_message {scalar_t__ u64; TYPE_1__ s; } ;
struct TYPE_12__ {int len; } ;
struct TYPE_13__ {scalar_t__ u64; TYPE_5__ s; } ;
struct TYPE_14__ {scalar_t__* data; int recv_len; TYPE_6__ msg; int q_no; } ;
struct TYPE_9__ {int len; } ;
struct TYPE_10__ {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_11__ {scalar_t__* data; int recv_len; TYPE_3__ msg; int q_no; } ;
struct octeon_mbox {int state; int lock; int mbox_read_reg; TYPE_7__ mbox_resp; TYPE_4__ mbox_req; int q_no; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int ) ;

int FUNC_5(struct octeon_mbox *VAR_12)
{
 union octeon_mbox_message VAR_13;
 int VAR_14 = 0;

 FUNC_2(&VAR_12->lock);

 VAR_13.u64 = FUNC_1(VAR_12->mbox_read_reg);

 if ((VAR_13.u64 == VAR_9) || (VAR_13.u64 == VAR_11)) {
  FUNC_3(&VAR_12->lock);
  return 0;
 }

 if (VAR_12->state & VAR_5) {
  VAR_12->mbox_req.data[VAR_12->mbox_req.recv_len - 1] = VAR_13.u64;
  VAR_12->mbox_req.recv_len++;
 } else {
  if (VAR_12->state & VAR_8) {
   VAR_12->mbox_resp.data[VAR_12->mbox_resp.recv_len - 1] =
    VAR_13.u64;
   VAR_12->mbox_resp.recv_len++;
  } else {
   if ((VAR_12->state & VAR_3) &&
       (VAR_13.s.type == VAR_0)) {
    VAR_12->state &= ~VAR_3;
    VAR_12->state |=
        VAR_5;
    VAR_12->mbox_req.msg.u64 = VAR_13.u64;
    VAR_12->mbox_req.q_no = VAR_12->q_no;
    VAR_12->mbox_req.recv_len = 1;
   } else {
    if ((VAR_12->state &
         VAR_6) &&
        (VAR_13.s.type == VAR_1)) {
     VAR_12->state &=
         ~VAR_6;
     VAR_12->state |=
         VAR_8
         ;
     VAR_12->mbox_resp.msg.u64 = VAR_13.u64;
     VAR_12->mbox_resp.q_no = VAR_12->q_no;
     VAR_12->mbox_resp.recv_len = 1;
    } else {
     FUNC_4(VAR_10,
            VAR_12->mbox_read_reg);
     VAR_12->state |= VAR_2;
     FUNC_3(&VAR_12->lock);
     return 1;
    }
   }
  }
 }

 if (VAR_12->state & VAR_5) {
  if (VAR_12->mbox_req.recv_len < VAR_12->mbox_req.msg.s.len) {
   VAR_14 = 0;
  } else {
   VAR_12->state &= ~VAR_5;
   VAR_12->state |= VAR_4;
   VAR_14 = 1;
  }
 } else {
  if (VAR_12->state & VAR_8) {
   if (VAR_12->mbox_resp.recv_len <
       VAR_12->mbox_resp.msg.s.len) {
    VAR_14 = 0;
   } else {
    VAR_12->state &=
        ~VAR_8;
    VAR_12->state |=
        VAR_7;
    VAR_14 = 1;
   }
  } else {
   FUNC_0(1);
  }
 }

 FUNC_4(VAR_9, VAR_12->mbox_read_reg);

 FUNC_3(&VAR_12->lock);

 return VAR_14;
}
