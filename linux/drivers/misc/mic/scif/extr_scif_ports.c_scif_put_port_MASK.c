
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct scif_port {int ref_cnt; } ;
struct TYPE_2__ {int port_lock; } ;


 struct scif_port* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct scif_port*) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(u16 VAR_2)
{
 struct scif_port *VAR_3;

 if (!VAR_2)
  return;
 FUNC_3(&VAR_0.port_lock);
 VAR_3 = FUNC_0(&VAR_1, VAR_2);
 if (VAR_3) {
  VAR_3->ref_cnt--;
  if (!VAR_3->ref_cnt) {
   FUNC_1(&VAR_1, VAR_2);
   FUNC_2(VAR_3);
  }
 }
 FUNC_4(&VAR_0.port_lock);
}
