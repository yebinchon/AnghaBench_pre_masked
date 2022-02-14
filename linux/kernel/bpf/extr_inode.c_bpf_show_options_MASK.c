
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ umode_t ;
struct seq_file {int dummy; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ i_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_3, struct dentry *VAR_4)
{
 umode_t VAR_5 = FUNC_0(VAR_4)->i_mode & VAR_0 & ~VAR_2;

 if (VAR_5 != VAR_1)
  FUNC_1(VAR_3, ",mode=%o", VAR_5);
 return 0;
}
