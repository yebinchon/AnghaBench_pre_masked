
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {TYPE_1__* s_export_op; } ;
struct TYPE_2__ {scalar_t__ encode_fh; int fh_to_dentry; } ;


 int VAR_0 ;

int FUNC_0(struct super_block *VAR_1)
{
 if (!VAR_1->s_export_op || !VAR_1->s_export_op->fh_to_dentry)
  return 0;

 return VAR_1->s_export_op->encode_fh ? -1 : VAR_0;
}
