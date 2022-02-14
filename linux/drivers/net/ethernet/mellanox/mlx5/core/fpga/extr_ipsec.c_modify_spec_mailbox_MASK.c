
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx5_core_dev {int dummy; } ;
struct mailbox_mod {int saved_action; int saved_outer_esp_spi_value; scalar_t__ saved_esp_id; } ;
struct TYPE_4__ {int action; scalar_t__ esp_id; } ;
struct fs_fte {TYPE_1__ action; int val; } ;
struct TYPE_5__ {int outer_esp_spi; } ;
struct TYPE_6__ {TYPE_2__ ft_field_support; } ;


 char* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_4(struct mlx5_core_dev *VAR_7,
    struct fs_fte *VAR_8,
    struct mailbox_mod *VAR_9)
{
 char *VAR_10 = FUNC_0(VAR_3,
        VAR_8->val,
        VAR_5);

 VAR_9->saved_esp_id = VAR_8->action.esp_id;
 VAR_9->saved_action = VAR_8->action.action &
   (VAR_1 |
    VAR_0);
 VAR_9->saved_outer_esp_spi_value =
   FUNC_2(VAR_4, VAR_10,
     VAR_6);

 VAR_8->action.esp_id = 0;
 VAR_8->action.action &= ~(VAR_1 |
    VAR_0);
 if (!FUNC_1(VAR_7,
    VAR_2.ft_field_support.outer_esp_spi))
  FUNC_3(VAR_4, VAR_10, VAR_6, 0);
}
