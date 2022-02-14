
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_4(u64 VAR_3)
{
 u64 VAR_4;

 VAR_4 = FUNC_0(VAR_1);
 VAR_4 <<= 20;

 FUNC_1(VAR_3, &VAR_2);

 if (VAR_4 > 0 && FUNC_2(&VAR_2) > VAR_4) {
  FUNC_3(VAR_3, &VAR_2);
  return -VAR_0;
 }

 return 0;
}
