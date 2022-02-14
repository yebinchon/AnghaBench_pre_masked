
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hash ;
typedef int __u32 ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __le32 FUNC_2(char *VAR_2, size_t VAR_3, __le32 *VAR_4,
        size_t VAR_5)
{
 __u32 VAR_6 = 0;

 while (VAR_3--) {
  VAR_6 = (VAR_6 << VAR_0) ^
         (VAR_6 >> (8*sizeof(VAR_6) - VAR_0)) ^
         *VAR_2++;
 }
 while (VAR_5--) {
  VAR_6 = (VAR_6 << VAR_1) ^
         (VAR_6 >> (8*sizeof(VAR_6) - VAR_1)) ^
         FUNC_1(*VAR_4++);
 }
 return FUNC_0(VAR_6);
}
