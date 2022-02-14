
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct raid_map {int data_encryption_key_index; int volume_blk_size; } ;
struct pqi_encryption_info {int encrypt_tweak_upper; int encrypt_tweak_lower; int data_encryption_key_index; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static inline void FUNC_4(
 struct pqi_encryption_info *VAR_0, struct raid_map *VAR_1,
 u64 VAR_2)
{
 u32 VAR_3;






 VAR_3 = FUNC_1(&VAR_1->volume_blk_size);
 if (VAR_3 != 512)
  VAR_2 = (VAR_2 * VAR_3) / 512;

 VAR_0->data_encryption_key_index =
  FUNC_0(&VAR_1->data_encryption_key_index);
 VAR_0->encrypt_tweak_lower = FUNC_2(VAR_2);
 VAR_0->encrypt_tweak_upper = FUNC_3(VAR_2);
}
