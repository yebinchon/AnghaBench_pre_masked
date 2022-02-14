
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {scalar_t__ src_mode; scalar_t__ dst_mode; } ;
typedef scalar_t__ ahd_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahd_softc*,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_1 (struct ahd_softc*) ;
 int FUNC_2 (struct ahd_softc*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,int ) ;

void
FUNC_5(struct ahd_softc *VAR_4, ahd_mode VAR_5, ahd_mode VAR_6)
{
 if (VAR_4->src_mode == VAR_5 && VAR_4->dst_mode == VAR_6)
  return;
 FUNC_2(VAR_4, VAR_2, FUNC_0(VAR_4, VAR_5, VAR_6));
 VAR_4->src_mode = VAR_5;
 VAR_4->dst_mode = VAR_6;
}
