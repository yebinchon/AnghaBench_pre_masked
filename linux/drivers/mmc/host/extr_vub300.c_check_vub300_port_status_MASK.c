
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vub300_mmc_host {int system_port_status; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vub300_mmc_host*) ;
 int FUNC_1 (int ,int ,int ,int,int,int,int *,int,int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct vub300_mmc_host *VAR_5)
{




 int VAR_6;
 VAR_6 =
  FUNC_1(VAR_5->udev, FUNC_2(VAR_5->udev, 0),
    VAR_0,
    VAR_2 | VAR_4 | VAR_3,
    0x0000, 0x0000, &VAR_5->system_port_status,
    sizeof(VAR_5->system_port_status), VAR_1);
 if (sizeof(VAR_5->system_port_status) == VAR_6)
  FUNC_0(VAR_5);
}
