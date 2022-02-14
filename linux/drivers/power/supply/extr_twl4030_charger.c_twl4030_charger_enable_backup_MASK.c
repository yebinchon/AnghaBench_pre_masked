
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_1(int VAR_13, int VAR_14)
{
 int VAR_15;
 u8 VAR_16;

 if (VAR_13 < 2500000 ||
     VAR_14 < 25) {

  VAR_15 = FUNC_0(VAR_12,
     VAR_0, 0, VAR_11);
  return VAR_15;
 }

 VAR_16 = VAR_0;
 if (VAR_13 >= 3200000)
  VAR_16 |= VAR_9;
 else if (VAR_13 >= 3100000)
  VAR_16 |= VAR_8;
 else if (VAR_13 >= 3000000)
  VAR_16 |= VAR_7;
 else
  VAR_16 |= VAR_6;

 if (VAR_14 >= 1000)
  VAR_16 |= VAR_1;
 else if (VAR_14 >= 500)
  VAR_16 |= VAR_4;
 else if (VAR_14 >= 150)
  VAR_16 |= VAR_2;
 else
  VAR_16 |= VAR_3;

 VAR_15 = FUNC_0(VAR_12,
    VAR_10 | VAR_5,
    VAR_16,
    VAR_11);

 return VAR_15;
}
