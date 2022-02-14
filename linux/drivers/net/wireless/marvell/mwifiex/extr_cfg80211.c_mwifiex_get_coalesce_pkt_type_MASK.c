
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_1(u8 *VAR_4)
{
 static const u8 VAR_5[] = {0x33, 0x33};
 static const u8 VAR_6[] = {0x01, 0x00, 0x5e};
 static const u8 VAR_7[] = {0xff, 0xff, 0xff, 0xff};

 if ((VAR_4[0] & 0x01) &&
     (VAR_4[VAR_0] == 1))
  return VAR_3;
 else if (!FUNC_0(VAR_4, VAR_7, 4))
  return VAR_1;
 else if ((!FUNC_0(VAR_4, VAR_5, 2) &&
    VAR_4[VAR_0] == 2) ||
   (!FUNC_0(VAR_4, VAR_6, 3) &&
    VAR_4[VAR_0] == 3))
  return VAR_2;

 return 0;
}
