
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct uea_stats {int dummy; } ;
struct TYPE_5__ {int function; } ;
struct TYPE_4__ {int function; } ;
struct TYPE_6__ {TYPE_2__ e1; TYPE_1__ e4; } ;
struct uea_softc {int booting; int (* send_cmvs ) (struct uea_softc*) ;scalar_t__ reset; int task; scalar_t__ ovl; scalar_t__ pageno; TYPE_3__ cmv_dsc; int stats; scalar_t__ cmv_ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct uea_softc*) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct uea_softc*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct uea_softc*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct uea_softc*,int ,int ,int,int *) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (struct uea_softc*,int ,int ) ;
 int FUNC_15 (struct uea_softc*) ;

__attribute__((used)) static int FUNC_16(struct uea_softc *VAR_15)
{
 u16 VAR_16 = 0;
 int VAR_17;

 FUNC_9(FUNC_2(VAR_15));
 FUNC_10(FUNC_2(VAR_15), "(re)booting started\n");


 VAR_15->booting = 1;




 VAR_15->cmv_ack = 0;
 FUNC_4(VAR_0);


 FUNC_5(&VAR_15->stats, 0, sizeof(struct uea_stats));


 FUNC_12(VAR_15, VAR_12, VAR_8, 0, ((void*)0));
 FUNC_12(VAR_15, VAR_12, VAR_6, 0, ((void*)0));


 FUNC_12(VAR_15, VAR_12, VAR_13, 0, ((void*)0));


 VAR_17 = FUNC_14(VAR_15, 0, FUNC_6(100));
 if (VAR_17 < 0)
  return VAR_17;


 FUNC_12(VAR_15, VAR_12, VAR_7, 0, ((void*)0));

 if (FUNC_3(VAR_15) != VAR_5) {

  FUNC_12(VAR_15, VAR_11, VAR_10, 2, &VAR_16);
  FUNC_12(VAR_15, VAR_11, VAR_9, 2, &VAR_16);
  FUNC_12(VAR_15, VAR_11, VAR_14, 2, &VAR_16);
 }

 VAR_17 = FUNC_14(VAR_15, 0, FUNC_6(1000));
 if (VAR_17 < 0)
  return VAR_17;

 if (FUNC_3(VAR_15) == VAR_5)
  VAR_15->cmv_dsc.e4.function = FUNC_1(VAR_3,
       VAR_4, 1);
 else
  VAR_15->cmv_dsc.e1.function = FUNC_0(VAR_1,
       VAR_2);


 VAR_15->booting = 0;


 VAR_15->pageno = 0;
 VAR_15->ovl = 0;
 FUNC_7(&VAR_15->task);


 VAR_17 = FUNC_15(VAR_15);
 if (VAR_17 < 0)
  return VAR_17;

 FUNC_13(FUNC_2(VAR_15), "Ready CMV received\n");

 VAR_17 = VAR_15->send_cmvs(VAR_15);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_15->reset = 0;
 FUNC_11(FUNC_2(VAR_15));
 return VAR_17;
}
