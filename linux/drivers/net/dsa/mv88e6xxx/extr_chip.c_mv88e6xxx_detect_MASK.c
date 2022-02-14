
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;
struct mv88e6xxx_info {int name; int prod_num; } ;
struct mv88e6xxx_chip {struct mv88e6xxx_info const* info; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int ,int ,unsigned int) ;
 int FUNC_1 (struct mv88e6xxx_chip*) ;
 struct mv88e6xxx_info* FUNC_2 (unsigned int) ;
 int FUNC_3 (struct mv88e6xxx_chip*,int ,int ,unsigned int*) ;
 int FUNC_4 (struct mv88e6xxx_chip*) ;
 int FUNC_5 (struct mv88e6xxx_chip*) ;

__attribute__((used)) static int FUNC_6(struct mv88e6xxx_chip *VAR_4)
{
 const struct mv88e6xxx_info *VAR_5;
 unsigned int VAR_6, VAR_7;
 u16 VAR_8;
 int VAR_9;

 FUNC_4(VAR_4);
 VAR_9 = FUNC_3(VAR_4, 0, VAR_1, &VAR_8);
 FUNC_5(VAR_4);
 if (VAR_9)
  return VAR_9;

 VAR_6 = VAR_8 & VAR_2;
 VAR_7 = VAR_8 & VAR_3;

 VAR_5 = FUNC_2(VAR_6);
 if (!VAR_5)
  return -VAR_0;


 VAR_4->info = VAR_5;

 VAR_9 = FUNC_1(VAR_4);
 if (VAR_9)
  return VAR_9;

 FUNC_0(VAR_4->dev, "switch 0x%x detected: %s, revision %u\n",
   VAR_4->info->prod_num, VAR_4->info->name, VAR_7);

 return 0;
}
