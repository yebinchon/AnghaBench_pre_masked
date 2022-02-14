
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct usbnet {TYPE_2__* net; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct rndis_data_hdr {int msg_type; int data_len; int data_offset; int msg_len; } ;
struct TYPE_3__ {int rx_frame_errors; } ;
struct TYPE_4__ {scalar_t__ hard_header_len; TYPE_1__ stats; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,char*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 struct sk_buff* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct usbnet*,struct sk_buff*) ;

int FUNC_8(struct usbnet *VAR_2, struct sk_buff *VAR_3)
{

 if (VAR_3->len < VAR_2->net->hard_header_len)
  return 0;


 while (FUNC_1(VAR_3->len)) {
  struct rndis_data_hdr *VAR_4 = (void *)VAR_3->data;
  struct sk_buff *VAR_5;
  u32 VAR_6, VAR_7, VAR_8, VAR_9;

  VAR_6 = FUNC_0(VAR_4->msg_type);
  VAR_7 = FUNC_0(VAR_4->msg_len);
  VAR_8 = FUNC_0(VAR_4->data_offset);
  VAR_9 = FUNC_0(VAR_4->data_len);


  if (FUNC_6(VAR_6 != VAR_1 || VAR_3->len < VAR_7
    || (VAR_8 + VAR_9 + 8) > VAR_7)) {
   VAR_2->net->stats.rx_frame_errors++;
   FUNC_2(VAR_2->net, "bad rndis message %d/%d/%d/%d, len %d\n",
       FUNC_0(VAR_4->msg_type),
       VAR_7, VAR_8, VAR_9, VAR_3->len);
   return 0;
  }
  FUNC_4(VAR_3, 8 + VAR_8);


  if (FUNC_1((VAR_9 - VAR_3->len) <= sizeof *VAR_4)) {
   FUNC_5(VAR_3, VAR_9);
   break;
  }


  VAR_5 = FUNC_3(VAR_3, VAR_0);
  if (FUNC_6(!VAR_5))
   break;
  FUNC_4(VAR_3, VAR_7 - sizeof *VAR_4);
  FUNC_5(VAR_5, VAR_9);
  FUNC_7(VAR_2, VAR_5);
 }


 return 1;
}
