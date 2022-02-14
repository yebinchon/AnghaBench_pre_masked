
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int __le16 ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(__le16 *VAR_0, u16 *VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5 = VAR_2 * 32;

 if (VAR_3 < VAR_5)
  return -1;

 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
  VAR_0[VAR_4] = FUNC_0(VAR_1 + VAR_4);

 return VAR_5;
}
