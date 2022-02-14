
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct trace_seq {int dummy; } ;
struct TYPE_2__ {int num; } ;
struct mlx5_flow_destination {int type; int tir_num; int ft_num; int ft; TYPE_1__ vport; } ;
 char* FUNC_0 (struct trace_seq*) ;
 int FUNC_1 (struct trace_seq*,char*,...) ;
 int FUNC_2 (struct trace_seq*,int ) ;

const char *FUNC_3(struct trace_seq *VAR_0,
    const struct mlx5_flow_destination *VAR_1,
    u32 VAR_2)
{
 const char *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_1->type) {
 case 128:
  FUNC_1(VAR_0, "vport=%u\n", VAR_1->vport.num);
  break;
 case 132:
  FUNC_1(VAR_0, "ft=%p\n", VAR_1->ft);
  break;
 case 131:
  FUNC_1(VAR_0, "ft_num=%u\n", VAR_1->ft_num);
  break;
 case 129:
  FUNC_1(VAR_0, "tir=%u\n", VAR_1->tir_num);
  break;
 case 133:
  FUNC_1(VAR_0, "counter_id=%u\n", VAR_2);
  break;
 case 130:
  FUNC_1(VAR_0, "port\n");
  break;
 }

 FUNC_2(VAR_0, 0);
 return VAR_3;
}
