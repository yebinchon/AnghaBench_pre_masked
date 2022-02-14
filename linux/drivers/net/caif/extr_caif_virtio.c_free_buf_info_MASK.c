
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfv_info {int genpool; } ;
struct buf_info {int size; scalar_t__ vaddr; } ;


 int FUNC_0 (int ,unsigned long,int ) ;
 int FUNC_1 (struct buf_info*) ;

__attribute__((used)) static void FUNC_2(struct cfv_info *VAR_0, struct buf_info *VAR_1)
{
 if (!VAR_1)
  return;
 FUNC_0(VAR_0->genpool, (unsigned long) VAR_1->vaddr,
        VAR_1->size);
 FUNC_1(VAR_1);
}
