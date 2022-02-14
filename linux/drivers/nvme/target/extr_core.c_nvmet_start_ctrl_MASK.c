
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_ctrl {int kato; int ka_work; int csts; int cc; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(struct nvmet_ctrl *VAR_6)
{
 FUNC_0(&VAR_6->lock);

 if (FUNC_5(VAR_6->cc) != VAR_4 ||
     FUNC_4(VAR_6->cc) != VAR_3 ||
     FUNC_6(VAR_6->cc) != 0 ||
     FUNC_2(VAR_6->cc) != 0 ||
     FUNC_3(VAR_6->cc) != 0) {
  VAR_6->csts = VAR_1;
  return;
 }

 VAR_6->csts = VAR_2;







 FUNC_1(VAR_5, &VAR_6->ka_work, VAR_6->kato * VAR_0);
}
