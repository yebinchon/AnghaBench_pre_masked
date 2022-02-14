
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int u16 ;
struct pkt_attrib {scalar_t__ encrypt; int icv_len; scalar_t__ bswenc; scalar_t__ pktlen; scalar_t__ iv_len; scalar_t__ hdrlen; } ;
struct xmit_frame {struct pkt_attrib attrib; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct xmit_frame *VAR_2)
{
 struct pkt_attrib *VAR_3 = &VAR_2->attrib;

 u32 VAR_4;


 VAR_4 = VAR_3->hdrlen + VAR_3->iv_len +
  VAR_0 + sizeof(u16) +
  VAR_3->pktlen +
  ((VAR_3->bswenc) ? VAR_3->icv_len : 0);

 if (VAR_3->encrypt == VAR_1)
  VAR_4 += 8;

 return VAR_4;
}
