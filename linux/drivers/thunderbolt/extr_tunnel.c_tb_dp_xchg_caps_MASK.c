
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tb_tunnel {struct tb_port* src_port; struct tb_port* dst_port; } ;
struct tb_port {scalar_t__ cap_adap; TYPE_1__* sw; } ;
struct TYPE_2__ {int generation; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct tb_port*,int *,int ,scalar_t__,int) ;
 int FUNC_1 (struct tb_port*,int *,int ,scalar_t__,int) ;

__attribute__((used)) static int FUNC_2(struct tb_tunnel *VAR_3)
{
 struct tb_port *VAR_4 = VAR_3->dst_port;
 struct tb_port *VAR_5 = VAR_3->src_port;
 u32 VAR_6, VAR_7;
 int VAR_8;





 if (VAR_5->sw->generation < 2 || VAR_4->sw->generation < 2)
  return 0;


 VAR_8 = FUNC_0(VAR_5, &VAR_6, VAR_0,
      VAR_5->cap_adap + VAR_1, 1);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_0(VAR_4, &VAR_7, VAR_0,
      VAR_4->cap_adap + VAR_1, 1);
 if (VAR_8)
  return VAR_8;


 VAR_8 = FUNC_1(VAR_4, &VAR_6, VAR_0,
       VAR_4->cap_adap + VAR_2, 1);
 if (VAR_8)
  return VAR_8;

 return FUNC_1(VAR_5, &VAR_7, VAR_0,
        VAR_5->cap_adap + VAR_2, 1);
}
