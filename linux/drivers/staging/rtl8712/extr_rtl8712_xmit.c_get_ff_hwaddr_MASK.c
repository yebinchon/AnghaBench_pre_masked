
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pkt_attrib {int priority; int qsel; } ;
struct xmit_frame {scalar_t__ frame_tag; struct _adapter* padapter; struct pkt_attrib attrib; } ;
struct dvobj_priv {int nr_endpoint; } ;
struct _adapter {struct dvobj_priv dvobjpriv; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static u32 FUNC_0(struct xmit_frame *VAR_8)
{
 u32 VAR_9 = 0;
 struct pkt_attrib *VAR_10 = &VAR_8->attrib;
 struct _adapter *VAR_11 = VAR_8->padapter;
 struct dvobj_priv *VAR_12 = &VAR_11->dvobjpriv;

 if (VAR_8->frame_tag == VAR_7) {
  VAR_9 = VAR_3;
 } else if (VAR_8->frame_tag == VAR_0) {
  VAR_9 = VAR_4;
 } else if (VAR_12->nr_endpoint == 6) {
  switch (VAR_10->priority) {
  case 0:
  case 3:
   VAR_9 = VAR_1;
   break;
  case 1:
  case 2:
   VAR_9 = VAR_2;
   break;
  case 4:
  case 5:
   VAR_9 = VAR_5;
   break;
  case 6:
  case 7:
   VAR_9 = VAR_6;
   break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
   VAR_9 = VAR_3;
   break;
  default:
   VAR_9 = VAR_1;
   break;
  }
 } else if (VAR_12->nr_endpoint == 4) {
  switch (VAR_10->qsel) {
  case 0:
  case 3:
  case 1:
  case 2:
   VAR_9 = VAR_1;
   break;
  case 4:
  case 5:
  case 6:
  case 7:
   VAR_9 = VAR_6;
   break;
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
   VAR_9 = VAR_3;
   break;
  default:
   VAR_9 = VAR_1;
   break;
  }
 }
 return VAR_9;
}
