
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct typec_port {int mux; int sw; int mode_ids; int id; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct typec_port*) ;
 struct typec_port* FUNC_3 (struct device*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_1)
{
 struct typec_port *VAR_2 = FUNC_3(VAR_1);

 FUNC_1(&VAR_0, VAR_2->id);
 FUNC_0(&VAR_2->mode_ids);
 FUNC_5(VAR_2->sw);
 FUNC_4(VAR_2->mux);
 FUNC_2(VAR_2);
}
