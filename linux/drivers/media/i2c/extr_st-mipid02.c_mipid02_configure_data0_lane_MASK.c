
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int data_lane0_reg1; } ;
struct mipid02_dev {TYPE_1__ r; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct mipid02_dev *VAR_1, int VAR_2,
     bool VAR_3, bool *VAR_4)
{
 bool VAR_5 = VAR_3 ? VAR_4[2] : VAR_4[1];

 if (VAR_2 == 1 && VAR_3)
  return 0;





 if (!VAR_5)
  VAR_1->r.data_lane0_reg1 = 1 << 1;
 VAR_1->r.data_lane0_reg1 |= VAR_0;

 return 0;
}
