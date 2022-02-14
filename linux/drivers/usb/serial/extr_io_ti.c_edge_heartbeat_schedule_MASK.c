
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct edgeport_serial {int heartbeat_work; int use_heartbeat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;

__attribute__((used)) static void FUNC_1(struct edgeport_serial *VAR_2)
{
 if (!VAR_2->use_heartbeat)
  return;

 FUNC_0(&VAR_2->heartbeat_work,
   VAR_0 * VAR_1);
}
