
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vcap_data {int* action; int type; void** counter; } ;
struct ocelot {int dummy; } ;
struct TYPE_2__ {size_t action_words; size_t counter_words; size_t action_type_width; } ;


 int FUNC_0 (size_t,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (struct ocelot*,int ,size_t) ;
 TYPE_1__ VAR_2 ;

__attribute__((used)) static void FUNC_2(struct ocelot *VAR_3, struct vcap_data *VAR_4)
{
 u32 VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4->action[VAR_5] = FUNC_1(VAR_3, VAR_0, VAR_5);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
  VAR_4->counter[VAR_5] = FUNC_1(VAR_3, VAR_1, VAR_5);


 VAR_6 = VAR_2;
 VAR_4->type = (VAR_6 ? (VAR_4->action[0] & FUNC_0(VAR_6, 0)) : 0);
}
