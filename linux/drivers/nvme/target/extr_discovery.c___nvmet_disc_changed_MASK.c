
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_port {int dummy; } ;
struct nvmet_ctrl {struct nvmet_port* port; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvmet_ctrl*,int ,int ,int ) ;
 scalar_t__ FUNC_1 (struct nvmet_ctrl*,int ) ;

__attribute__((used)) static void FUNC_2(struct nvmet_port *VAR_4,
     struct nvmet_ctrl *VAR_5)
{
 if (VAR_5->port != VAR_4)
  return;

 if (FUNC_1(VAR_5, VAR_0))
  return;

 FUNC_0(VAR_5, VAR_2,
         VAR_1, VAR_3);
}
