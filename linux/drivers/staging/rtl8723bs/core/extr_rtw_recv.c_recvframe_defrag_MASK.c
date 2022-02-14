
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ frag_num; scalar_t__ hdrlen; scalar_t__ iv_len; int icv_len; } ;
struct recv_frame_hdr {TYPE_3__ attrib; int len; int rx_data; int rx_tail; } ;
struct TYPE_5__ {struct recv_frame_hdr hdr; int list; } ;
union recv_frame {TYPE_2__ u; } ;
typedef scalar_t__ u8 ;
struct list_head {int dummy; } ;
struct __queue {int dummy; } ;
struct TYPE_4__ {struct __queue free_recv_queue; } ;
struct adapter {TYPE_1__ recvpriv; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct list_head* FUNC_1 (struct __queue*) ;
 struct list_head* FUNC_2 (struct list_head*) ;
 scalar_t__* FUNC_3 (union recv_frame*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (union recv_frame*,scalar_t__) ;
 int FUNC_7 (union recv_frame*,int ) ;
 int FUNC_8 (union recv_frame*,int ) ;
 int FUNC_9 (union recv_frame*,struct __queue*) ;
 int FUNC_10 (struct __queue*,struct __queue*) ;

__attribute__((used)) static union recv_frame *FUNC_11(struct adapter *VAR_2,
       struct __queue *VAR_3)
{
 struct list_head *VAR_4, *VAR_5;
 u8 *VAR_6, VAR_7;
 u8 VAR_8;
 struct recv_frame_hdr *VAR_9, *VAR_10;
 union recv_frame *VAR_11, *VAR_12;
 struct __queue *VAR_13;

 VAR_8 = 0;
 VAR_13 = &VAR_2->recvpriv.free_recv_queue;

 VAR_5 = FUNC_1(VAR_3);
 VAR_4 = FUNC_2(VAR_5);
 VAR_11 = (union recv_frame *)VAR_4;
 VAR_9 = &VAR_11->u.hdr;
 FUNC_4(&(VAR_11->u.list));

 if (VAR_8 != VAR_9->attrib.frag_num) {


  FUNC_9(VAR_11, VAR_13);
  FUNC_10(VAR_3, VAR_13);

  return ((void*)0);
 }

 VAR_8++;

 VAR_4 = FUNC_1(VAR_3);

 VAR_4 = FUNC_2(VAR_4);

 VAR_6 = FUNC_3(VAR_11);

 while (VAR_5 != VAR_4) {
  VAR_12 = (union recv_frame *)VAR_4;
  VAR_10 = &VAR_12->u.hdr;




  if (VAR_8 != VAR_10->attrib.frag_num) {


   FUNC_9(VAR_11, VAR_13);
   FUNC_10(VAR_3, VAR_13);
   return ((void*)0);
  }

  VAR_8++;




  VAR_7 = VAR_10->attrib.hdrlen + VAR_10->attrib.iv_len;

  FUNC_6(VAR_12, VAR_7);


  FUNC_7(VAR_11, VAR_9->attrib.icv_len);


  FUNC_5(VAR_9->rx_tail, VAR_10->rx_data, VAR_10->len);

  FUNC_8(VAR_11, VAR_10->len);

  VAR_9->attrib.icv_len = VAR_10->attrib.icv_len;
  VAR_4 = FUNC_2(VAR_4);

 }


 FUNC_10(VAR_3, VAR_13);

 FUNC_0(VAR_1, VAR_0, ("Performance defrag!!!!!\n"));

 return VAR_11;
}
