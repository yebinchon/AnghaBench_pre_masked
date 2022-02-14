
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usbnet {TYPE_1__* net; } ;
struct sk_buff {scalar_t__ len; scalar_t__ data; } ;
struct gl_packet {int * packet_data; int packet_length; } ;
struct gl_header {struct gl_packet packets; int packet_count; } ;
struct TYPE_2__ {scalar_t__ hard_header_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int *,int) ;
 int FUNC_5 (struct usbnet*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_6(struct usbnet *VAR_3, struct sk_buff *VAR_4)
{
 struct gl_header *VAR_5;
 struct gl_packet *VAR_6;
 struct sk_buff *VAR_7;
 u32 VAR_8;
 u32 VAR_9;


 if (VAR_4->len < VAR_3->net->hard_header_len)
  return 0;

 VAR_5 = (struct gl_header *) VAR_4->data;


 VAR_9 = FUNC_1(VAR_5->packet_count);
 if (VAR_9 > VAR_2) {
  FUNC_2(VAR_3->net,
      "genelink: invalid received packet count %u\n",
      VAR_9);
  return 0;
 }


 VAR_6 = &VAR_5->packets;


 FUNC_3(VAR_4, 4);

 while (VAR_9 > 1) {

  VAR_8 = FUNC_1(VAR_6->packet_length);


  if (VAR_8 > VAR_1) {
   FUNC_2(VAR_3->net, "genelink: invalid rx length %d\n",
       VAR_8);
   return 0;
  }


  VAR_7 = FUNC_0(VAR_8, VAR_0);
  if (VAR_7) {


   FUNC_4(VAR_7, VAR_6->packet_data, VAR_8);
   FUNC_5(VAR_3, VAR_7);
  }


  VAR_6 = (struct gl_packet *)&VAR_6->packet_data[VAR_8];
  VAR_9--;


  FUNC_3(VAR_4, VAR_8 + 4);
 }


 FUNC_3(VAR_4, 4);

 if (VAR_4->len > VAR_1) {
  FUNC_2(VAR_3->net, "genelink: invalid rx length %d\n",
      VAR_4->len);
  return 0;
 }
 return 1;
}
