
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_lprops {int dummy; } ;
struct ubifs_info {int lsave_cnt; int* lsave; int leb_cnt; int lsave_sz; int lsave_offs; int lsave_lnum; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ubifs_lprops*) ;
 int FUNC_1 (struct ubifs_lprops*) ;
 int FUNC_2 (struct ubifs_info*,int ,void*,int ,int ,int) ;
 struct ubifs_lprops* FUNC_3 (struct ubifs_info*,int) ;
 int FUNC_4 (struct ubifs_info*,void*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct ubifs_info *VAR_1)
{
 int VAR_2, VAR_3;
 void *VAR_4;

 VAR_4 = FUNC_6(VAR_1->lsave_sz);
 if (!VAR_4)
  return -VAR_0;
 VAR_2 = FUNC_2(VAR_1, VAR_1->lsave_lnum, VAR_4, VAR_1->lsave_offs,
        VAR_1->lsave_sz, 1);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_4(VAR_1, VAR_4);
 if (VAR_2)
  goto out;
 for (VAR_3 = 0; VAR_3 < VAR_1->lsave_cnt; VAR_3++) {
  int VAR_5 = VAR_1->lsave[VAR_3];
  struct ubifs_lprops *VAR_6;





  if (VAR_5 >= VAR_1->leb_cnt)
   continue;
  VAR_6 = FUNC_3(VAR_1, VAR_5);
  if (FUNC_0(VAR_6)) {
   VAR_2 = FUNC_1(VAR_6);
   goto out;
  }
 }
out:
 FUNC_5(VAR_4);
 return VAR_2;
}
