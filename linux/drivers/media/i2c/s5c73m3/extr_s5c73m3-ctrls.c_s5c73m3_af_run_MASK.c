
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5c73m3_ctrls {TYPE_1__* focus_auto; } ;
struct s5c73m3 {struct s5c73m3_ctrls ctrls; } ;
struct TYPE_2__ {scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct s5c73m3*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct s5c73m3 *VAR_5, bool VAR_6)
{
 struct s5c73m3_ctrls *VAR_7 = &VAR_5->ctrls;

 if (!VAR_6)
  return FUNC_0(VAR_5, VAR_0,
       VAR_2);

 if (VAR_7->focus_auto->val)
  return FUNC_0(VAR_5, VAR_3,
        VAR_4);

 return FUNC_0(VAR_5, VAR_0, VAR_1);
}
