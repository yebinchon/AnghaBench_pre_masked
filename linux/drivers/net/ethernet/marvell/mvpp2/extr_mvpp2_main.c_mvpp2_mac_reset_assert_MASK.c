
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mvpp2_port {scalar_t__ gop_id; scalar_t__ base; TYPE_1__* priv; } ;
struct TYPE_2__ {scalar_t__ hw_version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct mvpp2_port *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_0(VAR_5->base + VAR_3) |
       VAR_4;
 FUNC_1(VAR_6, VAR_5->base + VAR_3);

 if (VAR_5->priv->hw_version == VAR_0 && VAR_5->gop_id == 0) {
  VAR_6 = FUNC_0(VAR_5->base + VAR_2) &
        ~VAR_1;
  FUNC_1(VAR_6, VAR_5->base + VAR_2);
 }
}
