
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct da903x_chip {unsigned int events_mask; int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int*) ;

__attribute__((used)) static int FUNC_1(struct da903x_chip *VAR_1, unsigned int VAR_2)
{
 uint8_t VAR_3[4];

 VAR_1->events_mask &= ~VAR_2;

 VAR_3[0] = (VAR_1->events_mask & 0xff);
 VAR_3[1] = (VAR_1->events_mask >> 8) & 0xff;
 VAR_3[2] = (VAR_1->events_mask >> 16) & 0xff;
 VAR_3[3] = (VAR_1->events_mask >> 24) & 0xff;

 return FUNC_0(VAR_1->client, VAR_0, 4, VAR_3);
}
