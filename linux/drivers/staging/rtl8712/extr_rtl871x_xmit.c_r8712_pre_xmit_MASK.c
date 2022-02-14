
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int lock; } ;
struct pkt_attrib {int dummy; } ;
struct xmit_frame {struct pkt_attrib attrib; } ;
struct xmit_buf {int dummy; } ;
struct _adapter {struct xmit_priv xmitpriv; } ;


 struct xmit_buf* FUNC_0 (struct xmit_priv*) ;
 int FUNC_1 (struct _adapter*,struct pkt_attrib*) ;
 scalar_t__ FUNC_2 (struct _adapter*,struct pkt_attrib*) ;
 int FUNC_3 (struct _adapter*,struct xmit_frame*) ;
 int FUNC_4 (struct _adapter*,struct xmit_frame*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct xmit_frame*,struct xmit_buf*) ;

int FUNC_8(struct _adapter *VAR_0, struct xmit_frame *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3;
 struct xmit_buf *VAR_4 = ((void*)0);
 struct xmit_priv *VAR_5 = &VAR_0->xmitpriv;
 struct pkt_attrib *VAR_6 = &VAR_1->attrib;

 FUNC_1(VAR_0, VAR_6);
 FUNC_5(&VAR_5->lock, VAR_2);
 if (FUNC_2(VAR_0, VAR_6) > 0) {
  VAR_3 = 0;
  FUNC_4(VAR_0, VAR_1);
  FUNC_6(&VAR_5->lock, VAR_2);
  return VAR_3;
 }
 VAR_4 = FUNC_0(VAR_5);
 if (VAR_4 == ((void*)0)) {
  VAR_3 = 0;
  FUNC_4(VAR_0, VAR_1);
  FUNC_6(&VAR_5->lock, VAR_2);
 } else {
  FUNC_6(&VAR_5->lock, VAR_2);
  VAR_3 = 1;
  FUNC_7(VAR_1, VAR_4);
  FUNC_3(VAR_0, VAR_1);
 }
 return VAR_3;
}
