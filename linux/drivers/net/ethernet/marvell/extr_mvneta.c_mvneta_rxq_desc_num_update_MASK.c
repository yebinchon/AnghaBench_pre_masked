
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mvneta_rx_queue {int id; } ;
struct mvneta_port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mvneta_port*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mvneta_port *VAR_1,
           struct mvneta_rx_queue *VAR_2,
           int VAR_3, int VAR_4)
{
 u32 VAR_5;

 if ((VAR_3 <= 0xff) && (VAR_4 <= 0xff)) {
  VAR_5 = VAR_3 |
    (VAR_4 << VAR_0);
  FUNC_1(VAR_1, FUNC_0(VAR_2->id), VAR_5);
  return;
 }


 while ((VAR_3 > 0) || (VAR_4 > 0)) {
  if (VAR_3 <= 0xff) {
   VAR_5 = VAR_3;
   VAR_3 = 0;
  } else {
   VAR_5 = 0xff;
   VAR_3 -= 0xff;
  }
  if (VAR_4 <= 0xff) {
   VAR_5 |= VAR_4 << VAR_0;
   VAR_4 = 0;
  } else {
   VAR_5 |= 0xff << VAR_0;
   VAR_4 -= 0xff;
  }
  FUNC_1(VAR_1, FUNC_0(VAR_2->id), VAR_5);
 }
}
