
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv748x_state {int * i2c_clients; int client; } ;
struct TYPE_2__ {int default_addr; int name; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct adv748x_state*,unsigned int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_3 (struct adv748x_state*) ;
 int FUNC_4 (struct adv748x_state*,char*,unsigned int) ;
 int FUNC_5 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct adv748x_state *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;

 for (VAR_4 = VAR_0; VAR_4 < VAR_1; ++VAR_4) {
  VAR_3->i2c_clients[VAR_4] = FUNC_5(
    VAR_3->client,
    VAR_2[VAR_4].name,
    VAR_2[VAR_4].default_addr);

  if (FUNC_0(VAR_3->i2c_clients[VAR_4])) {
   FUNC_4(VAR_3, "failed to create i2c client %u\n", VAR_4);
   return FUNC_1(VAR_3->i2c_clients[VAR_4]);
  }

  VAR_5 = FUNC_2(VAR_3, VAR_4);
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_3(VAR_3);
}
