
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int ,int *) ;

__attribute__((used)) static inline int FUNC_1(char *VAR_0, void *VAR_1)
{
 u32 VAR_2, **VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, 0, &VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_3 = VAR_1;
 **VAR_3 = VAR_2;
 ++*VAR_3;

 return 0;
}
