
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rtl8xxxu_priv {int tx_paths; TYPE_1__* fops; } ;
struct TYPE_2__ {int adda_2t_path_on_b; int adda_2t_path_on_a; int adda_1t_init; int adda_1t_path_on; } ;


 int VAR_0 ;
 int FUNC_0 (struct rtl8xxxu_priv*,int const,int ) ;

void FUNC_1(struct rtl8xxxu_priv *VAR_1, const u32 *VAR_2,
      bool VAR_3)
{
 u32 VAR_4;
 int VAR_5;

 if (VAR_1->tx_paths == 1) {
  VAR_4 = VAR_1->fops->adda_1t_path_on;
  FUNC_0(VAR_1, VAR_2[0], VAR_1->fops->adda_1t_init);
 } else {
  VAR_4 = VAR_3 ? VAR_1->fops->adda_2t_path_on_a :
   VAR_1->fops->adda_2t_path_on_b;

  FUNC_0(VAR_1, VAR_2[0], VAR_4);
 }

 for (VAR_5 = 1 ; VAR_5 < VAR_0 ; VAR_5++)
  FUNC_0(VAR_1, VAR_2[VAR_5], VAR_4);
}
