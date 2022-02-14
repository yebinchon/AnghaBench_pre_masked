
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct vcap_data {int tg; int * mask; int * entry; } ;
struct ocelot {int dummy; } ;
struct TYPE_2__ {size_t entry_words; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ocelot*,int ,int ) ;
 int FUNC_1 (struct ocelot*,int ,int ,size_t) ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void FUNC_2(struct ocelot *VAR_4, struct vcap_data *VAR_5)
{
 u32 VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_1(VAR_4, VAR_5->entry[VAR_6], VAR_0, VAR_6);
  FUNC_1(VAR_4, ~VAR_5->mask[VAR_6], VAR_1, VAR_6);
 }
 FUNC_0(VAR_4, VAR_5->tg, VAR_2);
}
