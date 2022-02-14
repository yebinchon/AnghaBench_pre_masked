
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {scalar_t__ num_sgs; int * sg; struct urb** transfer_buffer; struct urb** setup_packet; } ;
struct stub_priv {int num_urbs; struct urb** urbs; int * sgl; int list; } ;


 int FUNC_0 (struct urb**) ;
 int FUNC_1 (int ,struct stub_priv*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (struct urb*) ;

void FUNC_6(struct stub_priv *VAR_1)
{
 struct urb *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_urbs; VAR_3++) {
  VAR_2 = VAR_1->urbs[VAR_3];

  if (!VAR_2)
   return;

  FUNC_0(VAR_2->setup_packet);
  VAR_2->setup_packet = ((void*)0);


  if (VAR_2->transfer_buffer && !VAR_1->sgl) {
   FUNC_0(VAR_2->transfer_buffer);
   VAR_2->transfer_buffer = ((void*)0);
  }

  if (VAR_2->num_sgs) {
   FUNC_4(VAR_2->sg);
   VAR_2->sg = ((void*)0);
   VAR_2->num_sgs = 0;
  }

  FUNC_5(VAR_2);
 }
 if (!FUNC_3(&VAR_1->list))
  FUNC_2(&VAR_1->list);
 if (VAR_1->sgl)
  FUNC_4(VAR_1->sgl);
 FUNC_0(VAR_1->urbs);
 FUNC_1(VAR_0, VAR_1);
}
