
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smem_header {int available; int free_offset; struct smem_global_entry* toc; } ;
struct smem_global_entry {void* allocated; void* size; int offset; } ;
struct qcom_smem {TYPE_1__* regions; } ;
struct TYPE_2__ {struct smem_header* virt_base; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,size_t) ;
 size_t FUNC_4 (int ) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct qcom_smem *VAR_2,
      unsigned VAR_3,
      size_t VAR_4)
{
 struct smem_global_entry *VAR_5;
 struct smem_header *VAR_6;

 VAR_6 = VAR_2->regions[0].virt_base;
 VAR_5 = &VAR_6->toc[VAR_3];
 if (VAR_5->allocated)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_4, 8);
 if (FUNC_1(VAR_4 > FUNC_4(VAR_6->available)))
  return -VAR_1;

 VAR_5->offset = VAR_6->free_offset;
 VAR_5->size = FUNC_2(VAR_4);






 FUNC_5();
 VAR_5->allocated = FUNC_2(1);

 FUNC_3(&VAR_6->free_offset, VAR_4);
 FUNC_3(&VAR_6->available, -VAR_4);

 return 0;
}
