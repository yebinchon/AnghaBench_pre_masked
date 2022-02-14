
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkt_attrib {unsigned int qsel; scalar_t__ priority; } ;
struct dvobj_priv {int nr_endpoint; } ;
struct _adapter {struct dvobj_priv dvobjpriv; } ;



void FUNC_0(struct _adapter *VAR_0,
      struct pkt_attrib *VAR_1)
{
 unsigned int VAR_2 = 0;
 struct dvobj_priv *VAR_3 = &VAR_0->dvobjpriv;

 if (VAR_3->nr_endpoint == 6) {
  VAR_2 = (unsigned int) VAR_1->priority;
 } else if (VAR_3->nr_endpoint == 4) {
  VAR_2 = (unsigned int) VAR_1->priority;
  if (VAR_2 == 0 || VAR_2 == 3)
   VAR_2 = 3;
  else if (VAR_2 == 1 || VAR_2 == 2)
   VAR_2 = 1;
  else if (VAR_2 == 4 || VAR_2 == 5)
   VAR_2 = 5;
  else if (VAR_2 == 6 || VAR_2 == 7)
   VAR_2 = 7;
  else
   VAR_2 = 3;
 }
 VAR_1->qsel = VAR_2;
}
