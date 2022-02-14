
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buffer_head {int dummy; } ;
struct adfs_dir {int nr_buffers; struct buffer_head** bh_fplus; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct buffer_head*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;

__attribute__((used)) static int
FUNC_3(struct adfs_dir *VAR_1)
{
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = VAR_1->nr_buffers - 1; VAR_3 >= 0; VAR_3--) {
  struct buffer_head *VAR_4 = VAR_1->bh_fplus[VAR_3];
  FUNC_2(VAR_4);
  if (FUNC_0(VAR_4) && !FUNC_1(VAR_4))
   VAR_2 = -VAR_0;
 }

 return VAR_2;
}
