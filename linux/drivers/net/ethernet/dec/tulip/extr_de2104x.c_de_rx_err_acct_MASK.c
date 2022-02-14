
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct de_private {TYPE_2__* dev; } ;
struct TYPE_4__ {int rx_fifo_errors; int rx_crc_errors; int rx_length_errors; int rx_errors; } ;
struct TYPE_5__ {TYPE_1__ stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct de_private*,int ,TYPE_2__*,char*,unsigned int,int,int) ;
 int FUNC_1 (struct de_private*,int ,TYPE_2__*,char*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2 (struct de_private *VAR_4, unsigned VAR_5,
       u32 VAR_6, u32 VAR_7)
{
 FUNC_0(VAR_4, VAR_3, VAR_4->dev,
    "rx err, slot %d status 0x%x len %d\n",
    VAR_5, VAR_6, VAR_7);

 if ((VAR_6 & 0x38000300) != 0x0300) {

  if ((VAR_6 & 0xffff) != 0x7fff) {
   FUNC_1(VAR_4, VAR_3, VAR_4->dev,
       "Oversized Ethernet frame spanned multiple buffers, status %08x!\n",
       VAR_6);
   VAR_4->dev->stats.rx_length_errors++;
  }
 } else if (VAR_6 & VAR_2) {

  VAR_4->dev->stats.rx_errors++;
  if (VAR_6 & 0x0890) VAR_4->dev->stats.rx_length_errors++;
  if (VAR_6 & VAR_0) VAR_4->dev->stats.rx_crc_errors++;
  if (VAR_6 & VAR_1) VAR_4->dev->stats.rx_fifo_errors++;
 }
}
