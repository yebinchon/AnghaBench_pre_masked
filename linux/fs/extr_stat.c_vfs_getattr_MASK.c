
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct path {int dummy; } ;
struct kstat {int dummy; } ;


 int FUNC_0 (struct path const*) ;
 int FUNC_1 (struct path const*,struct kstat*,int ,unsigned int) ;

int FUNC_2(const struct path *VAR_0, struct kstat *VAR_1,
  u32 VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0);
 if (VAR_4)
  return VAR_4;
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
