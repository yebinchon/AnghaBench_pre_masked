
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_port {int cap_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tb_port*,int*,int ,int ,int) ;

int FUNC_1(struct tb_port *VAR_3, bool VAR_4)
{
 u32 VAR_5 = VAR_4 ? VAR_2 : 0x0;
 if (!VAR_3->cap_adap)
  return -VAR_0;
 return FUNC_0(VAR_3, &VAR_5, VAR_1, VAR_3->cap_adap, 1);
}
