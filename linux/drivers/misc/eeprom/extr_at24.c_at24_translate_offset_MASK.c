
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct at24_data {int flags; struct at24_client* client; } ;
struct at24_client {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static struct at24_client *FUNC_0(struct at24_data *VAR_1,
       unsigned int *VAR_2)
{
 unsigned int VAR_3;

 if (VAR_1->flags & VAR_0) {
  VAR_3 = *VAR_2 >> 16;
  *VAR_2 &= 0xffff;
 } else {
  VAR_3 = *VAR_2 >> 8;
  *VAR_2 &= 0xff;
 }

 return &VAR_1->client[VAR_3];
}
