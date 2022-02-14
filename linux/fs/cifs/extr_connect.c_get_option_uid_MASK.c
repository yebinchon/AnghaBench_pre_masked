
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
typedef int kuid_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long*) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(substring_t VAR_1[], kuid_t *VAR_2)
{
 unsigned long VAR_3;
 kuid_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_2(FUNC_0(), VAR_3);
 if (!FUNC_3(VAR_4))
  return -VAR_0;

 *VAR_2 = VAR_4;
 return 0;
}
