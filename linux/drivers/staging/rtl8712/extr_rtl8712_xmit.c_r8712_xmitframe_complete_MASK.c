
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct xmit_priv {int hwxmit_entry; struct hw_xmit* hwxmits; } ;
struct TYPE_2__ {int priority; } ;
struct xmit_frame {scalar_t__ frame_tag; int pkt; TYPE_1__ attrib; } ;
struct xmit_buf {int aggr_nr; } ;
struct hw_xmit {int dummy; } ;
struct _adapter {int dummy; } ;
typedef int sint ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct xmit_frame* FUNC_0 (struct xmit_priv*,struct hw_xmit*,int ) ;
 int FUNC_1 (struct _adapter*,struct xmit_frame*) ;
 struct xmit_buf* FUNC_2 (struct xmit_priv*) ;
 int FUNC_3 (struct xmit_buf*,struct xmit_frame*) ;
 int FUNC_4 (struct xmit_priv*,struct xmit_buf*) ;
 int FUNC_5 (struct xmit_priv*,struct xmit_frame*) ;
 int FUNC_6 (struct _adapter*,struct xmit_frame*) ;
 int FUNC_7 (struct xmit_buf*,struct xmit_frame*) ;
 int FUNC_8 (struct xmit_buf*,struct xmit_frame*) ;
 int FUNC_9 (struct _adapter*,int ,struct xmit_frame*) ;
 int FUNC_10 (struct xmit_frame*,struct xmit_buf*) ;

int FUNC_11(struct _adapter *VAR_3,
        struct xmit_priv *VAR_4,
        struct xmit_buf *VAR_5)
{
 struct hw_xmit *VAR_6;
 sint VAR_7;
 struct xmit_frame *VAR_8 = ((void*)0);



 int VAR_9 = VAR_2, VAR_10 = 0;


 VAR_6 = VAR_4->hwxmits;
 VAR_7 = VAR_4->hwxmit_entry;
 if (!VAR_5) {
  VAR_5 = FUNC_2(VAR_4);
  if (!VAR_5)
   return 0;



 }

 VAR_8 = FUNC_0(VAR_4, VAR_6, VAR_7);

 if (VAR_8) {
  FUNC_10(VAR_8, VAR_5);
  if (VAR_8->frame_tag == VAR_1) {
   if (VAR_8->attrib.priority <= 15)
    VAR_9 = FUNC_9(VAR_3,
     VAR_8->pkt, VAR_8);



   FUNC_6(VAR_3, VAR_8);
  }
  if (VAR_9 == VAR_2)
   FUNC_1(VAR_3, VAR_8);
  else
   FUNC_5(VAR_4, VAR_8);
  VAR_10++;


 } else {
  FUNC_4(VAR_4, VAR_5);
  return 0;
 }
 return 1;
}
