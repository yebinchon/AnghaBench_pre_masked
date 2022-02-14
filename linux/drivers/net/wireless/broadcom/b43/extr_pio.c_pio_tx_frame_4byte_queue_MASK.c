
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef char u8 ;
typedef int u32 ;
struct b43_pio_txqueue {int dummy; } ;
struct b43_pio_txpacket {TYPE_1__* skb; struct b43_pio_txqueue* queue; } ;
struct TYPE_2__ {char* data; unsigned int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_pio_txqueue*,int ) ;
 int FUNC_1 (struct b43_pio_txqueue*,int ,int ) ;
 int FUNC_2 (struct b43_pio_txqueue*,int ,char const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct b43_pio_txpacket *VAR_4,
         const u8 *VAR_5, unsigned int VAR_6)
{
 struct b43_pio_txqueue *VAR_7 = VAR_4->queue;
 const char *VAR_8 = VAR_4->skb->data;
 unsigned int VAR_9 = VAR_4->skb->len;
 u32 VAR_10;

 VAR_10 = FUNC_0(VAR_7, VAR_0);
 VAR_10 |= VAR_2;
 VAR_10 &= ~VAR_1;


 VAR_10 = FUNC_2(VAR_7, VAR_10, VAR_5, VAR_6);

 VAR_10 = FUNC_2(VAR_7, VAR_10, VAR_8, VAR_9);

 VAR_10 |= VAR_1;
 FUNC_1(VAR_7, VAR_3, VAR_10);
}
