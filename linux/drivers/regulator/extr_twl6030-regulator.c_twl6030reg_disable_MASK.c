
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twlreg_info {int features; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct twlreg_info* FUNC_0 (struct regulator_dev*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct twlreg_info*,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_8)
{
 struct twlreg_info *VAR_9 = FUNC_0(VAR_8);
 int VAR_10 = 0;
 int VAR_11;

 if (!(FUNC_1() && (VAR_9->features & VAR_5)))
  VAR_10 = VAR_0 | VAR_1 | VAR_2;


 VAR_11 = FUNC_2(VAR_9, VAR_6, VAR_7,
   (VAR_10) << VAR_3 |
   VAR_4);

 return VAR_11;
}
