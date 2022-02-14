
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct s2255_dev {int timer; TYPE_2__* fw_data; int udev; } ;
struct TYPE_4__ {int pfw_data; int fw_urb; int fw_loaded; TYPE_1__* fw; int fw_state; int fw_size; } ;
struct TYPE_3__ {int data; int size; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,scalar_t__) ;
 int VAR_4 ;
 int FUNC_3 (struct s2255_dev*) ;
 int FUNC_4 (int ,int ,int ,int ,int ,int ,TYPE_2__*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct s2255_dev *VAR_5)
{
 FUNC_3(VAR_5);
 VAR_5->fw_data->fw_size = VAR_5->fw_data->fw->size;
 FUNC_0(&VAR_5->fw_data->fw_state, VAR_2);
 FUNC_1(VAR_5->fw_data->pfw_data,
        VAR_5->fw_data->fw->data, VAR_0);
 VAR_5->fw_data->fw_loaded = VAR_0;
 FUNC_4(VAR_5->fw_data->fw_urb, VAR_5->udev,
     FUNC_5(VAR_5->udev, 2),
     VAR_5->fw_data->pfw_data,
     VAR_0, VAR_4,
     VAR_5->fw_data);
 FUNC_2(&VAR_5->timer, VAR_3 + VAR_1);
}
