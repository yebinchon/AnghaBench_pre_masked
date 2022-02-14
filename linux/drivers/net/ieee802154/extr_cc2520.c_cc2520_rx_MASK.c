
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int* data; } ;
struct cc2520_private {TYPE_1__* spi; int hw; int promiscuous; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct cc2520_private*,int*,int) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,struct sk_buff*,int) ;
 int FUNC_7 (struct sk_buff*) ;
 int* FUNC_8 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_9(struct cc2520_private *VAR_3)
{
 u8 VAR_4 = 0, VAR_5 = 0, VAR_6 = 1;
 struct sk_buff *VAR_7;


 FUNC_1(VAR_3, &VAR_4, VAR_6);

 if (!FUNC_5(VAR_4)) {



  FUNC_3(&VAR_3->spi->dev, "corrupted frame received\n");
  VAR_4 = VAR_2;
 }

 VAR_7 = FUNC_2(VAR_4);
 if (!VAR_7)
  return -VAR_1;

 if (FUNC_1(VAR_3, FUNC_8(VAR_7, VAR_4), VAR_4)) {
  FUNC_3(&VAR_3->spi->dev, "frame reception failed\n");
  FUNC_7(VAR_7);
  return -VAR_0;
 }






 if (!VAR_3->promiscuous) {
  bool VAR_8;





  VAR_8 = VAR_7->data[VAR_4 - 1] & FUNC_0(7);


  if (!VAR_8) {
   FUNC_3(&VAR_3->spi->dev, "CRC check failed\n");
   FUNC_7(VAR_7);
   return -VAR_0;
  }
  VAR_5 = VAR_7->data[VAR_4 - 1] & 0x7f;
  if (VAR_5 < 50)
   VAR_5 = 50;
  else if (VAR_5 > 113)
   VAR_5 = 113;
  VAR_5 = (VAR_5 - 50) * 4;
 }

 FUNC_6(VAR_3->hw, VAR_7, VAR_5);

 FUNC_4(&VAR_3->spi->dev, "RXFIFO: %x %x\n", VAR_4, VAR_5);

 return 0;
}
