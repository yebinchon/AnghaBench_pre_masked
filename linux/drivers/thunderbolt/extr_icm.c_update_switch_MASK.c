
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u8 ;
typedef int u64 ;
struct TYPE_3__ {int route_lo; int route_hi; } ;
struct tb_switch {int boot; int is_unplugged; int rpm_complete; void* depth; void* link; void* connection_key; void* connection_id; TYPE_1__ config; } ;
struct TYPE_4__ {int * remote; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,struct tb_switch*) ;
 int FUNC_3 (struct tb_switch*) ;
 int * FUNC_4 (struct tb_switch*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct tb_switch *VAR_0, struct tb_switch *VAR_1,
     u64 VAR_2, u8 VAR_3, u8 VAR_4,
     u8 VAR_5, u8 VAR_6, bool VAR_7)
{

 FUNC_2(FUNC_3(VAR_1), VAR_0)->remote = ((void*)0);

 FUNC_2(VAR_2, VAR_0)->remote = FUNC_4(VAR_1);


 VAR_1->config.route_hi = FUNC_5(VAR_2);
 VAR_1->config.route_lo = FUNC_1(VAR_2);
 VAR_1->connection_id = VAR_3;
 VAR_1->connection_key = VAR_4;
 VAR_1->link = VAR_5;
 VAR_1->depth = VAR_6;
 VAR_1->boot = VAR_7;


 VAR_1->is_unplugged = 0;


 FUNC_0(&VAR_1->rpm_complete);
}
