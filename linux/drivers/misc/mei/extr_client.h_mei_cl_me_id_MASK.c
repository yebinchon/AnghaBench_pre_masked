
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct mei_cl {TYPE_1__* me_cl; } ;
struct TYPE_2__ {int client_id; } ;



__attribute__((used)) static inline u8 FUNC_0(const struct mei_cl *VAR_0)
{
 return VAR_0->me_cl ? VAR_0->me_cl->client_id : 0;
}
