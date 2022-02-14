
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
typedef int u32 ;
struct xmit_priv {int frag_len; } ;
struct pkt_attrib {int ether_type; int nr_frags; int icv_len; int last_txcmdsz; int priority; } ;
struct xmit_frame {int* last; int* bpending; int * mem_addr; int * buf_addr; struct pkt_attrib attrib; } ;
struct security_priv {scalar_t__ sw_encrypt; } ;
struct _adapter {struct security_priv securitypriv; struct xmit_priv xmitpriv; } ;
typedef int addr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct xmit_frame*) ;
 int FUNC_2 (struct _adapter*,int ) ;
 int FUNC_3 (struct _adapter*,int ,int,unsigned char*) ;
 int FUNC_4 (struct xmit_frame*,int *,int) ;

__attribute__((used)) static void FUNC_5(struct _adapter *VAR_2,
   struct xmit_frame *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;
 u8 *VAR_7;
 u32 VAR_8;
 struct pkt_attrib *VAR_9 = &VAR_3->attrib;
 struct xmit_priv *VAR_10 = &VAR_2->xmitpriv;
 struct security_priv *VAR_11 = &VAR_2->securitypriv;

 if (VAR_3->attrib.ether_type != 0x0806) {
  if (VAR_3->attrib.ether_type != 0x888e)
   FUNC_2(VAR_2, VAR_9->priority);
 }
 VAR_7 = VAR_3->buf_addr;
 for (VAR_4 = 0; VAR_4 < VAR_9->nr_frags; VAR_4++) {
  if (VAR_4 != (VAR_9->nr_frags - 1)) {
   VAR_5 = VAR_10->frag_len;
   VAR_5 = VAR_5 - 4 - (VAR_11->sw_encrypt ? 0 :
        VAR_9->icv_len);
   VAR_3->last[VAR_4] = 0;
  } else {
   VAR_5 = VAR_9->last_txcmdsz;
   VAR_3->last[VAR_4] = 1;
  }
  FUNC_4(VAR_3, (uint *)VAR_7, VAR_5);
  VAR_6 = VAR_5 + VAR_1;
  VAR_3->mem_addr = VAR_7;
  VAR_3->bpending[VAR_4] = 0;
  VAR_8 = FUNC_1(VAR_3);




  FUNC_3(VAR_2, VAR_8, VAR_6,
      (unsigned char *)VAR_3);

  VAR_7 += VAR_6;
  VAR_7 = (u8 *)FUNC_0(((addr_t)(VAR_7)));
 }
}
