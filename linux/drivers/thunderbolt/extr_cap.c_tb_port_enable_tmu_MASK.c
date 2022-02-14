
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_switch {int dummy; } ;
struct tb_port {struct tb_switch* sw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb_switch*,int*,int ,int,int) ;
 int FUNC_1 (struct tb_switch*,int*,int ,int,int) ;
 scalar_t__ FUNC_2 (struct tb_switch*) ;
 scalar_t__ FUNC_3 (struct tb_switch*) ;

__attribute__((used)) static int FUNC_4(struct tb_port *VAR_2, bool VAR_3)
{
 struct tb_switch *VAR_4 = VAR_2->sw;
 u32 VAR_5, VAR_6;
 int VAR_7;





 if (FUNC_3(VAR_4))
  VAR_6 = 0x26;
 else if (FUNC_2(VAR_4))
  VAR_6 = 0x2a;
 else
  return 0;

 VAR_7 = FUNC_0(VAR_4, &VAR_5, VAR_0, VAR_6, 1);
 if (VAR_7)
  return VAR_7;

 if (VAR_3)
  VAR_5 |= VAR_1;
 else
  VAR_5 &= ~VAR_1;

 return FUNC_1(VAR_4, &VAR_5, VAR_0, VAR_6, 1);
}
