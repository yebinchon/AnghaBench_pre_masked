
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ ip_summed; scalar_t__ protocol; } ;
struct gelic_descr {void* dmac_cmd_status; } ;
struct TYPE_2__ {scalar_t__ protocol; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct gelic_descr *VAR_8,
           struct sk_buff *VAR_9)
{
 if (VAR_9->ip_summed != VAR_0)
  VAR_8->dmac_cmd_status =
   FUNC_0(VAR_2 |
        VAR_5);
 else {


  if (VAR_9->protocol == FUNC_1(VAR_1)) {
   if (FUNC_2(VAR_9)->protocol == VAR_6)
    VAR_8->dmac_cmd_status =
    FUNC_0(VAR_3 |
         VAR_5);

   else if (FUNC_2(VAR_9)->protocol == VAR_7)
    VAR_8->dmac_cmd_status =
    FUNC_0(VAR_4 |
         VAR_5);
   else



    VAR_8->dmac_cmd_status =
    FUNC_0(VAR_2 |
         VAR_5);
  }
 }
}
