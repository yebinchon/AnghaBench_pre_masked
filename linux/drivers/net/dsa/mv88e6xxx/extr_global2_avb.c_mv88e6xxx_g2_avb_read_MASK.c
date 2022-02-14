
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mv88e6xxx_chip*) ;
 int FUNC_1 (struct mv88e6xxx_chip*,int ,int*) ;
 int FUNC_2 (struct mv88e6xxx_chip*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct mv88e6xxx_chip *VAR_4, u16 VAR_5,
     u16 *VAR_6, int VAR_7)
{
 int VAR_8;
 int VAR_9;

 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8)
  return VAR_8;


 if (VAR_7 > 4)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_4, VAR_1,
     VAR_2 | VAR_5);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_4);
 if (VAR_8)
  return VAR_8;

 for (VAR_9 = 0; VAR_9 < VAR_7; ++VAR_9) {
  VAR_8 = FUNC_1(VAR_4, VAR_3,
     &VAR_6[VAR_9]);
  if (VAR_8)
   return VAR_8;
 }

 return 0;
}
