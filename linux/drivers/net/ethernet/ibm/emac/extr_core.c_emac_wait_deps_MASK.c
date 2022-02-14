
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_instance {int mal_ph; int zmii_ph; int rgmii_ph; int tah_ph; int mdio_ph; scalar_t__ blist; int mdio_dev; int tah_dev; int rgmii_dev; int zmii_dev; int mal_dev; } ;
struct emac_depentry {int phandle; int ofdev; int node; } ;
typedef int deps ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_2 (struct emac_instance*,struct emac_depentry*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct emac_depentry**,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_12 ;
 int FUNC_6 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_7(struct emac_instance *VAR_13)
{
 struct emac_depentry VAR_14[VAR_0];
 int VAR_15, VAR_16;

 FUNC_3(&VAR_14, 0, sizeof(VAR_14));

 VAR_14[VAR_1].phandle = VAR_13->mal_ph;
 VAR_14[VAR_6].phandle = VAR_13->zmii_ph;
 VAR_14[VAR_4].phandle = VAR_13->rgmii_ph;
 if (VAR_13->tah_ph)
  VAR_14[VAR_5].phandle = VAR_13->tah_ph;
 if (VAR_13->mdio_ph)
  VAR_14[VAR_2].phandle = VAR_13->mdio_ph;
 if (VAR_13->blist && VAR_13->blist > VAR_9)
  VAR_14[VAR_3].phandle = 0xffffffffu;
 FUNC_0(&VAR_12, &VAR_10);
 FUNC_6(VAR_11,
      FUNC_2(VAR_13, VAR_14),
      VAR_7);
 FUNC_1(&VAR_12, &VAR_10);
 VAR_16 = FUNC_2(VAR_13, VAR_14) ? 0 : -VAR_8;
 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  FUNC_5(VAR_14[VAR_15].node);
  if (VAR_16)
   FUNC_4(VAR_14[VAR_15].ofdev);
 }
 if (VAR_16 == 0) {
  VAR_13->mal_dev = VAR_14[VAR_1].ofdev;
  VAR_13->zmii_dev = VAR_14[VAR_6].ofdev;
  VAR_13->rgmii_dev = VAR_14[VAR_4].ofdev;
  VAR_13->tah_dev = VAR_14[VAR_5].ofdev;
  VAR_13->mdio_dev = VAR_14[VAR_2].ofdev;
 }
 FUNC_4(VAR_14[VAR_3].ofdev);
 return VAR_16;
}
