
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct imgu_device {int dummy; } ;
struct imgu_css {TYPE_2__* pipes; int dev; } ;
struct TYPE_3__ {int * binary_params_p; int obgrid; int gdc; int acc; int parameter_set_info; } ;
struct TYPE_4__ {TYPE_1__ pool; } ;


 unsigned int VAR_0 ;
 struct imgu_device* FUNC_0 (int ) ;
 int FUNC_1 (struct imgu_device*,int *) ;

__attribute__((used)) static void FUNC_2(struct imgu_css *VAR_1, unsigned int VAR_2)
{
 struct imgu_device *VAR_3 = FUNC_0(VAR_1->dev);
 unsigned int VAR_4;

 FUNC_1(VAR_3,
         &VAR_1->pipes[VAR_2].pool.parameter_set_info);
 FUNC_1(VAR_3, &VAR_1->pipes[VAR_2].pool.acc);
 FUNC_1(VAR_3, &VAR_1->pipes[VAR_2].pool.gdc);
 FUNC_1(VAR_3, &VAR_1->pipes[VAR_2].pool.obgrid);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  FUNC_1(VAR_3,
          &VAR_1->pipes[VAR_2].pool.binary_params_p[VAR_4]);
}
