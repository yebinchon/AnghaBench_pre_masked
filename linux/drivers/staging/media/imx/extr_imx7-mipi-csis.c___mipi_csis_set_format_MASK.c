
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_mbus_framefmt {int width; int height; } ;
struct csi_state {TYPE_1__* csis_fmt; struct v4l2_mbus_framefmt format_mbus; } ;
struct TYPE_2__ {int fmt_reg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct csi_state*,int ) ;
 int FUNC_1 (struct csi_state*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct csi_state *VAR_3)
{
 struct v4l2_mbus_framefmt *VAR_4 = &VAR_3->format_mbus;
 u32 VAR_5;


 VAR_5 = FUNC_0(VAR_3, VAR_1);
 VAR_5 = (VAR_5 & ~VAR_0) | VAR_3->csis_fmt->fmt_reg;
 FUNC_1(VAR_3, VAR_1, VAR_5);


 VAR_5 = VAR_4->width | (VAR_4->height << 16);
 FUNC_1(VAR_3, VAR_2, VAR_5);
}
