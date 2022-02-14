
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct path {int dentry; } ;
struct kstat {int dummy; } ;
struct TYPE_2__ {scalar_t__ size; } ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct kstat*) ;
 int FUNC_3 (struct path const*,struct kstat*,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_4(const struct path *VAR_0, struct kstat *VAR_1,
   u32 VAR_2, unsigned int VAR_3)
{
 if (FUNC_0(FUNC_1(VAR_0->dentry))->size != 0)
  return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 FUNC_2(FUNC_1(VAR_0->dentry), VAR_1);
 return 0;
}
