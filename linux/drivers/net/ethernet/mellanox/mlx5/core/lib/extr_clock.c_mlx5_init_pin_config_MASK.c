
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_pins; int pps; TYPE_2__* pin_config; int verify; int enable; } ;
struct mlx5_clock {TYPE_1__ ptp_info; } ;
struct TYPE_4__ {int index; int chan; int func; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 (int,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int,char*,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5_clock *VAR_5)
{
 int VAR_6;

 VAR_5->ptp_info.pin_config =
   FUNC_0(VAR_5->ptp_info.n_pins,
    sizeof(*VAR_5->ptp_info.pin_config),
    VAR_1);
 if (!VAR_5->ptp_info.pin_config)
  return -VAR_0;
 VAR_5->ptp_info.enable = VAR_3;
 VAR_5->ptp_info.verify = VAR_4;
 VAR_5->ptp_info.pps = 1;

 for (VAR_6 = 0; VAR_6 < VAR_5->ptp_info.n_pins; VAR_6++) {
  FUNC_1(VAR_5->ptp_info.pin_config[VAR_6].name,
    sizeof(VAR_5->ptp_info.pin_config[VAR_6].name),
    "mlx5_pps%d", VAR_6);
  VAR_5->ptp_info.pin_config[VAR_6].index = VAR_6;
  VAR_5->ptp_info.pin_config[VAR_6].func = VAR_2;
  VAR_5->ptp_info.pin_config[VAR_6].chan = VAR_6;
 }

 return 0;
}
