
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct rio_channel {scalar_t__ rem_channel; scalar_t__ id; int rdev; int cmdev; int rem_destid; int loc_destid; } ;
struct TYPE_4__ {int type; void* dst_mbox; void* src_mbox; void* dst_id; void* src_id; } ;
struct rio_ch_chan_hdr {void* msg_len; void* src_ch; void* dst_ch; int ch_op; TYPE_1__ bhdr; } ;
struct TYPE_5__ {int comm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 TYPE_2__* VAR_9 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct rio_channel*,int ) ;
 int FUNC_3 (int ,char*,scalar_t__,int) ;
 int FUNC_4 (char*,int ,int ,scalar_t__) ;
 struct rio_channel* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,int ,void*,int) ;
 int FUNC_7 (struct rio_channel*) ;
 int FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(u16 VAR_10, void *VAR_11, int VAR_12)
{
 struct rio_channel *VAR_13;
 struct rio_ch_chan_hdr *VAR_14;
 int VAR_15;

 if (VAR_11 == ((void*)0) || VAR_10 == 0 || VAR_12 == 0 || VAR_12 > VAR_6)
  return -VAR_2;

 VAR_13 = FUNC_5(VAR_10);
 if (!VAR_13) {
  FUNC_4("%s(%d) ch_%d not found", VAR_9->comm,
       FUNC_8(VAR_9), VAR_10);
  return -VAR_3;
 }

 if (!FUNC_2(VAR_13, VAR_5)) {
  VAR_15 = -VAR_1;
  goto err_out;
 }




 VAR_14 = VAR_11;

 VAR_14->bhdr.src_id = FUNC_0(VAR_13->loc_destid);
 VAR_14->bhdr.dst_id = FUNC_0(VAR_13->rem_destid);
 VAR_14->bhdr.src_mbox = VAR_8;
 VAR_14->bhdr.dst_mbox = VAR_8;
 VAR_14->bhdr.type = VAR_4;
 VAR_14->ch_op = VAR_0;
 VAR_14->dst_ch = FUNC_1(VAR_13->rem_channel);
 VAR_14->src_ch = FUNC_1(VAR_13->id);
 VAR_14->msg_len = FUNC_1((u16)VAR_12);







 VAR_15 = FUNC_6(VAR_13->cmdev, VAR_13->rdev, VAR_11, VAR_12);
 if (VAR_15)
  FUNC_3(VAR_7, "ch %d send_err=%d", VAR_13->id, VAR_15);
err_out:
 FUNC_7(VAR_13);
 return VAR_15;
}
