
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnt_rcb {scalar_t__ skb; scalar_t__ urb; } ;
struct vnt_private {int num_rcb; struct vnt_rcb** rcb; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct vnt_rcb*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct vnt_private *VAR_0)
{
 struct vnt_rcb *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_rcb; VAR_2++) {
  VAR_1 = VAR_0->rcb[VAR_2];
  if (!VAR_1)
   continue;


  if (VAR_1->urb) {
   FUNC_3(VAR_1->urb);
   FUNC_2(VAR_1->urb);
  }


  if (VAR_1->skb)
   FUNC_0(VAR_1->skb);

  FUNC_1(VAR_1);
 }
}
