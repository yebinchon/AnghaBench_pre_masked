
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int orph_buf; int leb_size; int max_orphans; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*) ;
 int FUNC_1 (struct ubifs_info*) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct ubifs_info *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 VAR_1->max_orphans = FUNC_1(VAR_1);

 if (!VAR_3) {
  VAR_1->orph_buf = FUNC_3(VAR_1->leb_size);
  if (!VAR_1->orph_buf)
   return -VAR_0;
 }

 if (VAR_2)
  VAR_4 = FUNC_0(VAR_1);
 else if (!VAR_3)
  VAR_4 = FUNC_2(VAR_1);

 return VAR_4;
}
