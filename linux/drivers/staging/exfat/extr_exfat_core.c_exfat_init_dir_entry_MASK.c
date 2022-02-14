
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct super_block {int dummy; } ;
struct strm_dentry_t {int dummy; } ;
struct file_dentry_t {int dummy; } ;
struct chain_t {int dummy; } ;
typedef int sector_t ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct super_block*,int ) ;
 scalar_t__ FUNC_1 (struct super_block*,struct chain_t*,scalar_t__,int *) ;
 int FUNC_2 (struct file_dentry_t*,int ) ;
 int FUNC_3 (struct strm_dentry_t*,int,int ,int ) ;

s32 FUNC_4(struct super_block *VAR_3, struct chain_t *VAR_4,
    s32 VAR_5, u32 VAR_6, u32 VAR_7, u64 VAR_8)
{
 sector_t VAR_9;
 u8 VAR_10;
 struct file_dentry_t *VAR_11;
 struct strm_dentry_t *VAR_12;

 VAR_10 = (VAR_6 == VAR_2) ? 0x01 : 0x03;


 VAR_11 = (struct file_dentry_t *)FUNC_1(VAR_3, VAR_4, VAR_5,
          &VAR_9);
 if (!VAR_11)
  return VAR_0;

 VAR_12 = (struct strm_dentry_t *)FUNC_1(VAR_3, VAR_4, VAR_5 + 1,
          &VAR_9);
 if (!VAR_12)
  return VAR_0;

 FUNC_2(VAR_11, VAR_6);
 FUNC_0(VAR_3, VAR_9);

 FUNC_3(VAR_12, VAR_10, VAR_7, VAR_8);
 FUNC_0(VAR_3, VAR_9);

 return VAR_1;
}
