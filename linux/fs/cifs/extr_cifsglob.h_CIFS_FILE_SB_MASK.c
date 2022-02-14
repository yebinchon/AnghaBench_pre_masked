
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int dummy; } ;
struct cifs_sb_info {int dummy; } ;
struct TYPE_2__ {int i_sb; } ;


 struct cifs_sb_info* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct file*) ;

__attribute__((used)) static inline struct cifs_sb_info *
FUNC_2(struct file *VAR_0)
{
 return FUNC_0(FUNC_1(VAR_0)->i_sb);
}
