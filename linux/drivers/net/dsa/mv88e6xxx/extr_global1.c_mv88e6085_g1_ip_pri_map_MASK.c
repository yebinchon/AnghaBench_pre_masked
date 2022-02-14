
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv88e6xxx_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mv88e6xxx_chip*,int ,int) ;

int FUNC_1(struct mv88e6xxx_chip *VAR_8)
{
 int VAR_9;


 VAR_9 = FUNC_0(VAR_8, VAR_0, 0x0000);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_1, 0x0000);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_2, 0x5555);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_3, 0x5555);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_4, 0xaaaa);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_5, 0xaaaa);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_6, 0xffff);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_8, VAR_7, 0xffff);
 if (VAR_9)
  return VAR_9;

 return 0;
}
