
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcmf_pciedev_info {TYPE_1__* ci; } ;
struct TYPE_2__ {scalar_t__ chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct brcmf_pciedev_info*,int ) ;
 int FUNC_1 (struct brcmf_pciedev_info*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct brcmf_pciedev_info *VAR_4)
{
 if (VAR_4->ci->chip == VAR_3) {
  FUNC_0(VAR_4, VAR_0);
  FUNC_1(VAR_4, VAR_1,
           5);
  FUNC_1(VAR_4, VAR_2,
           0);
  FUNC_1(VAR_4, VAR_1,
           7);
  FUNC_1(VAR_4, VAR_2,
           0);
 }
 return 0;
}
