
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fc_target_port {int private; } ;
struct fcloop_rscn {int work; int tport; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct fcloop_rscn* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct nvmet_fc_target_port *VAR_2)
{
 struct fcloop_rscn *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return;

 VAR_3->tport = VAR_2->private;
 FUNC_0(&VAR_3->work, VAR_1);

 FUNC_2(&VAR_3->work);
}
