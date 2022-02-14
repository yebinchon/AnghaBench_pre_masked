
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(__be32 *VAR_0, u64 VAR_1, int VAR_2)
{
 u64 VAR_3 = FUNC_2(VAR_0, VAR_2);
 FUNC_1(VAR_0, 0, VAR_2 * 4);
 VAR_3 += VAR_1;
 if (VAR_2 > 1)
  VAR_0[VAR_2 - 2] = FUNC_0(VAR_3 >> 32);
 VAR_0[VAR_2 - 1] = FUNC_0(VAR_3 & 0xffffffffu);

 return 0;
}
