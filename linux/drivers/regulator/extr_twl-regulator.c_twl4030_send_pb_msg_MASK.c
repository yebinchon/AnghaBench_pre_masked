
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,unsigned int*,int ) ;
 int FUNC_2 (int ,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(unsigned VAR_5)
{
 u8 VAR_6;
 int VAR_7;


 VAR_7 = FUNC_1(VAR_4, &VAR_6,
         VAR_1);
 if (VAR_7 < 0)
  return VAR_7;


 VAR_7 = FUNC_2(VAR_4, VAR_6 | VAR_0,
          VAR_1);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0();
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_5 >> 8,
          VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_5 & 0xff,
          VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_0();
 if (VAR_7 < 0)
  return VAR_7;


 return FUNC_2(VAR_4, VAR_6,
    VAR_1);
}
