
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union txhdr_union {int txhdr_fw3; } ;
typedef int u8 ;
struct sk_buff {size_t len; scalar_t__ data; } ;
struct b43legacy_pioqueue {scalar_t__ need_workarounds; int dev; } ;
struct b43legacy_pio_txpacket {int dummy; } ;
struct TYPE_2__ {scalar_t__ nr_frags; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ,int *,scalar_t__,size_t,int ,int ) ;
 int FUNC_3 (struct b43legacy_pioqueue*,struct b43legacy_pio_txpacket*) ;
 TYPE_1__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct b43legacy_pioqueue*,struct sk_buff*) ;
 int FUNC_6 (struct b43legacy_pioqueue*,int *,int *,unsigned int) ;
 int FUNC_7 (struct b43legacy_pioqueue*) ;

__attribute__((used)) static int FUNC_8(struct b43legacy_pioqueue *VAR_0,
      struct sk_buff *VAR_1,
      struct b43legacy_pio_txpacket *VAR_2,
      size_t VAR_3)
{
 union txhdr_union VAR_4;
 u8 *VAR_5 = ((void*)0);
 unsigned int VAR_6;
 int VAR_7;

 VAR_5 = (u8 *)(&VAR_4.txhdr_fw3);

 FUNC_0(FUNC_4(VAR_1)->nr_frags != 0);
 VAR_7 = FUNC_2(VAR_0->dev,
     VAR_5, VAR_1->data, VAR_1->len,
     FUNC_1(VAR_1),
     FUNC_3(VAR_0, VAR_2));
 if (VAR_7)
  return VAR_7;

 FUNC_7(VAR_0);
 VAR_6 = VAR_1->len + VAR_3;
 if (VAR_0->need_workarounds)
  VAR_6--;
 FUNC_6(VAR_0, VAR_5, (u8 *)VAR_1->data, VAR_6);
 FUNC_5(VAR_0, VAR_1);

 return 0;
}
