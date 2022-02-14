
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adv7180_state {int client; int mutex; } ;


 int FUNC_0 (struct adv7180_state*,unsigned int) ;
 int FUNC_1 (int ,unsigned int,unsigned int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct adv7180_state *VAR_0, unsigned int VAR_1,
 unsigned int VAR_2)
{
 FUNC_2(&VAR_0->mutex);
 FUNC_0(VAR_0, VAR_1 >> 8);
 return FUNC_1(VAR_0->client, VAR_1 & 0xff, VAR_2);
}
