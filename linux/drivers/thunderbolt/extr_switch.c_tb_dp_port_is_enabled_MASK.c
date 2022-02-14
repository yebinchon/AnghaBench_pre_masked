
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tb_port {int cap_adap; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct tb_port*,int*,int ,int ,int ) ;

bool FUNC_2(struct tb_port *VAR_3)
{
 u32 VAR_4[2];

 if (FUNC_1(VAR_3, VAR_4, VAR_0, VAR_3->cap_adap,
    FUNC_0(VAR_4)))
  return 0;

 return !!(VAR_4[0] & (VAR_2 | VAR_1));
}
