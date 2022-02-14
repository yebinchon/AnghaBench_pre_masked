
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct pci_dev {int dummy; } ;
struct ahd_softc {TYPE_1__* platform_data; } ;
struct TYPE_2__ {scalar_t__ host; } ;


 int VAR_0 ;
 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*,int ) ;
 int FUNC_2 (struct ahd_softc*,int *) ;
 int FUNC_3 (struct ahd_softc*,int *) ;
 struct ahd_softc* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(struct pci_dev *VAR_1)
{
 struct ahd_softc *VAR_2 = FUNC_4(VAR_1);
 u_long VAR_3;

 if (VAR_2->platform_data && VAR_2->platform_data->host)
   FUNC_5(VAR_2->platform_data->host);

 FUNC_2(VAR_2, &VAR_3);
 FUNC_1(VAR_2, VAR_0);
 FUNC_3(VAR_2, &VAR_3);
 FUNC_0(VAR_2);
}
