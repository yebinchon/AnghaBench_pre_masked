
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct scsi_target {scalar_t__ channel; int id; TYPE_1__ dev; } ;
struct ahc_softc {int dummy; } ;
struct ahc_devinfo {int dummy; } ;
struct Scsi_Host {int this_id; scalar_t__ hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ahc_devinfo*,int ,int ,int ,scalar_t__,int ) ;
 int FUNC_1 (struct ahc_softc*,unsigned long*) ;
 int FUNC_2 (struct ahc_softc*,struct ahc_devinfo*,int,int ,int ) ;
 int FUNC_3 (struct ahc_softc*,unsigned long*) ;
 struct Scsi_Host* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct scsi_target *VAR_3, int VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_4(VAR_3->dev.parent);
 struct ahc_softc *VAR_6 = *((struct ahc_softc **)VAR_5->hostdata);
 struct ahc_devinfo VAR_7;
 unsigned long VAR_8;

 FUNC_0(&VAR_7, VAR_5->this_id, VAR_3->id, 0,
       VAR_3->channel + 'A', VAR_2);
 FUNC_1(VAR_6, &VAR_8);
 FUNC_2(VAR_6, &VAR_7, VAR_4, VAR_0, VAR_1);
 FUNC_3(VAR_6, &VAR_8);
}
