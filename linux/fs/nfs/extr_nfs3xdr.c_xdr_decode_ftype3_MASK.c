
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int umode_t ;
typedef size_t u32 ;
typedef int __be32 ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t FUNC_0 (int ) ;
 int * VAR_2 ;

__attribute__((used)) static __be32 *FUNC_1(__be32 *VAR_3, umode_t *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_0(VAR_3++);
 if (VAR_5 > VAR_0)
  VAR_5 = VAR_1;
 *VAR_4 = VAR_2[VAR_5];
 return VAR_3;
}
