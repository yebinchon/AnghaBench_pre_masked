
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int flags; } ;
struct regulator_dev {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct twlreg_info* FUNC_0 (struct regulator_dev*) ;
 int FUNC_1 (struct twlreg_info*,int ,int ,unsigned int) ;

__attribute__((used)) static int
FUNC_2(struct regulator_dev *VAR_4, unsigned VAR_5)
{
 struct twlreg_info *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->flags & VAR_1)
  VAR_5 |= VAR_0;

 return FUNC_1(VAR_6, VAR_2, VAR_3,
       VAR_5);
}
