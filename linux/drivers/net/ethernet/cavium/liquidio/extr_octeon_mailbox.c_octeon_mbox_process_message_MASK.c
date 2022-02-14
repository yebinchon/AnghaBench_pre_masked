
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int resp_needed; } ;
struct TYPE_4__ {TYPE_1__ s; } ;
struct octeon_mbox_cmd {int recv_status; TYPE_2__ msg; int fn_arg; int (* fn ) (int ,struct octeon_mbox_cmd*,int ) ;} ;
struct octeon_mbox {int state; int lock; int mbox_read_reg; int mbox_req; int oct_dev; int mbox_resp; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_mbox_cmd*,int *,int) ;
 int FUNC_2 (struct octeon_mbox*,struct octeon_mbox_cmd*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,struct octeon_mbox_cmd*,int ) ;
 int FUNC_6 (int ,struct octeon_mbox_cmd*,int ) ;
 int FUNC_7 (int ,int ) ;

int FUNC_8(struct octeon_mbox *VAR_7)
{
 struct octeon_mbox_cmd VAR_8;
 unsigned long VAR_9;

 FUNC_3(&VAR_7->lock, VAR_9);

 if (VAR_7->state & VAR_0) {
  if (VAR_7->state & (VAR_3 |
       VAR_5)) {
   FUNC_1(&VAR_8, &VAR_7->mbox_resp,
          sizeof(struct octeon_mbox_cmd));
   VAR_7->state = VAR_1;
   FUNC_7(VAR_6, VAR_7->mbox_read_reg);
   FUNC_4(&VAR_7->lock, VAR_9);
   VAR_8.recv_status = 1;
   if (VAR_8.fn)
    VAR_8.fn(VAR_7->oct_dev, &VAR_8,
         VAR_8.fn_arg);
   return 0;
  }

  VAR_7->state = VAR_1;
  FUNC_7(VAR_6, VAR_7->mbox_read_reg);
  FUNC_4(&VAR_7->lock, VAR_9);
  return 0;
 }

 if (VAR_7->state & VAR_4) {
  FUNC_1(&VAR_8, &VAR_7->mbox_resp,
         sizeof(struct octeon_mbox_cmd));
  VAR_7->state = VAR_1;
  FUNC_7(VAR_6, VAR_7->mbox_read_reg);
  FUNC_4(&VAR_7->lock, VAR_9);
  VAR_8.recv_status = 0;
  if (VAR_8.fn)
   VAR_8.fn(VAR_7->oct_dev, &VAR_8, VAR_8.fn_arg);
  return 0;
 }

 if (VAR_7->state & VAR_2) {
  FUNC_1(&VAR_8, &VAR_7->mbox_req,
         sizeof(struct octeon_mbox_cmd));
  if (!VAR_8.msg.s.resp_needed) {
   VAR_7->state &= ~VAR_2;
   if (!(VAR_7->state &
         VAR_3))
    VAR_7->state = VAR_1;
   FUNC_7(VAR_6, VAR_7->mbox_read_reg);
  }

  FUNC_4(&VAR_7->lock, VAR_9);
  FUNC_2(VAR_7, &VAR_8);
  return 0;
 }

 FUNC_4(&VAR_7->lock, VAR_9);
 FUNC_0(1);

 return 0;
}
