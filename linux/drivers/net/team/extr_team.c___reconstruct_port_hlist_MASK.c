
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct team_port {int index; int hlist; } ;
struct team {int en_port_count; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 struct team_port* FUNC_2 (struct team*,int) ;
 int FUNC_3 (struct team*,int ) ;

__attribute__((used)) static void FUNC_4(struct team *VAR_0, int VAR_1)
{
 int VAR_2;
 struct team_port *VAR_3;

 for (VAR_2 = VAR_1 + 1; VAR_2 < VAR_0->en_port_count; VAR_2++) {
  VAR_3 = FUNC_2(VAR_0, VAR_2);
  FUNC_1(&VAR_3->hlist);
  VAR_3->index--;
  FUNC_0(&VAR_3->hlist,
       FUNC_3(VAR_0, VAR_3->index));
 }
}
