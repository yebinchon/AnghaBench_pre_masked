
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct brcmf_pciedev_info {TYPE_1__* ci; } ;
struct brcmf_core {int dummy; } ;
struct TYPE_3__ {scalar_t__ chip; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct brcmf_core* FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct brcmf_core*,int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_3(struct brcmf_pciedev_info *VAR_3,
       u32 VAR_4)
{
 struct brcmf_core *VAR_5;

 if (VAR_3->ci->chip == VAR_1) {
  VAR_5 = FUNC_0(VAR_3->ci, VAR_0);
  FUNC_1(VAR_5, 0, 0, 0);
 }

 if (!FUNC_2(VAR_3->ci, VAR_4))
  return -VAR_2;
 return 0;
}
