
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct rx_desc_819x_usb {scalar_t__ Length; } ;
struct ieee80211_rx_stats {int ntotalfrag; scalar_t__ fragoffset; scalar_t__ packetlength; scalar_t__ fraglength; scalar_t__ Length; scalar_t__ RxBufShift; scalar_t__ RxDrvInfoSize; int * virtual_address; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sk_buff *VAR_1,
     struct ieee80211_rx_stats *VAR_2)
{
 struct rx_desc_819x_usb *VAR_3 = (struct rx_desc_819x_usb *)VAR_1->data;


 VAR_2->virtual_address = (u8 *)VAR_1->data;
 VAR_2->Length = VAR_3->Length;
 VAR_2->RxDrvInfoSize = 0;
 VAR_2->RxBufShift = 0;
 VAR_2->packetlength = VAR_2->Length - VAR_0;
 VAR_2->fraglength = VAR_2->packetlength;
 VAR_2->fragoffset = 0;
 VAR_2->ntotalfrag = 1;
}
