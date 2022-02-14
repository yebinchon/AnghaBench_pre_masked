
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_tx_queue {int count; } ;
struct mvpp2_port {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct mvpp2_port *VAR_3,
         struct mvpp2_tx_queue *VAR_4, int VAR_5)
{
 if ((VAR_4->count + VAR_5) > VAR_2) {

  unsigned int VAR_6 =
   FUNC_1(VAR_3->priv, FUNC_3());
  u32 VAR_7 = FUNC_2(VAR_3->priv,
          FUNC_0(VAR_6));

  VAR_4->count = VAR_7 & VAR_1;

  if ((VAR_4->count + VAR_5) > VAR_2)
   return -VAR_0;
 }
 return 0;
}
