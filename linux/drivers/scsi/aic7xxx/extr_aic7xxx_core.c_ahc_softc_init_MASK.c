
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int chip; int unpause; int pause; int * scb_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ahc_softc*,int ) ;
 int * FUNC_1 (int,int ) ;

int
FUNC_2(struct ahc_softc *VAR_6)
{


 if ((VAR_6->chip & VAR_0) == 0)
  VAR_6->unpause = FUNC_0(VAR_6, VAR_3) & VAR_4;
 else
  VAR_6->unpause = 0;
 VAR_6->pause = VAR_6->unpause | VAR_5;

 if (VAR_6->scb_data == ((void*)0)) {
  VAR_6->scb_data = FUNC_1(sizeof(*VAR_6->scb_data), VAR_2);
  if (VAR_6->scb_data == ((void*)0))
   return (VAR_1);
 }

 return (0);
}
