
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct scifmsg {void** payload; void* uop; int src; } ;
struct TYPE_2__ {void* vaddr; } ;
struct scif_window {scalar_t__ reg_state; int regwq; TYPE_1__ alloc_handle; } ;
struct scif_endpt {scalar_t__ state; int lock; int remote_dev; void* remote_ep; int port; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int ,struct scifmsg*) ;
 scalar_t__ FUNC_1 (struct scif_endpt*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct scif_endpt *VAR_8,
       struct scif_window *VAR_9)
{
 int VAR_10 = 0;
 struct scifmsg VAR_11;

 VAR_11.src = VAR_8->port;
 VAR_11.payload[0] = VAR_8->remote_ep;
 VAR_11.payload[1] = VAR_9->alloc_handle.vaddr;
 VAR_11.payload[2] = (u64)VAR_9;
 FUNC_2(&VAR_8->lock);
 if (VAR_8->state == VAR_4) {
  VAR_11.uop = VAR_7;
  VAR_9->reg_state = VAR_3;
  VAR_10 = FUNC_0(VAR_8->remote_dev, &VAR_11);
  FUNC_3(&VAR_8->lock);
  if (!VAR_10) {
retry:

   VAR_10 = FUNC_4(VAR_9->regwq,
       VAR_9->reg_state !=
       VAR_3,
       VAR_6);
   if (!VAR_10 && FUNC_1(VAR_8))
    goto retry;
   VAR_10 = !VAR_10 ? -VAR_0 : 0;
   if (VAR_9->reg_state == VAR_2)
    VAR_10 = -VAR_1;
  }
 } else {
  VAR_11.uop = VAR_5;
  VAR_11.payload[3] = VAR_7;
  VAR_10 = FUNC_0(VAR_8->remote_dev, &VAR_11);
  FUNC_3(&VAR_8->lock);
  if (!VAR_10)
   VAR_10 = -VAR_1;
 }
 return VAR_10;
}
