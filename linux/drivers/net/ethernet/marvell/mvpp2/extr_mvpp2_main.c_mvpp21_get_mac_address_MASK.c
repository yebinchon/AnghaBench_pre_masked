
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mvpp2_port {TYPE_1__* priv; scalar_t__ base; } ;
struct TYPE_2__ {scalar_t__ lms_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct mvpp2_port *VAR_4, unsigned char *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_4->base + VAR_0);
 VAR_7 = FUNC_0(VAR_4->priv->lms_base + VAR_3);
 VAR_8 = FUNC_0(VAR_4->priv->lms_base + VAR_2);
 VAR_5[0] = (VAR_8 >> 24) & 0xFF;
 VAR_5[1] = (VAR_8 >> 16) & 0xFF;
 VAR_5[2] = (VAR_8 >> 8) & 0xFF;
 VAR_5[3] = VAR_8 & 0xFF;
 VAR_5[4] = VAR_7 & 0xFF;
 VAR_5[5] = (VAR_6 >> VAR_1) & 0xFF;
}
