
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ expires; } ;
struct cpsw_ale {TYPE_1__ timer; scalar_t__ ageout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct cpsw_ale*,int ,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

void FUNC_3(struct cpsw_ale *VAR_4)
{
 FUNC_1(VAR_4, 0, VAR_1, 1);
 FUNC_1(VAR_4, 0, VAR_0, 1);

 FUNC_2(&VAR_4->timer, VAR_2, 0);
 if (VAR_4->ageout) {
  VAR_4->timer.expires = VAR_3 + VAR_4->ageout;
  FUNC_0(&VAR_4->timer);
 }
}
