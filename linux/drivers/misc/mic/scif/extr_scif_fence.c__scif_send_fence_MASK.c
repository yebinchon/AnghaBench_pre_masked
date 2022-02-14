
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct scifmsg {int uop; int* payload; int src; } ;
struct scif_fence_info {scalar_t__ state; int dma_mark; int comp; } ;
struct TYPE_2__ {int rma_lock; } ;
struct scif_endpt {int remote_ep; scalar_t__ state; TYPE_1__ rma_info; int lock; int remote_dev; int port; } ;
typedef scalar_t__ scif_epd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct scif_fence_info*) ;
 struct scif_fence_info* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct scifmsg*) ;
 scalar_t__ FUNC_6 (struct scif_endpt*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static int FUNC_10(scif_epd_t VAR_12, int VAR_13, int VAR_14, int *VAR_15)
{
 int VAR_16;
 struct scifmsg VAR_17;
 struct scif_fence_info *VAR_18;
 struct scif_endpt *VAR_19 = (struct scif_endpt *)VAR_12;

 VAR_18 = FUNC_2(sizeof(*VAR_18), VAR_3);
 if (!VAR_18) {
  VAR_16 = -VAR_1;
  goto error;
 }

 VAR_18->state = VAR_6;
 FUNC_0(&VAR_18->comp);

 VAR_17.src = VAR_19->port;
 VAR_17.uop = VAR_13;
 VAR_17.payload[0] = VAR_19->remote_ep;
 VAR_17.payload[1] = (u64)VAR_18;
 if (VAR_13 == VAR_11)
  VAR_17.payload[2] = VAR_14;
 FUNC_7(&VAR_19->lock);
 if (VAR_19->state == VAR_7)
  VAR_16 = FUNC_5(VAR_19->remote_dev, &VAR_17);
 else
  VAR_16 = -VAR_2;
 FUNC_8(&VAR_19->lock);
 if (VAR_16)
  goto error_free;
retry:

 VAR_16 = FUNC_9(&VAR_18->comp,
       VAR_9);
 if (!VAR_16 && FUNC_6(VAR_19))
  goto retry;
 if (!VAR_16)
  VAR_16 = -VAR_0;
 if (VAR_16 > 0)
  VAR_16 = 0;
 FUNC_3(&VAR_19->rma_info.rma_lock);
 if (VAR_16 < 0) {
  if (VAR_18->state == VAR_6)
   VAR_18->state = VAR_5;
 }
 if (VAR_18->state == VAR_5 && !VAR_16)
  VAR_16 = -VAR_1;
 if (VAR_13 == VAR_8 && VAR_18->state == VAR_4)
  *VAR_15 = VAR_10 | VAR_18->dma_mark;
 FUNC_4(&VAR_19->rma_info.rma_lock);
error_free:
 FUNC_1(VAR_18);
error:
 return VAR_16;
}
