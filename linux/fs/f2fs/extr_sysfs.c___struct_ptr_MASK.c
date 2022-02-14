
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct f2fs_sb_info {scalar_t__ gc_thread; } ;
struct TYPE_4__ {int fault_info; } ;
struct TYPE_3__ {scalar_t__ dcc_info; } ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (struct f2fs_sb_info*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct f2fs_sb_info*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_2 (struct f2fs_sb_info*) ;
 int VAR_7 ;

__attribute__((used)) static unsigned char *FUNC_3(struct f2fs_sb_info *VAR_8, int VAR_9)
{
 if (VAR_9 == VAR_4)
  return (unsigned char *)VAR_8->gc_thread;
 else if (VAR_9 == VAR_7)
  return (unsigned char *)FUNC_2(VAR_8);
 else if (VAR_9 == VAR_0)
  return (unsigned char *)FUNC_2(VAR_8)->dcc_info;
 else if (VAR_9 == VAR_5)
  return (unsigned char *)FUNC_1(VAR_8);
 else if (VAR_9 == VAR_1 || VAR_9 == VAR_6)
  return (unsigned char *)VAR_8;





 return ((void*)0);
}
