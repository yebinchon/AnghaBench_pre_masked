
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mfrag; scalar_t__ frag_num; scalar_t__ privacy; scalar_t__* ta; } ;
struct recv_frame_hdr {TYPE_3__ attrib; int list; } ;
struct TYPE_8__ {struct recv_frame_hdr hdr; } ;
union recv_frame {TYPE_4__ u; } ;
typedef scalar_t__ u8 ;
struct sta_priv {int dummy; } ;
struct list_head {int dummy; } ;
struct __queue {struct list_head queue; } ;
struct TYPE_6__ {struct __queue defrag_q; } ;
struct sta_info {TYPE_2__ sta_recvpriv; } ;
struct TYPE_5__ {struct __queue free_recv_queue; } ;
struct _adapter {TYPE_1__ recvpriv; struct sta_priv stapriv; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct list_head*) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (union recv_frame*,struct __queue*) ;
 int FUNC_3 (struct __queue*,struct __queue*) ;
 struct sta_info* FUNC_4 (struct sta_priv*,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct _adapter*,union recv_frame*) ;
 union recv_frame* FUNC_6 (struct _adapter*,struct __queue*) ;

union recv_frame *FUNC_7(struct _adapter *VAR_1,
          union recv_frame *VAR_2)
{
 u8 VAR_3;
 u8 VAR_4;
 u8 *VAR_5;
 struct recv_frame_hdr *VAR_6;
 struct sta_info *VAR_7;
 struct sta_priv *VAR_8;
 struct list_head *VAR_9;
 union recv_frame *VAR_10 = ((void*)0);
 struct __queue *VAR_11, *VAR_12;

 VAR_8 = &VAR_1->stapriv;
 VAR_6 = &VAR_2->u.hdr;
 VAR_11 = &VAR_1->recvpriv.free_recv_queue;

 VAR_3 = VAR_6->attrib.mfrag;
 VAR_4 = VAR_6->attrib.frag_num;
 VAR_5 = VAR_6->attrib.ta;
 VAR_7 = FUNC_4(VAR_8, VAR_5);
 if (!VAR_7)
  VAR_12 = ((void*)0);
 else
  VAR_12 = &VAR_7->sta_recvpriv.defrag_q;

 if ((VAR_3 == 0) && (VAR_4 == 0))
  VAR_10 = VAR_2;
 if (VAR_3 == 1) {



  if (VAR_12) {
   if (VAR_4 == 0) {

    if (!FUNC_1(&VAR_12->queue)) {

     FUNC_3(VAR_12,
            VAR_11);
    }
   }

   VAR_9 = &VAR_12->queue;
   FUNC_0(&VAR_6->list, VAR_9);
   VAR_10 = ((void*)0);
  } else {



   FUNC_2(VAR_2, VAR_11);
   VAR_10 = ((void*)0);
  }

 }
 if ((VAR_3 == 0) && (VAR_4 != 0)) {



  if (VAR_12) {
   VAR_9 = &VAR_12->queue;
   FUNC_0(&VAR_6->list, VAR_9);

   VAR_2 = FUNC_6(VAR_1, VAR_12);
   VAR_10 = VAR_2;
  } else {



   FUNC_2(VAR_2, VAR_11);
   VAR_10 = ((void*)0);
  }
 }
 if (VAR_10 && (VAR_10->u.hdr.attrib.privacy)) {

  if (FUNC_5(VAR_1, VAR_10) == VAR_0) {
   FUNC_2(VAR_10, VAR_11);
   VAR_10 = ((void*)0);
  }
 }
 return VAR_10;
}
