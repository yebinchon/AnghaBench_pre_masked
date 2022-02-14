
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int substring_t ;
typedef int kgid_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int *,unsigned long*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(substring_t VAR_1[], kgid_t *VAR_2)
{
 unsigned long VAR_3;
 kgid_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_1, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_4 = FUNC_3(FUNC_0(), VAR_3);
 if (!FUNC_2(VAR_4))
  return -VAR_0;

 *VAR_2 = VAR_4;
 return 0;
}
