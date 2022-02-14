
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;


 unsigned long long VAR_0 ;
 unsigned long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(void)
{
 u64 VAR_5, VAR_6;
 size_t VAR_7;





 VAR_7 = VAR_1 + (1ull << VAR_0);
 VAR_5 = (u64) FUNC_1(VAR_7, VAR_3);
 if (!VAR_5)
  return -VAR_2;

 VAR_6 = (VAR_5 + (1ull << VAR_0) - 1) &
     (~0ull << VAR_0);

 FUNC_0((VAR_6 + VAR_1) > (VAR_5 + VAR_7),
  "Dummy read buffer alignment issue");
 VAR_4 = FUNC_2((void *) VAR_6);
 return 0;
}
