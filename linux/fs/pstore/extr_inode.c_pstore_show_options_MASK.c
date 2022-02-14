
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct dentry {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct seq_file*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct seq_file *VAR_2, struct dentry *VAR_3)
{
 if (VAR_1 != VAR_0)
  FUNC_0(VAR_2, ",kmsg_bytes=%lu", VAR_1);
 return 0;
}
