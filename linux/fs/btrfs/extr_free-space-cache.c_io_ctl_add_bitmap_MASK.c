
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_io_ctl {scalar_t__ cur; scalar_t__ orig; scalar_t__ index; scalar_t__ num_pages; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (struct btrfs_io_ctl*,int ) ;
 int FUNC_2 (struct btrfs_io_ctl*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct btrfs_io_ctl *VAR_1, void *VAR_2)
{
 if (!VAR_1->cur)
  return -VAR_0;





 if (VAR_1->cur != VAR_1->orig) {
  FUNC_2(VAR_1, VAR_1->index - 1);
  if (VAR_1->index >= VAR_1->num_pages)
   return -VAR_0;
  FUNC_1(VAR_1, 0);
 }

 FUNC_0(VAR_1->cur, VAR_2);
 FUNC_2(VAR_1, VAR_1->index - 1);
 if (VAR_1->index < VAR_1->num_pages)
  FUNC_1(VAR_1, 0);
 return 0;
}
