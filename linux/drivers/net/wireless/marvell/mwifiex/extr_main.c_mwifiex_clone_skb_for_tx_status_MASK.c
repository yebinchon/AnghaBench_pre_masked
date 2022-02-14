
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct sk_buff {int dummy; } ;
struct mwifiex_txinfo {int ack_frame_id; int cookie; int flags; } ;
struct mwifiex_private {int ack_status_lock; int ack_status_frames; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mwifiex_txinfo* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,struct sk_buff*,int,int,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

struct sk_buff *
FUNC_7(struct mwifiex_private *VAR_2,
    struct sk_buff *VAR_3, u8 VAR_4, u64 *VAR_5)
{
 struct sk_buff *VAR_6 = VAR_3;
 struct mwifiex_txinfo *VAR_7, *VAR_8;

 VAR_3 = FUNC_3(VAR_3, VAR_0);
 if (VAR_3) {
  int VAR_9;

  FUNC_5(&VAR_2->ack_status_lock);
  VAR_9 = FUNC_1(&VAR_2->ack_status_frames, VAR_6,
          1, 0x10, VAR_0);
  FUNC_6(&VAR_2->ack_status_lock);

  if (VAR_9 >= 0) {
   VAR_7 = FUNC_0(VAR_3);
   VAR_7->ack_frame_id = VAR_9;
   VAR_7->flags |= VAR_4;
   VAR_8 = FUNC_0(VAR_6);
   VAR_8->ack_frame_id = VAR_9;
   VAR_8->flags |= VAR_4;

   if (VAR_4 == VAR_1 && VAR_5)
    VAR_8->cookie = *VAR_5;

  } else if (FUNC_4(VAR_3)) {
   FUNC_2(VAR_6);
  } else {
   FUNC_2(VAR_3);
   VAR_3 = VAR_6;
  }
 } else {

  VAR_3 = VAR_6;
 }

 return VAR_3;
}
