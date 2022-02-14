
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int s_root; } ;
struct kstatfs {int dummy; } ;
typedef int dev_t ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*) ;
 int FUNC_1 (int ,struct kstatfs*) ;
 struct super_block* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(dev_t VAR_1, struct kstatfs *VAR_2)
{
 struct super_block *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;
 if (!VAR_3)
  return -VAR_0;

 VAR_4 = FUNC_1(VAR_3->s_root, VAR_2);
 FUNC_0(VAR_3);
 return VAR_4;
}
