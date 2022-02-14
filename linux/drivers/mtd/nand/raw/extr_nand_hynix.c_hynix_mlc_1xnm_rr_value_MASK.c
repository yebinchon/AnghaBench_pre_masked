
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int *,int,int *) ;

__attribute__((used)) static int FUNC_2(const u8 *VAR_1, int VAR_2, int VAR_3,
       int VAR_4, int VAR_5, bool VAR_6, u8 *VAR_7)
{
 u8 VAR_8[VAR_0];
 int VAR_9 = (VAR_4 * VAR_3) + VAR_5;
 int VAR_10 = VAR_2 * VAR_3;
 int VAR_11, VAR_12;

 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++) {
  int VAR_13 = FUNC_0(VAR_11, VAR_10, VAR_6);

  VAR_8[VAR_11] = VAR_1[VAR_9 + VAR_13];
 }

 VAR_12 = FUNC_1(VAR_8, VAR_0, VAR_7);
 if (VAR_12)
  return VAR_12;

 if (VAR_6)
  *VAR_7 = ~*VAR_7;

 return 0;
}
