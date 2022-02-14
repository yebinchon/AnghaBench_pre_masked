
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_tx_queue {int id; } ;
struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mvneta_port*,int ) ;

__attribute__((used)) static int FUNC_2(struct mvneta_port *VAR_2,
     struct mvneta_tx_queue *VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(VAR_2, FUNC_0(VAR_3->id));
 VAR_5 = (VAR_4 & VAR_0) >>
  VAR_1;

 return VAR_5;
}
