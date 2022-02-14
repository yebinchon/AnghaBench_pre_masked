
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union gve_adminq_command {int opcode; } ;
struct gve_priv {int dummy; } ;
typedef int cmd ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct gve_priv*,union gve_adminq_command*) ;
 int FUNC_2 (union gve_adminq_command*,int ,int) ;

int FUNC_3(struct gve_priv *VAR_1)
{
 union gve_adminq_command VAR_2;

 FUNC_2(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.opcode = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, &VAR_2);
}
