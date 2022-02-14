
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int protocol; } ;
struct cfspi {TYPE_2__* ndev; } ;
struct TYPE_4__ {int rx_bytes; int rx_dropped; int rx_packets; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sk_buff*,TYPE_2__*) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_8(struct cfspi *VAR_4, u8 *VAR_5, size_t VAR_6)
{
 u8 *VAR_7 = VAR_5;

 FUNC_1(VAR_5 != ((void*)0));

 do {
  int VAR_8;
  struct sk_buff *VAR_9 = ((void*)0);
  int VAR_10 = 0;
  int VAR_11 = 0;
  int VAR_12 = 0;





  if (VAR_1 > 1) {
   VAR_10 = 1 + *VAR_7;
   VAR_7 += VAR_10;
  }


  VAR_12 = *VAR_7;
  VAR_12 |= ((*(VAR_7+1)) << 8) & 0xFF00;
  VAR_12 += 2;



  VAR_9 = FUNC_4(VAR_4->ndev, VAR_12 + 1);
  FUNC_1(VAR_9 != ((void*)0));

  FUNC_6(VAR_9, VAR_7, VAR_12);
  VAR_7 += VAR_12;

  VAR_9->protocol = FUNC_3(VAR_0);
  FUNC_7(VAR_9);




  if (!VAR_3)
   VAR_8 = FUNC_5(VAR_9);
  else
   VAR_8 = FUNC_2(VAR_9, VAR_4->ndev);

  if (!VAR_8) {
   VAR_4->ndev->stats.rx_packets++;
   VAR_4->ndev->stats.rx_bytes += VAR_12;
  } else
   VAR_4->ndev->stats.rx_dropped++;





  VAR_11 = FUNC_0((VAR_12 + VAR_10), VAR_2);
  VAR_7 += VAR_11;
 } while ((VAR_7 - VAR_5) < VAR_6);

 return VAR_7 - VAR_5;
}
