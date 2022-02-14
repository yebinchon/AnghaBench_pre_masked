
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct tm6000_core {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tm6000_core*,int,int,int ,int ,int*,int) ;

int FUNC_1(struct tm6000_core *VAR_2, u8 VAR_3, u16 VAR_4, u16 VAR_5)
{
 int VAR_6;
 u8 VAR_7[1];

 VAR_6 = FUNC_0(VAR_2, VAR_0 | VAR_1, VAR_3,
     VAR_4, VAR_5, VAR_7, 1);

 if (VAR_6 < 0)
  return VAR_6;

 return *VAR_7;
}
