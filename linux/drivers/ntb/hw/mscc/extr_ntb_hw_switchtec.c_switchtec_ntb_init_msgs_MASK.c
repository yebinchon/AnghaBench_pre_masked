
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct switchtec_ntb {int peer_partition; TYPE_1__* mmio_self_dbmsg; } ;
struct TYPE_2__ {int * imsg; int msg_map; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (int,int *) ;

__attribute__((used)) static void FUNC_3(struct switchtec_ntb *VAR_2)
{
 int VAR_3;
 u32 VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->mmio_self_dbmsg->imsg); VAR_3++) {
  int VAR_5 = VAR_3 | VAR_2->peer_partition << 2;

  VAR_4 |= VAR_5 << VAR_3 * 8;
 }

 FUNC_1(VAR_4, &VAR_2->mmio_self_dbmsg->msg_map);

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->mmio_self_dbmsg->imsg); VAR_3++)
  FUNC_2(VAR_1 | VAR_0,
     &VAR_2->mmio_self_dbmsg->imsg[VAR_3]);
}
