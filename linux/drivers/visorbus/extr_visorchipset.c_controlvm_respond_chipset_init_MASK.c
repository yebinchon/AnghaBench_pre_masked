
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct controlvm_message_header {int dummy; } ;
struct TYPE_4__ {int features; } ;
struct TYPE_5__ {TYPE_1__ init_chipset; } ;
struct controlvm_message {TYPE_2__ cmd; } ;
typedef enum visor_chipset_feature { ____Placeholder_visor_chipset_feature } visor_chipset_feature ;
struct TYPE_6__ {int controlvm_channel; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct controlvm_message*,struct controlvm_message_header*,int) ;
 int FUNC_1 (int ,int ,struct controlvm_message*) ;

__attribute__((used)) static int FUNC_2(
    struct controlvm_message_header *VAR_2,
    int VAR_3,
    enum visor_chipset_feature VAR_4)
{
 struct controlvm_message VAR_5;

 FUNC_0(&VAR_5, VAR_2, VAR_3);
 VAR_5.cmd.init_chipset.features = VAR_4;
 return FUNC_1(VAR_1->controlvm_channel,
      VAR_0, &VAR_5);
}
