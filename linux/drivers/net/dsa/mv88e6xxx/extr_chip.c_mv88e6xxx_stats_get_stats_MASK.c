
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u16 ;
struct mv88e6xxx_hw_stat {int type; } ;
struct mv88e6xxx_chip {int dummy; } ;


 int FUNC_0 (struct mv88e6xxx_hw_stat*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,struct mv88e6xxx_hw_stat*,int,int ,int ) ;
 struct mv88e6xxx_hw_stat* VAR_0 ;
 int FUNC_2 (struct mv88e6xxx_chip*) ;
 int FUNC_3 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_4(struct mv88e6xxx_chip *VAR_1, int VAR_2,
         uint64_t *VAR_3, int VAR_4,
         u16 VAR_5, u16 VAR_6)
{
 struct mv88e6xxx_hw_stat *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_8 = 0, VAR_9 = 0; VAR_8 < FUNC_0(VAR_0); VAR_8++) {
  VAR_7 = &VAR_0[VAR_8];
  if (VAR_7->type & VAR_4) {
   FUNC_2(VAR_1);
   VAR_3[VAR_9] = FUNC_1(VAR_1, VAR_7, VAR_2,
             VAR_5,
             VAR_6);
   FUNC_3(VAR_1);

   VAR_9++;
  }
 }
 return VAR_9;
}
