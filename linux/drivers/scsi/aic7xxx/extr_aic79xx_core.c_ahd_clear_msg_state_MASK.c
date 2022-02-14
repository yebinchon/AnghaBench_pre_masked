
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahd_softc {int msg_type; scalar_t__ msgin_index; scalar_t__ msgout_len; int msg_flags; scalar_t__ send_msg_perror; } ;
typedef int ahd_mode_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct ahd_softc*,int ) ;
 int FUNC_1 (struct ahd_softc*,int ,int) ;
 int FUNC_2 (struct ahd_softc*,int ) ;
 int FUNC_3 (struct ahd_softc*) ;
 int FUNC_4 (struct ahd_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_5(struct ahd_softc *VAR_11)
{
 ahd_mode_state VAR_12;

 VAR_12 = FUNC_3(VAR_11);
 FUNC_4(VAR_11, VAR_0, VAR_0);
 VAR_11->send_msg_perror = 0;
 VAR_11->msg_flags = VAR_4;
 VAR_11->msgout_len = 0;
 VAR_11->msgin_index = 0;
 VAR_11->msg_type = VAR_7;
 if ((FUNC_0(VAR_11, VAR_8) & VAR_1) != 0) {




  FUNC_1(VAR_11, VAR_3, VAR_2);
 }
 FUNC_1(VAR_11, VAR_6, VAR_5);
 FUNC_1(VAR_11, VAR_9,
   FUNC_0(VAR_11, VAR_9) & ~VAR_10);
 FUNC_2(VAR_11, VAR_12);
}
