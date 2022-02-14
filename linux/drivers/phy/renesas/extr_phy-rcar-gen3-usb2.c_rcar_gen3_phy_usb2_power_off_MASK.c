
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gen3_phy {int powered; struct rcar_gen3_chan* ch; } ;
struct rcar_gen3_chan {int lock; scalar_t__ vbus; } ;
struct phy {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct rcar_gen3_phy* FUNC_2 (struct phy*) ;
 int FUNC_3 (struct rcar_gen3_chan*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct phy *VAR_0)
{
 struct rcar_gen3_phy *VAR_1 = FUNC_2(VAR_0);
 struct rcar_gen3_chan *VAR_2 = VAR_1->ch;
 int VAR_3 = 0;

 FUNC_0(&VAR_2->lock);
 VAR_1->powered = 0;

 if (!FUNC_3(VAR_2))
  goto out;

 if (VAR_2->vbus)
  VAR_3 = FUNC_4(VAR_2->vbus);

out:
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
