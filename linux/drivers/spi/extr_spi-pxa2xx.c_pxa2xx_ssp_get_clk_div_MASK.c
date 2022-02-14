
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct driver_data {int ssp_type; TYPE_2__* controller; } ;
struct chip_data {int dds_rate; } ;
struct TYPE_4__ {TYPE_1__* cur_msg; } ;
struct TYPE_3__ {int spi; } ;



 unsigned int FUNC_0 (int,int *) ;
 struct chip_data* FUNC_1 (int ) ;
 unsigned int FUNC_2 (struct driver_data*,int) ;

__attribute__((used)) static unsigned int FUNC_3(struct driver_data *VAR_0,
        int VAR_1)
{
 struct chip_data *VAR_2 =
  FUNC_1(VAR_0->controller->cur_msg->spi);
 unsigned int VAR_3;

 switch (VAR_0->ssp_type) {
 case 128:
  VAR_3 = FUNC_0(VAR_1, &VAR_2->dds_rate);
  break;
 default:
  VAR_3 = FUNC_2(VAR_0, VAR_1);
  break;
 }
 return VAR_3 << 8;
}
