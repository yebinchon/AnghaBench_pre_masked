
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvpp2_tx_queue {int id; } ;
struct mvpp2_port {int priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 () ;

__attribute__((used)) static inline int FUNC_4(struct mvpp2_port *VAR_2,
        struct mvpp2_tx_queue *VAR_3)
{
 u32 VAR_4;


 VAR_4 = FUNC_2(VAR_2->priv,
     FUNC_1(VAR_2->priv, FUNC_3()),
     FUNC_0(VAR_3->id));

 return (VAR_4 & VAR_0) >>
  VAR_1;
}
