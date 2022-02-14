
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct cfp_rule {int next; } ;
struct TYPE_2__ {int unique; } ;
struct bcm_sf2_priv {TYPE_1__ cfp; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct cfp_rule* FUNC_0 (struct bcm_sf2_priv*,int,scalar_t__) ;
 int FUNC_1 (struct bcm_sf2_priv*,int,scalar_t__) ;
 int FUNC_2 (struct cfp_rule*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct bcm_sf2_priv *VAR_2, int VAR_3, u32 VAR_4)
{
 struct cfp_rule *VAR_5;
 int VAR_6;

 if (VAR_4 >= VAR_0)
  return -VAR_1;





 if (!FUNC_4(VAR_4, VAR_2->cfp.unique) || VAR_4 == 0)
  return -VAR_1;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (!VAR_5)
  return -VAR_1;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);

 FUNC_3(&VAR_5->next);
 FUNC_2(VAR_5);

 return VAR_6;
}
