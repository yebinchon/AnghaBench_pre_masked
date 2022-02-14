
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_hw_stat {int type; } ;
struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_hw_stat*) ;
 struct mv88e6xxx_hw_stat* VAR_0 ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_1,
       int VAR_2)
{
 struct mv88e6xxx_hw_stat *VAR_3;
 int VAR_4, VAR_5;

 for (VAR_4 = 0, VAR_5 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
  VAR_3 = &VAR_0[VAR_4];
  if (VAR_3->type & VAR_2)
   VAR_5++;
 }
 return VAR_5;
}
