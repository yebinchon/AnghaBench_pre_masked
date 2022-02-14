
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct adv748x_state {TYPE_1__* client; } ;
struct TYPE_2__ {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adv748x_state*,char*) ;
 int FUNC_1 (struct adv748x_state*,char*,int,int,int) ;
 int FUNC_2 (struct adv748x_state*,int ) ;

__attribute__((used)) static int FUNC_3(struct adv748x_state *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_5 = FUNC_2(VAR_3, VAR_0);
 VAR_4 = FUNC_2(VAR_3, VAR_1);

 if (VAR_5 < 0 || VAR_4 < 0) {
  FUNC_0(VAR_3, "Failed to read chip revision\n");
  return -VAR_2;
 }

 FUNC_1(VAR_3, "chip found @ 0x%02x revision %02x%02x\n",
   VAR_3->client->addr << 1, VAR_5, VAR_4);

 return 0;
}
