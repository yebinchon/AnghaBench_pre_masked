
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

__attribute__((used)) static void FUNC_1(u32 *VAR_1, __be32 *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 2; VAR_5++) {
  int VAR_6 = VAR_3 * 2 + VAR_5;
  int VAR_7 = VAR_6 / 3;
  int VAR_8 = (VAR_7 * 2 + !VAR_4) * 3 + (VAR_6 % 3);

  u32 *VAR_9 = &VAR_1[VAR_8 * VAR_0/2];

  FUNC_0(VAR_9, VAR_2, VAR_0/2 * sizeof(*VAR_2));
  VAR_2 += VAR_0/2;
 }
}
