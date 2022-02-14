
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_pgoff; int vm_flags; scalar_t__ vm_mm; scalar_t__ vm_start; scalar_t__ vm_end; struct gntdev_grant_map* vm_private_data; int * vm_ops; } ;
struct gntdev_priv {scalar_t__ mm; int lock; } ;
struct gntdev_grant_map {int flags; int count; struct vm_area_struct* vma; int pages; scalar_t__ pages_vm_start; int users; } ;
struct file {struct gntdev_priv* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__,scalar_t__,scalar_t__,int ,struct gntdev_grant_map*) ;
 int VAR_10 ;
 struct gntdev_grant_map* FUNC_1 (struct gntdev_priv*,int,int) ;
 int FUNC_2 (struct gntdev_grant_map*) ;
 int FUNC_3 (struct gntdev_priv*,struct gntdev_grant_map*) ;
 int VAR_11 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,int,scalar_t__,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int *) ;
 int VAR_12 ;
 int FUNC_9 (struct gntdev_grant_map*,int ,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_10 (struct vm_area_struct*,int ,int ) ;
 int FUNC_11 (struct vm_area_struct*) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct file *VAR_14, struct vm_area_struct *VAR_15)
{
 struct gntdev_priv *VAR_16 = VAR_14->private_data;
 int VAR_17 = VAR_15->vm_pgoff;
 int VAR_18 = FUNC_11(VAR_15);
 struct gntdev_grant_map *VAR_19;
 int VAR_20 = -VAR_0;

 if ((VAR_15->vm_flags & VAR_8) && !(VAR_15->vm_flags & VAR_7))
  return -VAR_0;

 FUNC_6("map %d+%d at %lx (pgoff %lx)\n",
   VAR_17, VAR_18, VAR_15->vm_start, VAR_15->vm_pgoff);

 FUNC_4(&VAR_16->lock);
 VAR_19 = FUNC_1(VAR_16, VAR_17, VAR_18);
 if (!VAR_19)
  goto unlock_out;
 if (VAR_13 && VAR_19->vma)
  goto unlock_out;
 if (VAR_13 && VAR_16->mm != VAR_15->vm_mm) {
  FUNC_7("Huh? Other mm?\n");
  goto unlock_out;
 }

 FUNC_8(&VAR_19->users);

 VAR_15->vm_ops = &VAR_11;

 VAR_15->vm_flags |= VAR_5 | VAR_4 | VAR_6;

 if (VAR_13)
  VAR_15->vm_flags |= VAR_3;

 VAR_15->vm_private_data = VAR_19;

 if (VAR_13)
  VAR_19->vma = VAR_15;

 if (VAR_19->flags) {
  if ((VAR_15->vm_flags & VAR_8) &&
    (VAR_19->flags & VAR_2))
   goto out_unlock_put;
 } else {
  VAR_19->flags = VAR_1;
  if (!(VAR_15->vm_flags & VAR_8))
   VAR_19->flags |= VAR_2;
 }

 FUNC_5(&VAR_16->lock);

 if (VAR_13) {
  VAR_19->pages_vm_start = VAR_15->vm_start;
  VAR_20 = FUNC_0(VAR_15->vm_mm, VAR_15->vm_start,
       VAR_15->vm_end - VAR_15->vm_start,
       VAR_10, VAR_19);
  if (VAR_20) {
   FUNC_7("find_grant_ptes() failure.\n");
   goto out_put_map;
  }
 }

 VAR_20 = FUNC_2(VAR_19);
 if (VAR_20)
  goto out_put_map;

 if (!VAR_13) {
  VAR_20 = FUNC_10(VAR_15, VAR_19->pages, VAR_19->count);
  if (VAR_20)
   goto out_put_map;
 } else {
 }

 return 0;

unlock_out:
 FUNC_5(&VAR_16->lock);
 return VAR_20;

out_unlock_put:
 FUNC_5(&VAR_16->lock);
out_put_map:
 if (VAR_13) {
  VAR_19->vma = ((void*)0);
  FUNC_9(VAR_19, 0, VAR_19->count);
 }
 FUNC_3(VAR_16, VAR_19);
 return VAR_20;
}
