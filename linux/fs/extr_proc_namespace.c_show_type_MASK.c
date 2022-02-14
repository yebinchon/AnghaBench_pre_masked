
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {scalar_t__ s_subtype; TYPE_1__* s_type; } ;
struct seq_file {int dummy; } ;
struct TYPE_2__ {scalar_t__ name; } ;


 int FUNC_0 (struct seq_file*,scalar_t__) ;
 int FUNC_1 (struct seq_file*,char) ;

__attribute__((used)) static void FUNC_2(struct seq_file *VAR_0, struct super_block *VAR_1)
{
 FUNC_0(VAR_0, VAR_1->s_type->name);
 if (VAR_1->s_subtype) {
  FUNC_1(VAR_0, '.');
  FUNC_0(VAR_0, VAR_1->s_subtype);
 }
}
