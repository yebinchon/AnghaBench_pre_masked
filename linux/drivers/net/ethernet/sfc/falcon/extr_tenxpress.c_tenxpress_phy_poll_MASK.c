
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ef4_link_state {int speed; int fd; int up; int fc; } ;
struct ef4_nic {struct ef4_link_state link_state; } ;


 int FUNC_0 (struct ef4_link_state*,struct ef4_link_state*) ;
 int FUNC_1 (struct ef4_nic*) ;
 int FUNC_2 (struct ef4_nic*,int ) ;
 int FUNC_3 (struct ef4_nic*) ;

__attribute__((used)) static bool FUNC_4(struct ef4_nic *VAR_0)
{
 struct ef4_link_state VAR_1 = VAR_0->link_state;

 VAR_0->link_state.up = FUNC_3(VAR_0);
 VAR_0->link_state.speed = 10000;
 VAR_0->link_state.fd = 1;
 VAR_0->link_state.fc = FUNC_1(VAR_0);

 FUNC_2(VAR_0, VAR_0->link_state.up);

 return !FUNC_0(&VAR_0->link_state, &VAR_1);
}
