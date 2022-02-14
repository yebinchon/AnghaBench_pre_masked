
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ahc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ahc_softc*) ;
 scalar_t__ FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*,int ,scalar_t__) ;

__attribute__((used)) static u_int
FUNC_3(struct ahc_softc *VAR_5, u_int VAR_6, u_int VAR_7)
{
 u_int VAR_8;

 FUNC_2(VAR_5, VAR_1, VAR_7);
 VAR_8 = FUNC_1(VAR_5, VAR_4);

 FUNC_2(VAR_5, VAR_2, 0);

 FUNC_0(VAR_5);

 if (VAR_6 != VAR_3) {
  FUNC_2(VAR_5, VAR_1, VAR_6);
  FUNC_2(VAR_5, VAR_4, VAR_8);
 } else
  FUNC_2(VAR_5, VAR_0, VAR_8);

 return (VAR_8);
}
