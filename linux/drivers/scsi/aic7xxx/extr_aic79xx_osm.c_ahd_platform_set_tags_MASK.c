
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct scsi_device {int dummy; } ;
struct ahd_softc {int dummy; } ;
struct ahd_linux_device {int flags; int active; int openings; scalar_t__ maxtags; int qfrozen; } ;
struct ahd_devinfo {int dummy; } ;
typedef int ahd_queue_alg ;


 int VAR_0 ;
 int VAR_1 ;





 scalar_t__ FUNC_0 (struct ahd_softc*,struct ahd_devinfo*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct scsi_device*,int) ;
 struct ahd_linux_device* FUNC_2 (struct scsi_device*) ;

void
FUNC_3(struct ahd_softc *VAR_3, struct scsi_device *VAR_4,
        struct ahd_devinfo *VAR_5, ahd_queue_alg VAR_6)
{
 struct ahd_linux_device *VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_4 == ((void*)0))
  return;

 VAR_7 = FUNC_2(VAR_4);

 if (VAR_7 == ((void*)0))
  return;
 VAR_8 = VAR_7->flags & (132|131);
 switch (VAR_6) {
 default:
 case 129:
  VAR_9 = 0;
  break;
 case 130:
  VAR_9 = 132;
  break;
 case 128:
  VAR_9 = 131;
  break;
 }
 if ((VAR_7->flags & VAR_0) == 0
  && (VAR_8 != VAR_9)
  && (VAR_7->active != 0)) {
  VAR_7->flags |= VAR_0;
  VAR_7->qfrozen++;
 }

 VAR_7->flags &= ~(132|131|VAR_1);
 if (VAR_9) {
  u_int VAR_10;

  VAR_10 = FUNC_0(VAR_3, VAR_5);
  if (!VAR_8) {





   VAR_7->maxtags = VAR_10;
   VAR_7->openings = VAR_7->maxtags - VAR_7->active;
  }
  if (VAR_7->maxtags == 0) {



   VAR_7->openings = 1;
  } else if (VAR_6 == 128) {
   VAR_7->flags |= 131;
   if (VAR_2 != 0)
    VAR_7->flags |= VAR_1;
  } else
   VAR_7->flags |= 132;
 } else {

  VAR_7->maxtags = 0;
  VAR_7->openings = 1 - VAR_7->active;
 }

 switch ((VAR_7->flags & (132|131))) {
 case 132:
 case 131:
  FUNC_1(VAR_4,
    VAR_7->openings + VAR_7->active);
  break;
 default:






  FUNC_1(VAR_4, 1);
  break;
 }
}
