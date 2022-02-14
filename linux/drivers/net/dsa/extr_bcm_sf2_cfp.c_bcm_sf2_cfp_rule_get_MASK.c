
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int location; } ;
struct ethtool_rxnfc {int data; TYPE_1__ fs; } ;
struct cfp_rule {int fs; } ;
struct bcm_sf2_priv {int dummy; } ;


 int VAR_0 ;
 struct cfp_rule* FUNC_0 (struct bcm_sf2_priv*,int,int ) ;
 int FUNC_1 (struct bcm_sf2_priv*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *,int) ;

__attribute__((used)) static int FUNC_4(struct bcm_sf2_priv *VAR_1, int VAR_2,
    struct ethtool_rxnfc *VAR_3)
{
 struct cfp_rule *VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3->fs.location);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3(&VAR_3->fs, &VAR_4->fs, sizeof(VAR_4->fs));

 FUNC_2(&VAR_3->fs);


 VAR_3->data = FUNC_1(VAR_1);

 return 0;
}
