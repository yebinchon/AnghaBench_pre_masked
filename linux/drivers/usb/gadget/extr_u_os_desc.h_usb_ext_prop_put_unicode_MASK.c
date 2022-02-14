
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (char const*,int,int ,int *,int) ;

__attribute__((used)) static inline int FUNC_5(u8 *VAR_2, int VAR_3, const char *VAR_4,
        int VAR_5)
{
 int VAR_6;
 FUNC_1(VAR_5, FUNC_2(VAR_2, VAR_3));
 VAR_6 = FUNC_4(VAR_4, VAR_5 >> 1, VAR_1,
   (wchar_t *) FUNC_3(VAR_2, VAR_3),
   VAR_5 - 2);
 if (VAR_6 < 0)
  return VAR_6;

 FUNC_0(0,
  &VAR_2[VAR_0 + VAR_3 + VAR_5 - 2]);

 return VAR_5;
}
