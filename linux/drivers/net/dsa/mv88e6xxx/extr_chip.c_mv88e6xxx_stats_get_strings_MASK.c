
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mv88e6xxx_hw_stat {int type; int string; } ;
struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_hw_stat*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 struct mv88e6xxx_hw_stat* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct mv88e6xxx_chip *VAR_2,
           uint8_t *VAR_3, int VAR_4)
{
 struct mv88e6xxx_hw_stat *VAR_5;
 int VAR_6, VAR_7;

 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < FUNC_0(VAR_1); VAR_6++) {
  VAR_5 = &VAR_1[VAR_6];
  if (VAR_5->type & VAR_4) {
   FUNC_1(VAR_3 + VAR_7 * VAR_0, VAR_5->string,
          VAR_0);
   VAR_7++;
  }
 }

 return VAR_7;
}
