
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ response_expected; } ;
struct TYPE_8__ {TYPE_3__ flags; } ;
struct TYPE_5__ {int features; } ;
struct TYPE_6__ {TYPE_1__ init_chipset; } ;
struct controlvm_message {TYPE_4__ hdr; TYPE_2__ cmd; } ;
typedef enum visor_chipset_feature { ____Placeholder_visor_chipset_feature } visor_chipset_feature ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int,int) ;

__attribute__((used)) static int FUNC_1(struct controlvm_message *VAR_5)
{
 static int VAR_6;
 enum visor_chipset_feature VAR_7 = 0;
 int VAR_8 = VAR_1;
 int VAR_9 = 0;

 if (VAR_6) {
  VAR_8 = -VAR_0;
  VAR_9 = -VAR_2;
  goto out_respond;
 }
 VAR_6 = 1;





 VAR_7 = VAR_5->cmd.init_chipset.features &
     VAR_3;
 VAR_7 |= VAR_4;

out_respond:
 if (VAR_5->hdr.flags.response_expected)
  VAR_9 = FUNC_0(&VAR_5->hdr, VAR_8, VAR_7);

 return VAR_9;
}
