
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecryptfs_crypt_stat {int flags; size_t metadata_size; } ;


 int VAR_0 ;

__attribute__((used)) static inline size_t
FUNC_0(struct ecryptfs_crypt_stat *VAR_1)
{
 if (VAR_1->flags & VAR_0)
  return 0;
 return VAR_1->metadata_size;
}
