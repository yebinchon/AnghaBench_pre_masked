
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_port {int cap_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tb_port*,int*,int ,int ,int) ;

bool FUNC_1(struct tb_port *VAR_2)
{
 u32 VAR_3;

 if (FUNC_0(VAR_2, &VAR_3, VAR_0, VAR_2->cap_adap, 1))
  return 0;

 return !!(VAR_3 & VAR_1);
}
