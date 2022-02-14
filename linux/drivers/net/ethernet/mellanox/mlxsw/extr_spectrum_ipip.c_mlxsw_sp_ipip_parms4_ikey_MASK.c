
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ip_tunnel_parm {int i_key; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct ip_tunnel_parm) ;

__attribute__((used)) static u32 FUNC_2(struct ip_tunnel_parm VAR_0)
{
 return FUNC_1(VAR_0) ?
  FUNC_0(VAR_0.i_key) : 0;
}
