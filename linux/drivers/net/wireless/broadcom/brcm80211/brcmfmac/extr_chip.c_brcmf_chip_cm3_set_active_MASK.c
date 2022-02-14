
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_core {int dummy; } ;
struct brcmf_chip_priv {int pub; int ctx; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* activate ) (int ,int *,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct brcmf_core* FUNC_0 (int *,int ) ;
 int FUNC_1 (struct brcmf_core*) ;
 int FUNC_2 (struct brcmf_core*,int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *,int ) ;

__attribute__((used)) static bool FUNC_5(struct brcmf_chip_priv *VAR_2)
{
 struct brcmf_core *VAR_3;

 VAR_3 = FUNC_0(&VAR_2->pub, VAR_1);
 if (!FUNC_1(VAR_3)) {
  FUNC_3("SOCRAM core is down after reset?\n");
  return 0;
 }

 VAR_2->ops->activate(VAR_2->ctx, &VAR_2->pub, 0);

 VAR_3 = FUNC_0(&VAR_2->pub, VAR_0);
 FUNC_2(VAR_3, 0, 0, 0);

 return 1;
}
