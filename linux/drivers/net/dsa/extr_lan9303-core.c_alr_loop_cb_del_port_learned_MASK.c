
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct lan9303 {int dummy; } ;
struct del_port_learned_ctx {int port; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct lan9303*,int,int) ;

__attribute__((used)) static void FUNC_2(struct lan9303 *VAR_2, u32 VAR_3,
      u32 VAR_4, int VAR_5, void *VAR_6)
{
 struct del_port_learned_ctx *VAR_7 = VAR_6;
 int VAR_8 = VAR_7->port;

 if (((FUNC_0(VAR_8) & VAR_5) == 0) || (VAR_4 & VAR_0))
  return;


 VAR_4 &= ~VAR_1;
 FUNC_1(VAR_2, VAR_3, VAR_4);
}
