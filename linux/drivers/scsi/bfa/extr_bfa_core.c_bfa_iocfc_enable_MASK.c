
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cb_reqd; } ;
struct bfa_s {TYPE_1__ iocfc; int plog; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int ,int ,int ,int ,char*) ;

void
FUNC_2(struct bfa_s *VAR_4)
{
 FUNC_1(VAR_4->plog, VAR_1, VAR_0, 0,
       "IOC Enable");
 VAR_4->iocfc.cb_reqd = VAR_2;
 FUNC_0(&VAR_4->iocfc, VAR_3);
}
