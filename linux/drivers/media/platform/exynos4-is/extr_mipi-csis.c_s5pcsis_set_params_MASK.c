
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct csis_state {int num_lanes; scalar_t__ wclk_ext; TYPE_1__* csis_fmt; int hs_settle; } ;
struct TYPE_2__ {int data_alignment; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct csis_state*) ;
 int FUNC_1 (struct csis_state*,int ) ;
 int FUNC_2 (struct csis_state*,int ) ;
 int FUNC_3 (struct csis_state*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct csis_state *VAR_6)
{
 u32 VAR_7;

 VAR_7 = FUNC_1(VAR_6, VAR_1);
 VAR_7 = (VAR_7 & ~VAR_0) | (VAR_6->num_lanes - 1);
 FUNC_3(VAR_6, VAR_1, VAR_7);

 FUNC_0(VAR_6);
 FUNC_2(VAR_6, VAR_6->hs_settle);

 VAR_7 = FUNC_1(VAR_6, VAR_2);
 if (VAR_6->csis_fmt->data_alignment == 32)
  VAR_7 |= VAR_3;
 else
  VAR_7 &= ~VAR_3;

 VAR_7 &= ~VAR_5;
 if (VAR_6->wclk_ext)
  VAR_7 |= VAR_5;
 FUNC_3(VAR_6, VAR_2, VAR_7);


 VAR_7 = FUNC_1(VAR_6, VAR_2);
 FUNC_3(VAR_6, VAR_2, VAR_7 | VAR_4);
}
