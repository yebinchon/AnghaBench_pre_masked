
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int,int,int ,int*) ;

__attribute__((used)) static bool FUNC_3(struct mv88e6xxx_chip *VAR_0)
{
 int VAR_1;
 int VAR_2;
 u16 VAR_3;

 for (VAR_1 = 0; VAR_1 < FUNC_1(VAR_0); VAR_1++) {
  VAR_2 = FUNC_2(VAR_0, 0xf, VAR_1, 0, &VAR_3);
  if (VAR_2) {
   FUNC_0(VAR_0->dev,
    "Error reading hidden register: %d\n", VAR_2);
   return 0;
  }
  if (VAR_3 != 0x01c0)
   return 0;
 }

 return 1;
}
