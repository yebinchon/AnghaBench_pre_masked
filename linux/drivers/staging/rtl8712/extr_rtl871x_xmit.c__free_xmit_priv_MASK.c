
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xmit_priv {int pallocated_xmitbuf; int pallocated_frame_buf; int * pxmit_frame_buf; scalar_t__ pxmitbuf; struct _adapter* adapter; } ;
struct xmit_frame {int dummy; } ;
struct xmit_buf {int pallocated_buf; } ;
struct _adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct _adapter*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct _adapter*,struct xmit_frame*) ;
 int FUNC_3 (struct _adapter*,struct xmit_buf*) ;

void FUNC_4(struct xmit_priv *VAR_2)
{
 int VAR_3;
 struct _adapter *VAR_4 = VAR_2->adapter;
 struct xmit_frame *VAR_5 = (struct xmit_frame *)
     VAR_2->pxmit_frame_buf;
 struct xmit_buf *VAR_6 = (struct xmit_buf *)VAR_2->pxmitbuf;

 if (VAR_2->pxmit_frame_buf == ((void*)0))
  return;
 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_2(VAR_4, VAR_5);
  VAR_5++;
 }
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_3(VAR_4, VAR_6);
  FUNC_1(VAR_6->pallocated_buf);
  VAR_6++;
 }
 FUNC_1(VAR_2->pallocated_frame_buf);
 FUNC_1(VAR_2->pallocated_xmitbuf);
 FUNC_0(VAR_4);
}
