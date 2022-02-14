
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rio_channel {int rdev; int id; int cmdev; int rem_channel; int rem_destid; int loc_destid; } ;
struct TYPE_2__ {int type; void* dst_mbox; void* src_mbox; void* dst_id; void* src_id; } ;
struct rio_ch_chan_hdr {int ch_op; TYPE_1__ bhdr; void* src_ch; void* dst_ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* FUNC_0 (int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (struct rio_ch_chan_hdr*) ;
 struct rio_ch_chan_hdr* FUNC_3 (int,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int ,int) ;
 int FUNC_6 (int ,int ,struct rio_ch_chan_hdr*,int) ;
 int FUNC_7 (int ,int ,struct rio_ch_chan_hdr*,int) ;

__attribute__((used)) static int FUNC_8(struct rio_channel *VAR_6)
{
 struct rio_ch_chan_hdr *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_3);
 if (VAR_7 == ((void*)0))
  return -VAR_2;

 VAR_7->bhdr.src_id = FUNC_0(VAR_6->loc_destid);
 VAR_7->bhdr.dst_id = FUNC_0(VAR_6->rem_destid);
 VAR_7->dst_ch = FUNC_1(VAR_6->rem_channel);
 VAR_7->src_ch = FUNC_1(VAR_6->id);
 VAR_7->bhdr.src_mbox = VAR_5;
 VAR_7->bhdr.dst_mbox = VAR_5;
 VAR_7->bhdr.type = VAR_4;
 VAR_7->ch_op = VAR_0;





 VAR_8 = FUNC_6(VAR_6->cmdev, VAR_6->rdev, VAR_7, sizeof(*VAR_7));

 if (VAR_8 == -VAR_1 && !FUNC_7(VAR_6->cmdev,
           VAR_6->rdev, VAR_7, sizeof(*VAR_7)))
  return 0;
 FUNC_2(VAR_7);

 if (VAR_8)
  FUNC_5("send ACK to ch_%d on %s failed (ret=%d)",
       VAR_6->id, FUNC_4(VAR_6->rdev), VAR_8);
 return VAR_8;
}
