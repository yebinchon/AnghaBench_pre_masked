
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int __be32 ;


 int * FUNC_0 (int *,char const*,unsigned int) ;
 int FUNC_1 (int *,int ,unsigned int) ;
 int * FUNC_2 (int *,unsigned int) ;

__attribute__((used)) static __be32 *FUNC_3(__be32 *VAR_0, const char *VAR_1, unsigned int VAR_2)
{
 VAR_0 = FUNC_2(VAR_0, VAR_2);
 VAR_0 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_2 & 3) {
  unsigned int VAR_3 = 4 - (VAR_2 & 3);

  FUNC_1((u8 *)VAR_0 + VAR_2, 0, VAR_3);
  VAR_2 += VAR_3;
 }

 return VAR_0 + VAR_2 / sizeof(__be32);
}
