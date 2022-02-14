
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {unsigned int digest_size; TYPE_1__* hash_alg; } ;
struct fsverity_info {TYPE_2__ tree_params; int inode; } ;
typedef int pgoff_t ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int,int ,unsigned int const,int const*,int ,unsigned int const,int const*) ;
 scalar_t__ FUNC_1 (int const*,int const*,unsigned int const) ;

__attribute__((used)) static inline int FUNC_2(const struct fsverity_info *VAR_1,
        const u8 *VAR_2, const u8 *VAR_3,
        pgoff_t VAR_4, int VAR_5)
{
 const unsigned int VAR_6 = VAR_1->tree_params.digest_size;

 if (FUNC_1(VAR_2, VAR_3, VAR_6) == 0)
  return 0;

 FUNC_0(VAR_1->inode,
       "FILE CORRUPTED! index=%lu, level=%d, want_hash=%s:%*phN, real_hash=%s:%*phN",
       VAR_4, VAR_5,
       VAR_1->tree_params.hash_alg->name, VAR_6, VAR_2,
       VAR_1->tree_params.hash_alg->name, VAR_6, VAR_3);
 return -VAR_0;
}
