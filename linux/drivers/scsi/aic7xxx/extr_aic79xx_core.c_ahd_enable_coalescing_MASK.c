
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int hs_mailbox; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ahd_softc*) ;
 int FUNC_1 (struct ahd_softc*,int ,int ) ;
 int FUNC_2 (struct ahd_softc*) ;

__attribute__((used)) static void
FUNC_3(struct ahd_softc *VAR_2, int VAR_3)
{

 VAR_2->hs_mailbox &= ~VAR_0;
 if (VAR_3)
  VAR_2->hs_mailbox |= VAR_0;
 FUNC_1(VAR_2, VAR_1, VAR_2->hs_mailbox);
 FUNC_0(VAR_2);
 FUNC_2(VAR_2);
}
