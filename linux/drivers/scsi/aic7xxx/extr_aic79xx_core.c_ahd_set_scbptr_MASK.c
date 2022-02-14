
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahd_softc {int dummy; } ;


 int FUNC_0 (struct ahd_softc*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct ahd_softc*,scalar_t__,int) ;

void
FUNC_2(struct ahd_softc *VAR_3, u_int VAR_4)
{
 FUNC_0(VAR_3, ~(VAR_1|VAR_0),
    ~(VAR_1|VAR_0));
 FUNC_1(VAR_3, VAR_2, VAR_4 & 0xFF);
 FUNC_1(VAR_3, VAR_2+1, (VAR_4 >> 8) & 0xFF);
}
