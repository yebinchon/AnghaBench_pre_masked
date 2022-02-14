
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct writeback_control {int range_start; int range_end; scalar_t__ nr_to_write; int sync_mode; } ;
struct vm_area_struct {int vm_pgoff; int vm_flags; int vm_file; scalar_t__ vm_start; scalar_t__ vm_end; } ;
struct inode {int i_mapping; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct inode* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,struct vm_area_struct*) ;
 int FUNC_4 (struct inode*,struct writeback_control*) ;

__attribute__((used)) static void FUNC_5(struct vm_area_struct *VAR_5)
{
 struct inode *VAR_6;

 struct writeback_control VAR_7 = {
  .nr_to_write = VAR_0,
  .sync_mode = VAR_4,
  .range_start = VAR_5->vm_pgoff * VAR_2,

  .range_end = VAR_5->vm_pgoff * VAR_2 +
   (VAR_5->vm_end - VAR_5->vm_start - 1),
 };

 if (!(VAR_5->vm_flags & VAR_3))
  return;

 FUNC_3(VAR_1, "9p VMA close, %p, flushing", VAR_5);

 VAR_6 = FUNC_0(VAR_5->vm_file);

 if (!FUNC_1(VAR_6->i_mapping))
  VAR_7.nr_to_write = 0;

 FUNC_2();
 FUNC_4(VAR_6, &VAR_7);
}
