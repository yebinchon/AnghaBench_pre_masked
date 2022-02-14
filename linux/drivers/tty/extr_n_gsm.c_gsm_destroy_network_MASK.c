
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gsm_mux_net {int dummy; } ;
struct gsm_dlci {int net; } ;


 int FUNC_0 (struct gsm_mux_net*) ;
 struct gsm_mux_net* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct gsm_dlci *VAR_0)
{
 struct gsm_mux_net *VAR_1;

 FUNC_2("destroy network interface");
 if (!VAR_0->net)
  return;
 VAR_1 = FUNC_1(VAR_0->net);
 FUNC_0(VAR_1);
}
