
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cred {int dummy; } ;


 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (struct cred*,int ) ;
 int FUNC_2 (char const*) ;

int FUNC_3(struct cred *VAR_0, const char *VAR_1)
{
 u32 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_1, FUNC_2(VAR_1), &VAR_2);
 if (VAR_3 < 0)
  return VAR_3;

 return FUNC_1(VAR_0, VAR_2);
}
