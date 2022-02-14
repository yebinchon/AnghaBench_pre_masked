
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct uni_name_t {int name_hash; int name_len; int * name; } ;
struct super_block {int dummy; } ;
struct strm_dentry_t {int name_hash; int name_len; } ;
struct name_dentry_t {int dummy; } ;
struct file_dentry_t {scalar_t__ num_ext; } ;
struct dos_name_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef int sector_t ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct super_block*,int ) ;
 scalar_t__ FUNC_2 (struct super_block*,struct chain_t*,int,int *) ;
 int FUNC_3 (struct name_dentry_t*,int *) ;
 int FUNC_4 (struct super_block*,struct chain_t*,int) ;

__attribute__((used)) static s32 FUNC_5(struct super_block *VAR_2, struct chain_t *VAR_3,
    s32 VAR_4, s32 VAR_5,
    struct uni_name_t *VAR_6,
    struct dos_name_t *VAR_7)
{
 int VAR_8;
 sector_t VAR_9;
 u16 *VAR_10 = VAR_6->name;
 struct file_dentry_t *VAR_11;
 struct strm_dentry_t *VAR_12;
 struct name_dentry_t *VAR_13;

 VAR_11 = (struct file_dentry_t *)FUNC_2(VAR_2, VAR_3, VAR_4,
          &VAR_9);
 if (!VAR_11)
  return VAR_0;

 VAR_11->num_ext = (u8)(VAR_5 - 1);
 FUNC_1(VAR_2, VAR_9);

 VAR_12 = (struct strm_dentry_t *)FUNC_2(VAR_2, VAR_3, VAR_4 + 1,
          &VAR_9);
 if (!VAR_12)
  return VAR_0;

 VAR_12->name_len = VAR_6->name_len;
 FUNC_0(VAR_12->name_hash, VAR_6->name_hash);
 FUNC_1(VAR_2, VAR_9);

 for (VAR_8 = 2; VAR_8 < VAR_5; VAR_8++) {
  VAR_13 = (struct name_dentry_t *)FUNC_2(VAR_2, VAR_3,
           VAR_4 + VAR_8,
           &VAR_9);
  if (!VAR_13)
   return VAR_0;

  FUNC_3(VAR_13, VAR_10);
  FUNC_1(VAR_2, VAR_9);
  VAR_10 += 15;
 }

 FUNC_4(VAR_2, VAR_3, VAR_4);

 return VAR_1;
}
