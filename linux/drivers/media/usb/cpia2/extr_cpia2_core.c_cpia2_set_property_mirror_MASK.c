
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned char user_effects; } ;
struct TYPE_4__ {TYPE_1__ vp_params; } ;
struct camera_data {TYPE_2__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct camera_data*,int ,int ,unsigned char) ;

void FUNC_1(struct camera_data *VAR_5, int VAR_6)
{
 unsigned char VAR_7;

 FUNC_0(VAR_5, VAR_0, VAR_3, 0);
 VAR_7 = VAR_5->params.vp_params.user_effects;

 if (VAR_6)
 {
  VAR_7 |= VAR_2;
 }
 else
 {
  VAR_7 &= ~VAR_2;
 }
 VAR_5->params.vp_params.user_effects = VAR_7;
 FUNC_0(VAR_5, VAR_1, VAR_4,
    VAR_7);
}
