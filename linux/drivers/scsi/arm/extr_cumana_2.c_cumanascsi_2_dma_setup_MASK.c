
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct scsi_pointer {int this_residual; } ;
struct device {int dummy; } ;
struct TYPE_3__ {int dma; } ;
struct TYPE_4__ {TYPE_1__ scsi; } ;
struct cumanascsi2_info {scalar_t__ base; int * sg; TYPE_2__ info; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef scalar_t__ fasdmatype_t ;
typedef scalar_t__ fasdmadir_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,struct scsi_pointer*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct device*,int *,int,int) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 struct device* FUNC_4 (struct Scsi_Host*) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int,int *,int) ;
 int FUNC_7 (int,scalar_t__) ;

__attribute__((used)) static fasdmatype_t
FUNC_8(struct Scsi_Host *VAR_15, struct scsi_pointer *VAR_16,
         fasdmadir_t VAR_17, fasdmatype_t VAR_18)
{
 struct cumanascsi2_info *VAR_19 = (struct cumanascsi2_info *)VAR_15->hostdata;
 struct device *VAR_20 = FUNC_4(VAR_15);
 int VAR_21 = VAR_19->info.scsi.dma;

 FUNC_7(VAR_1, VAR_19->base + VAR_5);

 if (VAR_21 != VAR_11 &&
     (VAR_18 == VAR_14 || VAR_16->this_residual >= 512)) {
  int VAR_22, VAR_23, VAR_24, VAR_25;

  VAR_22 = FUNC_0(&VAR_19->sg[0], VAR_16, VAR_12);

  if (VAR_17 == VAR_9)
   VAR_23 = VAR_10,
   VAR_24 = VAR_8,
   VAR_25 = VAR_3;
  else
   VAR_23 = VAR_6,
   VAR_24 = VAR_7,
   VAR_25 = VAR_2;

  FUNC_2(VAR_20, VAR_19->sg, VAR_22, VAR_23);

  FUNC_1(VAR_21);
  FUNC_6(VAR_21, VAR_19->sg, VAR_22);
  FUNC_7(VAR_25, VAR_19->base + VAR_5);
  FUNC_5(VAR_21, VAR_24);
  FUNC_3(VAR_21);
  FUNC_7(VAR_4, VAR_19->base + VAR_5);
  FUNC_7(VAR_0, VAR_19->base + VAR_5);
  return VAR_14;
 }





 return VAR_13;
}
