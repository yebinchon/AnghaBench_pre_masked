
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ubi_num; } ;
struct ubifs_info {int jhead_cnt; TYPE_2__ vi; TYPE_1__* jheads; } ;
struct super_block {struct ubifs_info* s_fs_info; } ;
struct TYPE_3__ {int wbuf; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct super_block *VAR_0, int VAR_1)
{
 int VAR_2, VAR_3;
 struct ubifs_info *VAR_4 = VAR_0->s_fs_info;






 if (!VAR_1)
  return 0;





 for (VAR_2 = 0; VAR_2 < VAR_4->jhead_cnt; VAR_2++) {
  VAR_3 = FUNC_2(&VAR_4->jheads[VAR_2].wbuf);
  if (VAR_3)
   return VAR_3;
 }
 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3)
  return VAR_3;

 return FUNC_0(VAR_4->vi.ubi_num);
}
