
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mv88e6xxx_chip {int dummy; } ;
struct mv88e6352_serdes_hw_stat {int string; } ;


 int FUNC_0 (struct mv88e6352_serdes_hw_stat*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int) ;
 struct mv88e6352_serdes_hw_stat* VAR_1 ;

int FUNC_3(struct mv88e6xxx_chip *VAR_2,
     int VAR_3, uint8_t *VAR_4)
{
 struct mv88e6352_serdes_hw_stat *VAR_5;
 int VAR_6;

 if (!FUNC_2(VAR_2, VAR_3))
  return 0;

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  VAR_5 = &VAR_1[VAR_6];
  FUNC_1(VAR_4 + VAR_6 * VAR_0, VAR_5->string,
         VAR_0);
 }
 return FUNC_0(VAR_1);
}
