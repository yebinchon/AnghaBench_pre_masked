
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct s5c73m3_ctrls {TYPE_4__* af_stop; TYPE_3__* focus_auto; TYPE_2__* af_start; TYPE_1__* af_distance; } ;
struct s5c73m3 {struct s5c73m3_ctrls ctrls; } ;
struct TYPE_8__ {scalar_t__ is_new; } ;
struct TYPE_7__ {scalar_t__ val; scalar_t__ is_new; } ;
struct TYPE_6__ {scalar_t__ is_new; } ;
struct TYPE_5__ {scalar_t__ val; scalar_t__ is_new; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct s5c73m3*,int) ;
 int FUNC_1 (struct s5c73m3*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct s5c73m3 *VAR_4, int VAR_5)
{
 struct s5c73m3_ctrls *VAR_6 = &VAR_4->ctrls;
 int VAR_7 = 1;

 if (VAR_6->af_distance->is_new) {
  u16 VAR_8 = (VAR_6->af_distance->val == VAR_3)
    ? VAR_1 : VAR_2;
  VAR_7 = FUNC_1(VAR_4, VAR_0, VAR_8);
  if (VAR_7 != 0)
   return VAR_7;
 }

 if (!VAR_7 || (VAR_6->focus_auto->is_new && VAR_6->focus_auto->val) ||
       VAR_6->af_start->is_new)
  VAR_7 = FUNC_0(VAR_4, 1);
 else if ((VAR_6->focus_auto->is_new && !VAR_6->focus_auto->val) ||
       VAR_6->af_stop->is_new)
  VAR_7 = FUNC_0(VAR_4, 0);
 else
  VAR_7 = 0;

 return VAR_7;
}
