
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_7, void *VAR_8)
{
 u16 VAR_9;
 VAR_9 = FUNC_1(VAR_6 + VAR_1);
 if (VAR_9 == VAR_3)
  FUNC_2(VAR_2,
         VAR_6 + VAR_1);
 FUNC_2(0x0000U, VAR_6 + VAR_4);
 FUNC_0(VAR_5, "watchdog is barking!\n");
 return VAR_0;
}
