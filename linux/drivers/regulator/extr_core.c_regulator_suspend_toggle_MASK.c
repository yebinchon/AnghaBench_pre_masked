
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int suspend_state_t ;
struct regulator_state {int enabled; int changeable; } ;
struct regulator_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct regulator_state* FUNC_0 (struct regulator_dev*,int ) ;

__attribute__((used)) static inline int FUNC_1(struct regulator_dev *VAR_4,
        suspend_state_t VAR_5, bool VAR_6)
{
 struct regulator_state *VAR_7;

 VAR_7 = FUNC_0(VAR_4, VAR_5);
 if (VAR_7 == ((void*)0))
  return -VAR_1;

 if (!VAR_7->changeable)
  return -VAR_3;

 VAR_7->enabled = (VAR_6) ? VAR_2 : VAR_0;

 return 0;
}
