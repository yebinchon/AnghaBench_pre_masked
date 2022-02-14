
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ mfrag; scalar_t__ frag_num; scalar_t__ privacy; scalar_t__* ta; } ;
struct recv_frame_hdr {TYPE_3__ attrib; int list; int rx_data; } ;
struct TYPE_8__ {struct recv_frame_hdr hdr; } ;
union recv_frame {TYPE_4__ u; } ;
typedef scalar_t__ u8 ;
struct sta_priv {int dummy; } ;
struct __queue {int queue; } ;
struct TYPE_6__ {struct __queue defrag_q; } ;
struct sta_info {TYPE_2__ sta_recvpriv; } ;
struct list_head {int dummy; } ;
struct TYPE_5__ {struct __queue free_recv_queue; } ;
struct adapter {TYPE_1__ recvpriv; struct sta_priv stapriv; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct list_head* FUNC_2 (struct __queue*) ;
 int FUNC_3 (int *,struct list_head*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct adapter*,union recv_frame*) ;
 union recv_frame* FUNC_6 (struct adapter*,struct __queue*) ;
 int FUNC_7 (union recv_frame*,struct __queue*) ;
 int FUNC_8 (struct __queue*,struct __queue*) ;
 struct sta_info* FUNC_9 (struct adapter*) ;
 struct sta_info* FUNC_10 (struct sta_priv*,scalar_t__*) ;

union recv_frame *FUNC_11(struct adapter *VAR_5, union recv_frame *VAR_6)
{
 u8 VAR_7;
 u8 VAR_8;
 u8 *VAR_9;
 struct recv_frame_hdr *VAR_10;
 struct sta_info *VAR_11;
 struct sta_priv *VAR_12;
 struct list_head *VAR_13;
 union recv_frame *VAR_14 = ((void*)0);
 struct __queue *VAR_15, *VAR_16;

 VAR_12 = &VAR_5->stapriv;

 VAR_10 = &VAR_6->u.hdr;

 VAR_15 = &VAR_5->recvpriv.free_recv_queue;


 VAR_7 = VAR_10->attrib.mfrag;
 VAR_8 = VAR_10->attrib.frag_num;

 VAR_9 = VAR_10->attrib.ta;
 VAR_11 = FUNC_10(VAR_12, VAR_9);
 if (!VAR_11) {
  u8 VAR_17 = FUNC_0(VAR_10->rx_data);
  if (VAR_17 != VAR_0) {
   VAR_11 = FUNC_9(VAR_5);
   VAR_16 = &VAR_11->sta_recvpriv.defrag_q;
  } else
   VAR_16 = ((void*)0);
 } else
  VAR_16 = &VAR_11->sta_recvpriv.defrag_q;

 if ((VAR_7 == 0) && (VAR_8 == 0))
  VAR_14 = VAR_6;

 if (VAR_7 == 1) {


  if (VAR_16) {
   if (VAR_8 == 0)

    if (!FUNC_4(&VAR_16->queue))

     FUNC_8(VAR_16, VAR_15);





   VAR_13 = FUNC_2(VAR_16);
   FUNC_3(&VAR_10->list, VAR_13);


   FUNC_1(VAR_4, VAR_3, ("Enqueuq: ismfrag = %d, fragnum = %d\n", VAR_7, VAR_8));

   VAR_14 = ((void*)0);

  } else {

   FUNC_7(VAR_6, VAR_15);
   VAR_14 = ((void*)0);
   FUNC_1(VAR_4, VAR_2, ("Free because pdefrag_q == NULL: ismfrag = %d, fragnum = %d\n", VAR_7, VAR_8));
  }

 }

 if ((VAR_7 == 0) && (VAR_8 != 0)) {


  if (VAR_16) {

   VAR_13 = FUNC_2(VAR_16);
   FUNC_3(&VAR_10->list, VAR_13);



   FUNC_1(VAR_4, VAR_3, ("defrag: ismfrag = %d, fragnum = %d\n", VAR_7, VAR_8));
   VAR_6 = FUNC_6(VAR_5, VAR_16);
   VAR_14 = VAR_6;

  } else {

   FUNC_7(VAR_6, VAR_15);
   VAR_14 = ((void*)0);
   FUNC_1(VAR_4, VAR_2, ("Free because pdefrag_q == NULL: ismfrag = %d, fragnum = %d\n", VAR_7, VAR_8));
  }

 }


 if ((VAR_14) && (VAR_14->u.hdr.attrib.privacy)) {

  if (FUNC_5(VAR_5, VAR_14) == VAR_1) {
   FUNC_1(VAR_4, VAR_2, ("recvframe_chkmic(padapter,  prtnframe) == _FAIL\n"));
   FUNC_7(VAR_14, VAR_15);
   VAR_14 = ((void*)0);
  }
 }
 return VAR_14;
}
