
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sx150x_pinctrl {TYPE_3__* data; int client; } ;
struct TYPE_4__ {int reg_reset; } ;
struct TYPE_5__ {TYPE_1__ x789; } ;
struct TYPE_6__ {TYPE_2__ pri; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct sx150x_pinctrl *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->client,
     VAR_2->data->pri.x789.reg_reset,
     VAR_0);
 if (VAR_3 < 0)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_2->client,
     VAR_2->data->pri.x789.reg_reset,
     VAR_1);
 return VAR_3;
}
