
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct orc_host {int* target_flag; scalar_t__ base; int flags; int * max_tags; int max_targets; int BIOScfg; int scsi_id; } ;
struct TYPE_2__ {int revision; int SCSI0Config; int Target00Config; int BIOSConfig1; int scsi_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct orc_host*) ;
 TYPE_1__* VAR_10 ;
 int FUNC_2 (struct orc_host*) ;
 int FUNC_3 (struct orc_host*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct orc_host*) ;
 int FUNC_6 (struct orc_host*) ;
 scalar_t__ FUNC_7 (struct orc_host*) ;
 scalar_t__ FUNC_8 (struct orc_host*) ;

__attribute__((used)) static int FUNC_9(struct orc_host * VAR_11)
{
 u8 *VAR_12;
 u16 VAR_13;
 u8 VAR_14;

 FUNC_1(VAR_11);
 FUNC_4(0xFF, VAR_11->base + VAR_5);

 if (FUNC_0(VAR_11->base + VAR_7) & VAR_9) {
  VAR_13 = FUNC_3(VAR_11);
  if (VAR_13 == 0xFFFF) {
   FUNC_4(VAR_0, VAR_11->base + VAR_6);
   if (FUNC_7(VAR_11) == 0)
    return -1;
   FUNC_2(VAR_11);
   FUNC_6(VAR_11);
   FUNC_4(0x00, VAR_11->base + VAR_6);
   if (FUNC_8(VAR_11) == 0)
    return -1;

  } else {
   FUNC_6(VAR_11);
  }
 } else {
  FUNC_4(VAR_0, VAR_11->base + VAR_6);
  if (FUNC_7(VAR_11) == 0)
   return -1;
  FUNC_2(VAR_11);
  FUNC_6(VAR_11);
  FUNC_4(VAR_2, VAR_11->base + VAR_6);


  if (FUNC_8(VAR_11) == 0)
   return -1;
 }



 FUNC_5(VAR_11);

 if (VAR_10->revision != 1)
  return -1;

 VAR_11->scsi_id = VAR_10->scsi_id;
 VAR_11->BIOScfg = VAR_10->BIOSConfig1;
 VAR_11->max_targets = VAR_3;
 VAR_12 = (u8 *) & (VAR_10->Target00Config);
 for (VAR_14 = 0; VAR_14 < 16; VAR_12++, VAR_14++) {
  VAR_11->target_flag[VAR_14] = *VAR_12;
  VAR_11->max_tags[VAR_14] = VAR_8;
 }

 if (VAR_10->SCSI0Config & VAR_4)
  VAR_11->flags |= VAR_1;
 FUNC_4(0xFB, VAR_11->base + VAR_5);
 return 0;
}
