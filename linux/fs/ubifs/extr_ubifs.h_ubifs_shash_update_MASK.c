
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubifs_info {int dummy; } ;
struct shash_desc {int dummy; } ;


 int FUNC_0 (struct shash_desc*,void const*,unsigned int) ;
 scalar_t__ FUNC_1 (struct ubifs_info const*) ;

__attribute__((used)) static inline int FUNC_2(const struct ubifs_info *VAR_0,
          struct shash_desc *VAR_1, const void *VAR_2,
          unsigned int VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_1(VAR_0)) {
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
  if (VAR_4 < 0)
   return VAR_4;
 }

 return 0;
}
