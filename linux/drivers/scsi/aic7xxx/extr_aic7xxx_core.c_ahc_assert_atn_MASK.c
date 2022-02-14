
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_softc {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int FUNC_1 (struct ahc_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct ahc_softc *VAR_4)
{
 u_int VAR_5;

 VAR_5 = VAR_1;
 if ((VAR_4->features & VAR_0) == 0)
  VAR_5 |= FUNC_0(VAR_4, VAR_2);
 FUNC_1(VAR_4, VAR_3, VAR_5);
}
