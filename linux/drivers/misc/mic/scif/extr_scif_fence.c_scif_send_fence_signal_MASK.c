
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
struct scifmsg {void** payload; int uop; int src; } ;
struct scif_fence_info {void* state; int comp; } ;
struct scif_endpt {scalar_t__ state; int lock; int remote_dev; void* remote_ep; int port; } ;
typedef scalar_t__ scif_epd_t ;
typedef void* off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct scif_endpt*,struct scif_fence_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct scif_fence_info*) ;
 struct scif_fence_info* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,struct scifmsg*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(scif_epd_t VAR_9, off_t VAR_10, u64 VAR_11,
      off_t VAR_12, u64 VAR_13, int VAR_14)
{
 int VAR_15 = 0;
 struct scifmsg VAR_16;
 struct scif_fence_info *VAR_17;
 struct scif_endpt *VAR_18 = (struct scif_endpt *)VAR_9;

 VAR_17 = FUNC_3(sizeof(*VAR_17), VAR_2);
 if (!VAR_17) {
  VAR_15 = -VAR_0;
  goto error;
 }

 VAR_17->state = VAR_3;
 FUNC_1(&VAR_17->comp);
 VAR_16.src = VAR_18->port;
 if (VAR_14 & VAR_5) {
  VAR_16.uop = VAR_7;
  VAR_16.payload[0] = VAR_18->remote_ep;
  VAR_16.payload[1] = VAR_10;
  VAR_16.payload[2] = VAR_11;
  VAR_16.payload[3] = (u64)VAR_17;
  FUNC_5(&VAR_18->lock);
  if (VAR_18->state == VAR_4)
   VAR_15 = FUNC_4(VAR_18->remote_dev, &VAR_16);
  else
   VAR_15 = -VAR_1;
  FUNC_6(&VAR_18->lock);
  if (VAR_15)
   goto error_free;
  VAR_15 = FUNC_0(VAR_18, VAR_17);
  if (VAR_15)
   goto error_free;
 }
 VAR_17->state = VAR_3;

 if (VAR_14 & VAR_6) {
  VAR_16.uop = VAR_8;
  VAR_16.payload[0] = VAR_18->remote_ep;
  VAR_16.payload[1] = VAR_12;
  VAR_16.payload[2] = VAR_13;
  VAR_16.payload[3] = (u64)VAR_17;
  FUNC_5(&VAR_18->lock);
  if (VAR_18->state == VAR_4)
   VAR_15 = FUNC_4(VAR_18->remote_dev, &VAR_16);
  else
   VAR_15 = -VAR_1;
  FUNC_6(&VAR_18->lock);
  if (VAR_15)
   goto error_free;
  VAR_15 = FUNC_0(VAR_18, VAR_17);
 }
error_free:
 FUNC_2(VAR_17);
error:
 return VAR_15;
}
