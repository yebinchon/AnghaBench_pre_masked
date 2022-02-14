
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvneta_rx_queue {int dummy; } ;
struct mvneta_port {int dummy; } ;


 int FUNC_0 (struct mvneta_port*,struct mvneta_rx_queue*) ;
 int FUNC_1 (struct mvneta_port*,struct mvneta_rx_queue*) ;

__attribute__((used)) static int FUNC_2(struct mvneta_port *VAR_0,
      struct mvneta_rx_queue *VAR_1)

{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 FUNC_0(VAR_0, VAR_1);

 return 0;
}
