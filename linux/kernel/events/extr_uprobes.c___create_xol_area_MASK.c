
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uprobe_opcode_t ;
struct TYPE_3__ {char* name; int ** pages; int * fault; } ;
struct xol_area {unsigned long vaddr; struct xol_area* bitmap; int ** pages; int slot_count; int wq; TYPE_1__ xol_mapping; } ;
struct mm_struct {int dummy; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *,int ) ;
 int FUNC_4 (int *,int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_5 (int *) ;
 struct xol_area* FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct xol_area*) ;
 struct xol_area* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,struct xol_area*) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (struct mm_struct*,struct xol_area*) ;

__attribute__((used)) static struct xol_area *FUNC_12(unsigned long VAR_6)
{
 struct mm_struct *VAR_7 = VAR_5->mm;
 uprobe_opcode_t VAR_8 = VAR_3;
 struct xol_area *VAR_9;

 VAR_9 = FUNC_8(sizeof(*VAR_9), VAR_1);
 if (FUNC_10(!VAR_9))
  goto out;

 VAR_9->bitmap = FUNC_6(FUNC_0(VAR_2), sizeof(long),
          VAR_1);
 if (!VAR_9->bitmap)
  goto free_area;

 VAR_9->xol_mapping.name = "[uprobes]";
 VAR_9->xol_mapping.fault = ((void*)0);
 VAR_9->xol_mapping.pages = VAR_9->pages;
 VAR_9->pages[0] = FUNC_2(VAR_0);
 if (!VAR_9->pages[0])
  goto free_bitmap;
 VAR_9->pages[1] = ((void*)0);

 VAR_9->vaddr = VAR_6;
 FUNC_5(&VAR_9->wq);

 FUNC_9(0, VAR_9->bitmap);
 FUNC_4(&VAR_9->slot_count, 1);
 FUNC_3(VAR_9->pages[0], 0, &VAR_8, VAR_4);

 if (!FUNC_11(VAR_7, VAR_9))
  return VAR_9;

 FUNC_1(VAR_9->pages[0]);
 free_bitmap:
 FUNC_7(VAR_9->bitmap);
 free_area:
 FUNC_7(VAR_9);
 out:
 return ((void*)0);
}
