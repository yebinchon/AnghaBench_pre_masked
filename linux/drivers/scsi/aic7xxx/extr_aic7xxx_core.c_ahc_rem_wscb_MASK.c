
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ahc_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ahc_softc*) ;
 int FUNC_1 (struct ahc_softc*,int ) ;
 int FUNC_2 (struct ahc_softc*,int ,int) ;

__attribute__((used)) static u_int
FUNC_3(struct ahc_softc *VAR_7, u_int VAR_8, u_int VAR_9)
{
 u_int VAR_10, VAR_11;





 VAR_10 = FUNC_1(VAR_7, VAR_1);
 FUNC_2(VAR_7, VAR_1, VAR_8);
 VAR_11 = FUNC_1(VAR_7, VAR_4);


 FUNC_2(VAR_7, VAR_2, 0);

 FUNC_0(VAR_7);


 if (VAR_9 == VAR_3) {

  FUNC_2(VAR_7, VAR_6, VAR_11);





  FUNC_2(VAR_7, VAR_5, (FUNC_1(VAR_7, VAR_5) & ~VAR_0));
 } else {




  FUNC_2(VAR_7, VAR_1, VAR_9);
  FUNC_2(VAR_7, VAR_4, VAR_11);
 }




 FUNC_2(VAR_7, VAR_1, VAR_10);
 return VAR_11;
}
