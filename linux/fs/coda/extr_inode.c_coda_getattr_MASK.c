
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct kstat*) ;

int FUNC_3(const struct path *VAR_0, struct kstat *VAR_1,
   u32 VAR_2, unsigned int VAR_3)
{
 int VAR_4 = FUNC_0(FUNC_1(VAR_0->dentry));
 if (!VAR_4)
  FUNC_2(FUNC_1(VAR_0->dentry), VAR_1);
 return VAR_4;
}
