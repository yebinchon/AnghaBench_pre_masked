
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tstats; } ;
struct macsec_dev {int gro_cells; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct macsec_dev* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 struct macsec_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->gro_cells);
 FUNC_0(VAR_0->tstats);
}
