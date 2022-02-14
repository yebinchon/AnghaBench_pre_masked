
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ iocharset; } ;
struct exfat_sb_info {int s_lock; TYPE_1__ options; scalar_t__ nls_io; scalar_t__ nls_disk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct exfat_sb_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct exfat_sb_info *VAR_1)
{
 if (VAR_1->nls_disk)
  FUNC_3(VAR_1->nls_disk);
 if (VAR_1->nls_io)
  FUNC_3(VAR_1->nls_io);
 if (VAR_1->options.iocharset != VAR_0)
  FUNC_0(VAR_1->options.iocharset);

 FUNC_2(&VAR_1->s_lock);
 FUNC_1(VAR_1);
}
