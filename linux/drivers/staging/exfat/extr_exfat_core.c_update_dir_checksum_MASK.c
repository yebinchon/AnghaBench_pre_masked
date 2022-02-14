
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct super_block {int dummy; } ;
struct file_dentry_t {int checksum; scalar_t__ num_ext; } ;
struct dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef int sector_t ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (struct super_block*,int ) ;
 int FUNC_2 (struct super_block*,int ) ;
 int FUNC_3 (struct super_block*,int ) ;
 scalar_t__ FUNC_4 (void*,int ,scalar_t__,int ) ;
 struct dentry_t* FUNC_5 (struct super_block*,struct chain_t*,int,int *) ;

void FUNC_6(struct super_block *VAR_3, struct chain_t *VAR_4,
    s32 VAR_5)
{
 int VAR_6, VAR_7;
 sector_t VAR_8;
 u16 VAR_9;
 struct file_dentry_t *VAR_10;
 struct dentry_t *VAR_11;

 VAR_10 = (struct file_dentry_t *)FUNC_5(VAR_3, VAR_4, VAR_5,
          &VAR_8);
 if (!VAR_10)
  return;

 FUNC_1(VAR_3, VAR_8);

 VAR_7 = (s32)VAR_10->num_ext + 1;
 VAR_9 = FUNC_4((void *)VAR_10, VAR_2, 0,
         VAR_1);

 for (VAR_6 = 1; VAR_6 < VAR_7; VAR_6++) {
  VAR_11 = FUNC_5(VAR_3, VAR_4, VAR_5 + VAR_6, ((void*)0));
  if (!VAR_11) {
   FUNC_3(VAR_3, VAR_8);
   return;
  }

  VAR_9 = FUNC_4((void *)VAR_11, VAR_2, VAR_9,
          VAR_0);
 }

 FUNC_0(VAR_10->checksum, VAR_9);
 FUNC_2(VAR_3, VAR_8);
 FUNC_3(VAR_3, VAR_8);
}
