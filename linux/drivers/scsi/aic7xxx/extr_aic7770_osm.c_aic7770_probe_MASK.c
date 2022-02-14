
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {scalar_t__ driver_data; } ;
struct eisa_device {int base_addr; TYPE_1__ id; } ;
struct device {int dummy; } ;
struct TYPE_4__ {scalar_t__ ioport; } ;
struct ahc_softc {TYPE_2__ bsh; struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ahc_softc* FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ahc_softc*) ;
 int FUNC_2 (struct ahc_softc*,int *) ;
 int FUNC_3 (struct ahc_softc*,scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct device*,struct ahc_softc*) ;
 char* FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*,int) ;
 struct eisa_device* FUNC_7 (struct device*) ;

__attribute__((used)) static int
FUNC_8(struct device *VAR_5)
{
 struct eisa_device *VAR_6 = FUNC_7(VAR_5);
 u_int VAR_7 = VAR_6->base_addr+VAR_0;
 struct ahc_softc *VAR_8;
 char VAR_9[80];
 char *VAR_10;
 int VAR_11;

 FUNC_6(VAR_9, "ahc_eisa:%d", VAR_7 >> 12);
 VAR_10 = FUNC_5(VAR_9, VAR_2);
 if (VAR_10 == ((void*)0))
  return (VAR_1);
 VAR_8 = FUNC_0(&VAR_4, VAR_10);
 if (VAR_8 == ((void*)0))
  return (VAR_1);
 VAR_8->dev = VAR_5;
 VAR_11 = FUNC_3(VAR_8, VAR_3 + VAR_6->id.driver_data,
          VAR_7);
 if (VAR_11 != 0) {
  VAR_8->bsh.ioport = 0;
  FUNC_1(VAR_8);
  return (VAR_11);
 }

  FUNC_4(VAR_5, VAR_8);

 VAR_11 = FUNC_2(VAR_8, &VAR_4);
 return (VAR_11);
}
