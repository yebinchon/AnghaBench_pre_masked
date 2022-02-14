
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct genwqe_dev {int dummy; } ;
struct ddcb_queue {int ddcb_max; unsigned long long ddcb_daddr; int * ddcb_vaddr; int * ddcb_req; } ;
struct ddcb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct genwqe_dev*,unsigned int,int *,unsigned long long) ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct genwqe_dev *VAR_1, struct ddcb_queue *VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_2(VAR_2->ddcb_max * sizeof(struct ddcb), VAR_0);

 FUNC_1(VAR_2->ddcb_req);
 VAR_2->ddcb_req = ((void*)0);

 if (VAR_2->ddcb_vaddr) {
  FUNC_0(VAR_1, VAR_3, VAR_2->ddcb_vaddr,
     VAR_2->ddcb_daddr);
  VAR_2->ddcb_vaddr = ((void*)0);
  VAR_2->ddcb_daddr = 0ull;
 }
}
