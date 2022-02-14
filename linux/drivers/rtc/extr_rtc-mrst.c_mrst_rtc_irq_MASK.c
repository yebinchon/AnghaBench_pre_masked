
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (void*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_6, void *VAR_7)
{
 u8 VAR_8;

 FUNC_2(&VAR_5);

 VAR_8 = FUNC_4(VAR_2);
 FUNC_3(&VAR_5);

 VAR_8 &= VAR_4 | VAR_3;
 if (FUNC_0(VAR_8)) {
  FUNC_1(VAR_7, 1, VAR_8);
  return VAR_0;
 }
 return VAR_1;
}
