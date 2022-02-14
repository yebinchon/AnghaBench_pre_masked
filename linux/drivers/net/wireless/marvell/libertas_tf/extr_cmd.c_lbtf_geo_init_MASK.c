
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct lbtf_private {scalar_t__ regioncode; TYPE_1__* channels; } ;
struct channel_range {scalar_t__ regdomain; scalar_t__ start; scalar_t__ end; } ;
struct TYPE_2__ {scalar_t__ flags; } ;


 int FUNC_0 (struct channel_range*) ;
 size_t FUNC_1 (scalar_t__) ;
 struct channel_range* VAR_0 ;

__attribute__((used)) static void FUNC_2(struct lbtf_private *VAR_1)
{
 const struct channel_range *VAR_2 = VAR_0;
 u8 VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++)
  if (VAR_0[VAR_4].regdomain == VAR_1->regioncode) {
   VAR_2 = &VAR_0[VAR_4];
   break;
  }

 for (VAR_3 = VAR_2->start; VAR_3 < VAR_2->end; VAR_3++)
  VAR_1->channels[FUNC_1(VAR_3)].flags = 0;
}
