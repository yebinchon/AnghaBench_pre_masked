
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_port {struct tb_port const* dual_link_port; int sw; } ;


 struct tb_port* FUNC_0 (int ) ;

__attribute__((used)) static inline bool FUNC_1(const struct tb_port *VAR_0)
{
 const struct tb_port *VAR_1 = FUNC_0(VAR_0->sw);
 return VAR_0 == VAR_1 || VAR_0->dual_link_port == VAR_1;
}
