
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct shash_desc {int tfm; } ;
struct ext4_sb_info {int s_chksum_driver; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct shash_desc*,void const*,unsigned int) ;

__attribute__((used)) static inline u32 FUNC_3(struct ext4_sb_info *VAR_0, u32 VAR_1,
         const void *VAR_2, unsigned int VAR_3)
{
 struct {
  struct shash_desc shash;
  char ctx[4];
 } VAR_4;

 FUNC_0(FUNC_1(VAR_0->s_chksum_driver)!=sizeof(VAR_4.ctx));

 VAR_4.shash.tfm = VAR_0->s_chksum_driver;
 *(u32 *)VAR_4.ctx = VAR_1;

 FUNC_0(FUNC_2(&VAR_4.shash, VAR_2, VAR_3));

 return *(u32 *)VAR_4.ctx;
}
