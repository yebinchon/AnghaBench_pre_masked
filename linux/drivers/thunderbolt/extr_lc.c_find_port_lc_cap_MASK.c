
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_switch {int cap_lc; } ;
struct tb_port {int port; struct tb_switch* sw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct tb_switch*,int*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct tb_port *VAR_4)
{
 struct tb_switch *VAR_5 = VAR_4->sw;
 int VAR_6, VAR_7, VAR_8, VAR_9;
 u32 VAR_10;

 VAR_8 = FUNC_0(VAR_5, &VAR_10);
 if (VAR_8)
  return VAR_8;


 VAR_6 = (VAR_10 & VAR_2) >> VAR_3;
 VAR_9 = (VAR_10 & VAR_0) >> VAR_1;
 VAR_7 = FUNC_1(VAR_4->port);

 return VAR_5->cap_lc + VAR_6 + VAR_7 * VAR_9;
}
