
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct g2d_frame {int stride; int o_height; int o_width; int bottom; int right; TYPE_1__* fmt; } ;
struct g2d_dev {int dummy; } ;
struct TYPE_2__ {int hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int ) ;

void FUNC_1(struct g2d_dev *VAR_5, struct g2d_frame *VAR_6)
{
 u32 VAR_7;

 FUNC_0(0, VAR_3);
 FUNC_0(VAR_6->stride & 0xFFFF, VAR_4);

 VAR_7 = VAR_6->o_height & 0xFFF;
 VAR_7 <<= 16;
 VAR_7 |= VAR_6->o_width & 0xFFF;
 FUNC_0(VAR_7, VAR_1);

 VAR_7 = VAR_6->bottom & 0xFFF;
 VAR_7 <<= 16;
 VAR_7 |= VAR_6->right & 0xFFF;
 FUNC_0(VAR_7, VAR_2);

 FUNC_0(VAR_6->fmt->hw, VAR_0);
}
