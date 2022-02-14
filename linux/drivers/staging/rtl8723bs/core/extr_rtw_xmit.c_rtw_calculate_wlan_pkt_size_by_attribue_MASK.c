
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct pkt_attrib {scalar_t__ encrypt; int icv_len; scalar_t__ bswenc; scalar_t__ pktlen; scalar_t__ iv_len; scalar_t__ hdrlen; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

u32 FUNC_0(struct pkt_attrib *VAR_2)
{
 u32 VAR_3 = 0;

 VAR_3 = VAR_2->hdrlen + VAR_2->iv_len;
 VAR_3 += VAR_0 + sizeof(u16);
 VAR_3 += VAR_2->pktlen;
 if (VAR_2->encrypt == VAR_1)
  VAR_3 += 8;
 VAR_3 += ((VAR_2->bswenc) ? VAR_2->icv_len : 0);

 return VAR_3;
}
