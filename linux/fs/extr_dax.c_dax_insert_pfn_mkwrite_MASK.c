
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_fault_t ;
struct vm_fault {int address; TYPE_2__* vma; int pgoff; } ;
struct address_space {int host; int i_pages; } ;
typedef int pfn_t ;
struct TYPE_4__ {TYPE_1__* vm_file; } ;
struct TYPE_3__ {struct address_space* f_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int ,unsigned int) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int *,void*) ;
 int FUNC_4 (int *,void*) ;
 void* FUNC_5 (int *,unsigned int) ;
 int FUNC_6 (int *,void*) ;
 int FUNC_7 (int ,struct vm_fault*,int ) ;
 int FUNC_8 (int ,struct vm_fault*,int ) ;
 int FUNC_9 (TYPE_2__*,int ,int ) ;
 int FUNC_10 (struct vm_fault*,int ,int ) ;
 int VAR_5 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static vm_fault_t
FUNC_14(struct vm_fault *VAR_6, pfn_t VAR_7, unsigned int VAR_8)
{
 struct address_space *VAR_9 = VAR_6->vma->vm_file->f_mapping;
 FUNC_0(VAR_5, &VAR_9->i_pages, VAR_6->pgoff, VAR_8);
 void *VAR_10;
 vm_fault_t VAR_11;

 FUNC_11(&VAR_5);
 VAR_10 = FUNC_5(&VAR_5, VAR_8);

 if (!VAR_10 || FUNC_1(VAR_10) ||
     (VAR_8 == 0 && !FUNC_2(VAR_10))) {
  FUNC_6(&VAR_5, VAR_10);
  FUNC_13(&VAR_5);
  FUNC_8(VAR_9->host, VAR_6,
            VAR_4);
  return VAR_4;
 }
 FUNC_12(&VAR_5, VAR_1);
 FUNC_3(&VAR_5, VAR_10);
 FUNC_13(&VAR_5);
 if (VAR_8 == 0)
  VAR_11 = FUNC_9(VAR_6->vma, VAR_6->address, VAR_7);




 else
  VAR_11 = VAR_3;
 FUNC_4(&VAR_5, VAR_10);
 FUNC_7(VAR_9->host, VAR_6, VAR_11);
 return VAR_11;
}
