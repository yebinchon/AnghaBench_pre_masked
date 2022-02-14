
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct devlink {int dummy; } ;
struct bnxt {int dl_port; struct devlink* dl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bnxt*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct devlink*) ;
 int FUNC_3 (struct devlink*,int ,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct devlink*) ;

void FUNC_7(struct bnxt *VAR_2)
{
 struct devlink *VAR_3 = VAR_2->dl;

 if (!VAR_3)
  return;

 FUNC_1(VAR_2);
 FUNC_4(&VAR_2->dl_port, VAR_1,
           FUNC_0(VAR_1));
 FUNC_5(&VAR_2->dl_port);
 FUNC_3(VAR_3, VAR_0,
      FUNC_0(VAR_0));
 FUNC_6(VAR_3);
 FUNC_2(VAR_3);
}
