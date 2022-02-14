
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msdos_sb_info {int dummy; } ;
struct msdos_dir_entry {int starthi; int start; } ;


 scalar_t__ FUNC_0 (struct msdos_sb_info const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int FUNC_2(const struct msdos_sb_info *VAR_0,
    const struct msdos_dir_entry *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1->start);
 if (FUNC_0(VAR_0))
  VAR_2 |= (FUNC_1(VAR_1->starthi) << 16);
 return VAR_2;
}
