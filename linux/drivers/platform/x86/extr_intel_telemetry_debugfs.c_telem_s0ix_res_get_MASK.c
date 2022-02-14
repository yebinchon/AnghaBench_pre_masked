
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, u64 *VAR_1)
{
 u64 VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2);
 if (VAR_3) {
  FUNC_1("Failed to read S0ix residency");
  return VAR_3;
 }

 *VAR_1 = VAR_2;

 return 0;
}
