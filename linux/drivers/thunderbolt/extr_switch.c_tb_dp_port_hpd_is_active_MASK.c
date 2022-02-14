
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_port {scalar_t__ cap_adap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tb_port*,int*,int ,scalar_t__,int) ;

int FUNC_1(struct tb_port *VAR_2)
{
 u32 VAR_3;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_2, &VAR_3, VAR_0, VAR_2->cap_adap + 2, 1);
 if (VAR_4)
  return VAR_4;

 return !!(VAR_3 & VAR_1);
}
