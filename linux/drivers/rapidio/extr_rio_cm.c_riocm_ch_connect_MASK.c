
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct rio_channel {int id; int comp; int loc_destid; int rem_channel; int * context; TYPE_3__* rdev; struct cm_dev* cmdev; } ;
struct TYPE_6__ {int type; void* dst_mbox; void* src_mbox; void* dst_id; void* src_id; } ;
struct rio_ch_chan_hdr {void* src_ch; void* dst_ch; int ch_op; TYPE_2__ bhdr; } ;
struct cm_peer {TYPE_3__* rdev; } ;
struct cm_dev {TYPE_1__* mport; } ;
struct TYPE_7__ {int destid; } ;
struct TYPE_5__ {int host_deviceid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct rio_ch_chan_hdr*) ;
 struct rio_ch_chan_hdr* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (struct rio_channel*,int ) ;
 int FUNC_5 (struct rio_channel*,int ,int ) ;
 int FUNC_6 (int ,char*,int ,long) ;
 struct rio_channel* FUNC_7 (int ) ;
 int FUNC_8 (struct cm_dev*,TYPE_3__*,struct rio_ch_chan_hdr*,int) ;
 int FUNC_9 (struct rio_channel*) ;
 int FUNC_10 (struct cm_dev*,TYPE_3__*,struct rio_ch_chan_hdr*,int) ;
 long FUNC_11 (int *,int) ;

__attribute__((used)) static int FUNC_12(u16 VAR_17, struct cm_dev *VAR_18,
       struct cm_peer *VAR_19, u16 VAR_20)
{
 struct rio_channel *VAR_21 = ((void*)0);
 struct rio_ch_chan_hdr *VAR_22;
 int VAR_23;
 long VAR_24;

 VAR_21 = FUNC_7(VAR_17);
 if (!VAR_21)
  return -VAR_4;

 if (!FUNC_5(VAR_21, VAR_14, VAR_12)) {
  VAR_23 = -VAR_3;
  goto conn_done;
 }

 VAR_21->cmdev = VAR_18;
 VAR_21->rdev = VAR_19->rdev;
 VAR_21->context = ((void*)0);
 VAR_21->loc_destid = VAR_18->mport->host_deviceid;
 VAR_21->rem_channel = VAR_20;





 VAR_22 = FUNC_3(sizeof(*VAR_22), VAR_8);
 if (VAR_22 == ((void*)0)) {
  VAR_23 = -VAR_5;
  goto conn_done;
 }

 VAR_22->bhdr.src_id = FUNC_0(VAR_21->loc_destid);
 VAR_22->bhdr.dst_id = FUNC_0(VAR_19->rdev->destid);
 VAR_22->bhdr.src_mbox = VAR_16;
 VAR_22->bhdr.dst_mbox = VAR_16;
 VAR_22->bhdr.type = VAR_11;
 VAR_22->ch_op = VAR_0;
 VAR_22->dst_ch = FUNC_1(VAR_20);
 VAR_22->src_ch = FUNC_1(VAR_17);






 VAR_23 = FUNC_8(VAR_18, VAR_19->rdev, VAR_22, sizeof(*VAR_22));

 if (VAR_23 != -VAR_1) {
  FUNC_2(VAR_22);
 } else {
  VAR_23 = FUNC_10(VAR_18, VAR_19->rdev, VAR_22, sizeof(*VAR_22));
  if (VAR_23)
   FUNC_2(VAR_22);
 }

 if (VAR_23) {
  FUNC_5(VAR_21, VAR_12, VAR_14);
  goto conn_done;
 }


 VAR_24 = FUNC_11(&VAR_21->comp,
        VAR_10 * VAR_9);
 FUNC_6(VAR_15, "wait on %d returns %ld", VAR_21->id, VAR_24);

 if (!VAR_24)
  VAR_23 = -VAR_7;
 else if (VAR_24 == -VAR_6)
  VAR_23 = -VAR_2;
 else
  VAR_23 = FUNC_4(VAR_21, VAR_13) ? 0 : -1;

conn_done:
 FUNC_9(VAR_21);
 return VAR_23;
}
