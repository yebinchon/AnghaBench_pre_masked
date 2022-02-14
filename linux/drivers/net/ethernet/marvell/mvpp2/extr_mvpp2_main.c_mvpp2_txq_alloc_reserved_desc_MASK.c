
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_tx_queue {int id; } ;
struct mvpp2_port {struct mvpp2* priv; } ;
struct mvpp2 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct mvpp2*,int ) ;
 int FUNC_1 (struct mvpp2*,unsigned int,int ) ;
 int FUNC_2 (struct mvpp2*,unsigned int,int ,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct mvpp2_port *VAR_4,
      struct mvpp2_tx_queue *VAR_5, int VAR_6)
{
 unsigned int VAR_7 = FUNC_0(VAR_4->priv, FUNC_3());
 struct mvpp2 *VAR_8 = VAR_4->priv;
 u32 VAR_9;

 VAR_9 = (VAR_5->id << VAR_0) | VAR_6;
 FUNC_2(VAR_8, VAR_7, VAR_1, VAR_9);

 VAR_9 = FUNC_1(VAR_8, VAR_7, VAR_3);

 return VAR_9 & VAR_2;
}
