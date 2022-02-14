
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u8 *VAR_9)
{
 u16 VAR_10;
 int VAR_11, VAR_12;

 if (VAR_9[VAR_3] == VAR_9[VAR_5] &&
     VAR_9[VAR_4] == VAR_9[VAR_6]) {
  VAR_11 = VAR_3;
  VAR_12 = VAR_4;
 } else if (VAR_9[VAR_5] == VAR_9[VAR_7] &&
     VAR_9[VAR_6] == VAR_9[VAR_8]) {
  VAR_11 = VAR_5;
  VAR_12 = VAR_6;
 } else if (VAR_9[VAR_7] == VAR_9[VAR_3] &&
     VAR_9[VAR_8] == VAR_9[VAR_4]) {
  VAR_11 = VAR_7;
  VAR_12 = VAR_8;
 } else {
  return -VAR_2;
 }

 VAR_10 = VAR_9[VAR_11] | VAR_9[VAR_12] << 8;


 if (FUNC_1(VAR_10) & VAR_1)
  return -VAR_2;


 if (VAR_10 == VAR_0)
  return VAR_0;

 return (VAR_10 >> 1) & FUNC_0(9, 0);
}
