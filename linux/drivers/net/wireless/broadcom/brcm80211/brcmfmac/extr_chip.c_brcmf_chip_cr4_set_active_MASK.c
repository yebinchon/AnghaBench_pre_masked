
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_core {int dummy; } ;
struct brcmf_chip_priv {int pub; int ctx; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* activate ) (int ,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct brcmf_core* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct brcmf_core*,int ,int ,int ) ;
 int FUNC_2 (int ,int *,int ) ;

__attribute__((used)) static bool FUNC_3(struct brcmf_chip_priv *VAR_2, u32 VAR_3)
{
 struct brcmf_core *VAR_4;

 VAR_2->ops->activate(VAR_2->ctx, &VAR_2->pub, VAR_3);


 VAR_4 = FUNC_0(&VAR_2->pub, VAR_1);
 FUNC_1(VAR_4, VAR_0, 0, 0);

 return 1;
}
