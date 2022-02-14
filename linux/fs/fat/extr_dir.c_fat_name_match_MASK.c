
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char name_check; } ;
struct msdos_sb_info {int nls_io; TYPE_1__ options; } ;


 int FUNC_0 (unsigned char const*,unsigned char const*,int) ;
 int FUNC_1 (int ,unsigned char const*,unsigned char const*,int) ;

__attribute__((used)) static inline int FUNC_2(struct msdos_sb_info *VAR_0,
     const unsigned char *VAR_1, int VAR_2,
     const unsigned char *VAR_3, int VAR_4)
{
 if (VAR_2 != VAR_4)
  return 0;

 if (VAR_0->options.name_check != 's')
  return !FUNC_1(VAR_0->nls_io, VAR_1, VAR_3, VAR_2);
 else
  return !FUNC_0(VAR_1, VAR_3, VAR_2);
}
