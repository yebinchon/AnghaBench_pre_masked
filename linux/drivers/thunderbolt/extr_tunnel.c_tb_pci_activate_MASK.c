
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_tunnel {int dst_port; int src_port; } ;


 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct tb_tunnel *VAR_0, bool VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->src_port, VAR_1);
 if (VAR_2)
  return VAR_2;

 if (FUNC_1(VAR_0->dst_port))
  return FUNC_0(VAR_0->dst_port, VAR_1);

 return 0;
}
