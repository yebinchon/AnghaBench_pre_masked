
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int suspend_state_t ;
struct regulator_state {int min_uV; int max_uV; int uV; } ;
struct regulator_dev {TYPE_2__* desc; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* list_voltage ) (struct regulator_dev*,int) ;} ;


 int VAR_0 ;
 struct regulator_state* FUNC_0 (struct regulator_dev*,int ) ;
 int FUNC_1 (struct regulator_dev*,int,int) ;
 int FUNC_2 (struct regulator_dev*,int) ;

__attribute__((used)) static int FUNC_3(struct regulator_dev *VAR_1,
      int VAR_2, int VAR_3, suspend_state_t VAR_4)
{
 struct regulator_state *VAR_5;
 int VAR_6, VAR_7;

 VAR_5 = FUNC_0(VAR_1, VAR_4);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 if (VAR_2 < VAR_5->min_uV)
  VAR_2 = VAR_5->min_uV;
 if (VAR_3 > VAR_5->max_uV)
  VAR_3 = VAR_5->max_uV;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_6 = VAR_1->desc->ops->list_voltage(VAR_1, VAR_7);
 if (VAR_6 >= VAR_2 && VAR_6 <= VAR_3)
  VAR_5->uV = VAR_6;

 return 0;
}
