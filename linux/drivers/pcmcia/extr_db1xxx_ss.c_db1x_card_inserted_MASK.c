
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct db1x_pcmcia_sock {int board_type; } ;




 int FUNC_0 (struct db1x_pcmcia_sock*) ;
 int FUNC_1 (struct db1x_pcmcia_sock*) ;
 int FUNC_2 (struct db1x_pcmcia_sock*) ;

__attribute__((used)) static int FUNC_3(struct db1x_pcmcia_sock *VAR_0)
{
 switch (VAR_0->board_type) {
 case 129:
  return FUNC_1(VAR_0);
 case 128:
  return FUNC_2(VAR_0);
 default:
  return FUNC_0(VAR_0);
 }
}
