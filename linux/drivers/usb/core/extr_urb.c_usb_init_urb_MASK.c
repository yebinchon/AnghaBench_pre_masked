
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int anchor_list; int kref; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct urb*,int ,int) ;

void FUNC_3(struct urb *VAR_0)
{
 if (VAR_0) {
  FUNC_2(VAR_0, 0, sizeof(*VAR_0));
  FUNC_1(&VAR_0->kref);
  FUNC_0(&VAR_0->anchor_list);
 }
}
