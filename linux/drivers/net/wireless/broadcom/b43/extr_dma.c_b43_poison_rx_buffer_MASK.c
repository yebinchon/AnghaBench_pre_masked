
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; } ;
struct b43_rxhdr_fw4 {scalar_t__ frame_len; } ;
struct b43_plcp_hdr6 {int dummy; } ;
struct b43_dmaring {scalar_t__ rx_buffersize; scalar_t__ frameoffset; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,int,int) ;

__attribute__((used)) static void FUNC_2(struct b43_dmaring *VAR_0, struct sk_buff *VAR_1)
{
 struct b43_rxhdr_fw4 *VAR_2;
 unsigned char *VAR_3;



 VAR_2 = (struct b43_rxhdr_fw4 *)(VAR_1->data);
 VAR_2->frame_len = 0;

 FUNC_0(VAR_0->rx_buffersize < VAR_0->frameoffset + sizeof(struct b43_plcp_hdr6) + 2);
 VAR_3 = VAR_1->data + VAR_0->frameoffset;
 FUNC_1(VAR_3, 0xFF, sizeof(struct b43_plcp_hdr6) + 2 );
}
