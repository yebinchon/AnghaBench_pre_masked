
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl4030_bci {scalar_t__ ac_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct twl4030_bci *VAR_2, bool VAR_3)
{
 int VAR_4;

 if (VAR_2->ac_mode == VAR_0)
  VAR_3 = 0;

 if (VAR_3)
  VAR_4 = FUNC_0(0, VAR_1);
 else
  VAR_4 = FUNC_0(VAR_1, 0);

 return VAR_4;
}
