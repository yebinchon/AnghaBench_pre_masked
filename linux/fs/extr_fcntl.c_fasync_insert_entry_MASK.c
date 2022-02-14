
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int f_lock; int f_flags; } ;
struct fasync_struct {int fa_fd; struct fasync_struct* fa_next; struct file* fa_file; int magic; int fa_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct fasync_struct*,struct fasync_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct fasync_struct *FUNC_6(int VAR_3, struct file *VAR_4, struct fasync_struct **VAR_5, struct fasync_struct *VAR_6)
{
        struct fasync_struct *VAR_7, **VAR_8;

 FUNC_2(&VAR_4->f_lock);
 FUNC_2(&VAR_2);
 for (VAR_8 = VAR_5; (VAR_7 = *VAR_8) != ((void*)0); VAR_8 = &VAR_7->fa_next) {
  if (VAR_7->fa_file != VAR_4)
   continue;

  FUNC_4(&VAR_7->fa_lock);
  VAR_7->fa_fd = VAR_3;
  FUNC_5(&VAR_7->fa_lock);
  goto out;
 }

 FUNC_1(&VAR_6->fa_lock);
 VAR_6->magic = VAR_1;
 VAR_6->fa_file = VAR_4;
 VAR_6->fa_fd = VAR_3;
 VAR_6->fa_next = *VAR_5;
 FUNC_0(*VAR_5, VAR_6);
 VAR_4->f_flags |= VAR_0;

out:
 FUNC_3(&VAR_2);
 FUNC_3(&VAR_4->f_lock);
 return VAR_7;
}
