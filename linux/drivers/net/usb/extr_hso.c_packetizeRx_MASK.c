
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct iphdr {int dummy; } ;
struct TYPE_8__ {int tot_len; } ;
struct hso_net {int rx_parse_state; unsigned int rx_buf_missing; int rx_buf_size; TYPE_7__* net; TYPE_3__* skb_rx_buf; TYPE_1__ rx_ip_hdr; } ;
struct TYPE_9__ {int rx_bytes; int rx_packets; } ;
struct TYPE_11__ {TYPE_2__ stats; int dev; } ;
struct TYPE_10__ {int protocol; } ;


 unsigned short VAR_0 ;
 int FUNC_0 (unsigned char*,int ) ;
 int VAR_1 ;



 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,unsigned short) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (unsigned char*,unsigned char*,unsigned short) ;
 int FUNC_5 (int,int) ;
 TYPE_3__* FUNC_6 (TYPE_7__*,unsigned short) ;
 int FUNC_7 (TYPE_3__*) ;
 unsigned short FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*,...) ;
 int FUNC_10 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_11(struct hso_net *VAR_2, unsigned char *VAR_3,
   unsigned int VAR_4, unsigned char VAR_5)
{
 unsigned short VAR_6;
 unsigned short VAR_7 = 0;
 unsigned short VAR_8;


 FUNC_3(0x1, "Rx %d bytes\n", VAR_4);
 FUNC_0(VAR_3, FUNC_5(128, (int)VAR_4));

 while (VAR_4) {
  switch (VAR_2->rx_parse_state) {
  case 129:


   VAR_6 =
       (VAR_4 <
        VAR_2->rx_buf_missing) ? VAR_4 : VAR_2->
       rx_buf_missing;

   FUNC_4(((unsigned char *)(&VAR_2->rx_ip_hdr)) +
          VAR_2->rx_buf_size, VAR_3 + VAR_7,
          VAR_6);

   VAR_2->rx_buf_size += VAR_6;
   VAR_7 += VAR_6;
   VAR_2->rx_buf_missing -= VAR_6;
   VAR_4 -= VAR_6;

   if (!VAR_2->rx_buf_missing) {


    VAR_8 = FUNC_8(VAR_2->rx_ip_hdr.tot_len);

    if ((VAR_8 > VAR_0) ||
        (VAR_8 < sizeof(struct iphdr))) {
     FUNC_2(&VAR_2->net->dev,
      "Invalid frame (%d) length\n",
      VAR_8);
     VAR_2->rx_parse_state = 128;
     continue;
    }

    VAR_2->skb_rx_buf = FUNC_6(VAR_2->net,
            VAR_8);
    if (!VAR_2->skb_rx_buf) {

     FUNC_3(0x1, "could not allocate memory\n");
     VAR_2->rx_parse_state = 128;
     continue;
    }



    FUNC_9(VAR_2->skb_rx_buf,
          (char *)&(VAR_2->rx_ip_hdr),
          sizeof(struct iphdr));


    VAR_2->rx_buf_size = sizeof(struct iphdr);


    VAR_2->rx_buf_missing =
        VAR_8 - sizeof(struct iphdr);
    VAR_2->rx_parse_state = 130;
   }
   break;

  case 130:
   VAR_6 = (VAR_4 < VAR_2->rx_buf_missing)
     ? VAR_4 : VAR_2->rx_buf_missing;




   FUNC_9(VAR_2->skb_rx_buf,
         VAR_3 + VAR_7,
         VAR_6);

   VAR_2->rx_buf_missing -= VAR_6;
   VAR_4 -= VAR_6;
   VAR_7 += VAR_6;
   VAR_2->rx_buf_size += VAR_6;
   if (!VAR_2->rx_buf_missing) {


    VAR_2->skb_rx_buf->protocol = FUNC_1(VAR_1);
    FUNC_10(VAR_2->skb_rx_buf);


    FUNC_7(VAR_2->skb_rx_buf);

    VAR_2->skb_rx_buf = ((void*)0);


    VAR_2->net->stats.rx_packets++;

    VAR_2->net->stats.rx_bytes += VAR_2->rx_buf_size;

    VAR_2->rx_buf_size = 0;
    VAR_2->rx_buf_missing = sizeof(struct iphdr);
    VAR_2->rx_parse_state = 129;
   }
   break;

  case 128:
   FUNC_3(0x1, " W_S\n");
   VAR_4 = 0;
   break;
  default:
   FUNC_3(0x1, "\n");
   VAR_4--;
   break;
  }
 }


 if (VAR_5) {
  if (VAR_2->rx_parse_state == 128) {
   VAR_2->rx_parse_state = 129;
   VAR_2->rx_buf_size = 0;
   VAR_2->rx_buf_missing = sizeof(struct iphdr);
  }
 }
}
