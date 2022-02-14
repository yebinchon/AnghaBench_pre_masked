
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int protocol; struct net_device* dev; scalar_t__ data; } ;
struct TYPE_2__ {int rx_packets; int rx_bytes; int rx_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct frhdr {scalar_t__ control; int IP_NLPID; int NLPID; int pad; int PID; scalar_t__* OUI; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;





 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct net_device*,char*,...) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_8(struct sk_buff *VAR_2, struct net_device *VAR_3)
{
 struct frhdr *VAR_4;
 int VAR_5, VAR_6;

 if (!FUNC_5(VAR_2, sizeof(*VAR_4))) {
  FUNC_3(VAR_3, "invalid data no header\n");
  VAR_3->stats.rx_errors++;
  FUNC_2(VAR_2);
  return;
 }

 VAR_4 = (struct frhdr *) VAR_2->data;
 VAR_5 = 0;
 VAR_6 = 0;
 VAR_2->dev = VAR_3;

 if (VAR_4->control != VAR_1)
 {
  FUNC_3(VAR_3, "Invalid header flag 0x%02X\n",
         VAR_4->control);
  VAR_3->stats.rx_errors++;
 }
 else
  switch (VAR_4->IP_NLPID)
  {
   case 130:
    if (VAR_4->NLPID != 128)
    {
     FUNC_3(VAR_3, "Unsupported NLPID 0x%02X\n",
            VAR_4->NLPID);
     VAR_3->stats.rx_errors++;
     break;
    }

    if (VAR_4->OUI[0] + VAR_4->OUI[1] + VAR_4->OUI[2] != 0)
    {
     FUNC_3(VAR_3, "Unsupported organizationally unique identifier 0x%02X-%02X-%02X\n",
            VAR_4->OUI[0],
            VAR_4->OUI[1],
            VAR_4->OUI[2]);
     VAR_3->stats.rx_errors++;
     break;
    }


    VAR_6 = sizeof(struct frhdr);

    VAR_2->protocol = VAR_4->PID;
    VAR_5 = 1;
    break;

   case 131:
    VAR_6 = sizeof(VAR_4->control) + sizeof(VAR_4->IP_NLPID);
    VAR_2->protocol = FUNC_1(VAR_0);
    VAR_5 = 1;
    break;

   case 128:
   case 129:
   case 132:
    FUNC_3(VAR_3, "Unsupported NLPID 0x%02X\n",
           VAR_4->pad);
    VAR_3->stats.rx_errors++;
    break;

   default:
    FUNC_3(VAR_3, "Invalid pad byte 0x%02X\n",
           VAR_4->pad);
    VAR_3->stats.rx_errors++;
    break;
  }

 if (VAR_5)
 {

  FUNC_7(VAR_2);
  FUNC_6(VAR_2, VAR_6);
  VAR_3->stats.rx_bytes += VAR_2->len;
  FUNC_4(VAR_2);
  VAR_3->stats.rx_packets++;
 }
 else
  FUNC_0(VAR_2);
}
