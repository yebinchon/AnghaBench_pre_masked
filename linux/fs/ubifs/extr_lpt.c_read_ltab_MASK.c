
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int ltab_sz; int ltab_offs; int ltab_lnum; } ;


 int VAR_0 ;
 int FUNC_0 (struct ubifs_info*,int ,void*,int ,int ,int) ;
 int FUNC_1 (struct ubifs_info*,void*) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct ubifs_info *VAR_1)
{
 int VAR_2;
 void *VAR_3;

 VAR_3 = FUNC_3(VAR_1->ltab_sz);
 if (!VAR_3)
  return -VAR_0;
 VAR_2 = FUNC_0(VAR_1, VAR_1->ltab_lnum, VAR_3, VAR_1->ltab_offs, VAR_1->ltab_sz, 1);
 if (VAR_2)
  goto out;
 VAR_2 = FUNC_1(VAR_1, VAR_3);
out:
 FUNC_2(VAR_3);
 return VAR_2;
}
