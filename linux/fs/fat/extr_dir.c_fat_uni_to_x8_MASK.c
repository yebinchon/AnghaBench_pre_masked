
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct super_block {int dummy; } ;
struct TYPE_2__ {scalar_t__ utf8; } ;
struct msdos_sb_info {int nls_io; TYPE_1__ options; } ;


 int VAR_0 ;
 struct msdos_sb_info* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int FUNC_1 (struct super_block*,unsigned char*,int const*,int,int ) ;
 int FUNC_2 (int const*,int ,int ,unsigned char*,int) ;

__attribute__((used)) static inline int FUNC_3(struct super_block *VAR_2, const wchar_t *VAR_3,
    unsigned char *VAR_4, int VAR_5)
{
 struct msdos_sb_info *VAR_6 = FUNC_0(VAR_2);
 if (VAR_6->options.utf8)
  return FUNC_2(VAR_3, VAR_0,
    VAR_1, VAR_4, VAR_5);
 else
  return FUNC_1(VAR_2, VAR_4, VAR_3, VAR_5, VAR_6->nls_io);
}
