
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int ssize_t ;
typedef int spinlock_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static ssize_t FUNC_3(u64 *VAR_1, spinlock_t *VAR_2, char *VAR_3)
{
 u64 VAR_4;
 if (VAR_2)
  FUNC_1(VAR_2);
 VAR_4 = *VAR_1;
 if (VAR_2)
  FUNC_2(VAR_2);
 return FUNC_0(VAR_3, VAR_0, "%llu\n", VAR_4);
}
