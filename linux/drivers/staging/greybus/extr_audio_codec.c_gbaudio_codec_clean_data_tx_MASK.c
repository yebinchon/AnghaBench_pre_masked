
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct gbaudio_data_connection {int * state; TYPE_2__* connection; } ;
struct TYPE_6__ {scalar_t__ hd_cport_id; } ;
struct TYPE_5__ {int module_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__,int ) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct gbaudio_data_connection *VAR_3)
{
 u16 VAR_4, VAR_5;
 int VAR_6;

 if (FUNC_3(&VAR_2->module_list)) {
  VAR_6 = FUNC_1(VAR_3->connection, 0);
  if (VAR_6)
   return;
  VAR_6 = FUNC_0(VAR_3->connection,
           0);
  if (VAR_6)
   return;
 }
 VAR_4 = 0;
 VAR_5 = VAR_3->connection->hd_cport_id;
 VAR_6 = FUNC_2(VAR_3->connection,
        VAR_4, VAR_5,
        VAR_0);
 VAR_3->state[0] = VAR_1;
}
