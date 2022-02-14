
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct mmp_struct {scalar_t__ mmp_checksum; } ;


 int FUNC_0 (struct super_block*) ;
 scalar_t__ FUNC_1 (struct super_block*,struct mmp_struct*) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_0, struct mmp_struct *VAR_1)
{
 if (!FUNC_0(VAR_0))
  return 1;

 return VAR_1->mmp_checksum == FUNC_1(VAR_0, VAR_1);
}
