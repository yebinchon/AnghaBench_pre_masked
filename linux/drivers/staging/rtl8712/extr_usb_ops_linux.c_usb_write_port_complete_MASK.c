
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int xmit_tasklet; int txirp_cnt; int beq_cnt; int voq_cnt; int viq_cnt; int bkq_cnt; } ;
struct pkt_attrib {int priority; } ;
struct xmit_frame {int* bpending; struct urb** pxmit_urb; struct pkt_attrib attrib; struct _adapter* padapter; struct xmit_buf* pxmitbuf; } ;
struct xmit_buf {int dummy; } ;
struct urb {int status; scalar_t__ context; } ;
struct _adapter {int pnetdev; scalar_t__ surprise_removed; struct xmit_priv xmitpriv; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct xmit_priv*,struct xmit_buf*) ;
 int FUNC_2 (struct xmit_priv*,struct xmit_frame*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct urb *VAR_0)
{
 int VAR_1;
 struct xmit_frame *VAR_2 = (struct xmit_frame *)VAR_0->context;
 struct xmit_buf *VAR_3 = VAR_2->pxmitbuf;
 struct _adapter *VAR_4 = VAR_2->padapter;
 struct xmit_priv *VAR_5 = &VAR_4->xmitpriv;
 struct pkt_attrib *VAR_6 = &VAR_2->attrib;

 switch (VAR_6->priority) {
 case 1:
 case 2:
  VAR_5->bkq_cnt--;
  break;
 case 4:
 case 5:
  VAR_5->viq_cnt--;
  break;
 case 6:
 case 7:
  VAR_5->voq_cnt--;
  break;
 case 0:
 case 3:
 default:
  VAR_5->beq_cnt--;
  break;
 }
 VAR_5->txirp_cnt--;
 for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
  if (VAR_0 == VAR_2->pxmit_urb[VAR_1]) {
   VAR_2->bpending[VAR_1] = 0;
   break;
  }
 }
 if (VAR_4->surprise_removed)
  return;
 switch (VAR_0->status) {
 case 0:
  break;
 default:
  FUNC_0(VAR_4->pnetdev,
    "r8712u: pipe error: (%d)\n", VAR_0->status);
  break;
 }

 FUNC_2(VAR_5, VAR_2);
 FUNC_1(VAR_5, VAR_3);
 FUNC_3(&VAR_5->xmit_tasklet);
}
