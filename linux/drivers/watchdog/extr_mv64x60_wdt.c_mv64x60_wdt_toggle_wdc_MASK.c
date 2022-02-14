
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(int VAR_5, int VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;
 int VAR_9 = 0;

 FUNC_1(&VAR_4);
 VAR_7 = FUNC_0(VAR_3 + VAR_1);
 VAR_8 = (VAR_7 >> VAR_0) & 1;


 if ((VAR_8 ^ VAR_5) == 0) {

  VAR_7 = (1 << VAR_6) | VAR_2;
  FUNC_3(VAR_7, VAR_3 + VAR_1);

  VAR_7 = (2 << VAR_6) | VAR_2;
  FUNC_3(VAR_7, VAR_3 + VAR_1);
  VAR_9 = 1;
 }
 FUNC_2(&VAR_4);

 return VAR_9;
}
