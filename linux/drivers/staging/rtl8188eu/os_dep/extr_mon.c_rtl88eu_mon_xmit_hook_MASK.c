
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;
typedef int u8 ;
struct pkt_attrib {int nr_frags; int iv_len; int last_txcmdsz; } ;
struct xmit_frame {int pkt_offset; int * buf_addr; struct pkt_attrib attrib; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*,int *,int ,int ,int ) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (size_t,int) ;

void FUNC_3(struct net_device *VAR_2, struct xmit_frame *VAR_3,
      uint VAR_4)
{
 struct pkt_attrib *VAR_5;
 u8 *VAR_6;
 int VAR_7, VAR_8;

 if (!VAR_2 || !VAR_3)
  return;
 if (!FUNC_1(VAR_2))
  return;

 VAR_5 = &VAR_3->attrib;

 VAR_8 = VAR_1 + VAR_3->pkt_offset * VAR_0;
 VAR_6 = VAR_3->buf_addr + VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_5->nr_frags - 1; VAR_7++) {
  FUNC_0(VAR_2, VAR_6, VAR_4, VAR_5->iv_len, 0);
  VAR_6 += VAR_4;
  VAR_6 = (u8 *)FUNC_2((size_t)VAR_6, 4);
 }

 FUNC_0(VAR_2, VAR_6, VAR_5->last_txcmdsz, VAR_5->iv_len, 0);
}
