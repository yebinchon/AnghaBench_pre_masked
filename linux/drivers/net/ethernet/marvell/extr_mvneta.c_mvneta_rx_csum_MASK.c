
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int ip_summed; scalar_t__ csum; } ;
struct mvneta_port {TYPE_1__* dev; } ;
struct TYPE_2__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_0(struct mvneta_port *VAR_5, u32 VAR_6,
      struct sk_buff *VAR_7)
{
 if ((VAR_5->dev->features & VAR_4) &&
     (VAR_6 & VAR_2) &&
     (VAR_6 & VAR_3)) {
  VAR_7->csum = 0;
  VAR_7->ip_summed = VAR_1;
  return;
 }

 VAR_7->ip_summed = VAR_0;
}
