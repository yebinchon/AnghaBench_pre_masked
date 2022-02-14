
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct zd_chip {size_t* pwr_int_values; } ;


 size_t FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,size_t,int) ;
 int * VAR_1 ;
 int FUNC_3 (struct zd_chip*) ;
 int FUNC_4 (struct zd_chip*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct zd_chip *VAR_2, int VAR_3)
{
 u8 VAR_4 = VAR_2->pwr_int_values[VAR_3 - 1];

 if (VAR_4 >= FUNC_0(VAR_1)) {
  FUNC_2(FUNC_3(VAR_2), "can't configure TX gain for "
     "int value %x on channel %d\n", VAR_4, VAR_3);
  return 0;
 }

 return FUNC_4(VAR_2,
  FUNC_1(7, VAR_1[VAR_4]), VAR_0);
}
