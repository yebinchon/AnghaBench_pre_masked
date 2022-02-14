
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct team_port {void* queue_id; } ;
struct team {int dummy; } ;


 int FUNC_0 (struct team*) ;
 int FUNC_1 (struct team*,struct team_port*) ;
 int FUNC_2 (struct team*,struct team_port*) ;
 scalar_t__ FUNC_3 (struct team_port*) ;

__attribute__((used)) static void FUNC_4(struct team *VAR_0,
           struct team_port *VAR_1,
           u16 VAR_2)
{
 if (FUNC_3(VAR_1)) {
  FUNC_2(VAR_0, VAR_1);
  VAR_1->queue_id = VAR_2;
  FUNC_1(VAR_0, VAR_1);
  FUNC_0(VAR_0);
 } else {
  VAR_1->queue_id = VAR_2;
 }
}
