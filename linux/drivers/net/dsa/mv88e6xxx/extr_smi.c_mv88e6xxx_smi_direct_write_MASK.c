
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mv88e6xxx_chip {int bus; } ;


 int FUNC_0 (int ,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct mv88e6xxx_chip *VAR_0,
          int VAR_1, int VAR_2, u16 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0->bus, VAR_1, VAR_2, VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
