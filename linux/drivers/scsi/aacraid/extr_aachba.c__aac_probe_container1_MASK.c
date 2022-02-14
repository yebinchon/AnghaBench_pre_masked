
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int phase; } ;
struct scsi_cmnd {TYPE_3__ SCp; } ;
struct fib {TYPE_4__* dev; } ;
struct aac_query_mount {void* type; void* count; void* command; } ;
struct aac_mount {void* status; TYPE_1__* mnt; } ;
struct TYPE_6__ {int supported_options2; } ;
struct TYPE_8__ {TYPE_2__ supplement_adapter_info; } ;
struct TYPE_5__ {void* vol; scalar_t__ capacityhigh; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (void*,struct fib*) ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (int ,struct fib*,int,int ,int ,int,int (*) (void*,struct fib*),void*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (struct scsi_cmnd*,struct fib*) ;
 void* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (struct fib*) ;
 scalar_t__ FUNC_7 (void*) ;
 scalar_t__ FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static void FUNC_9(void * VAR_10, struct fib * VAR_11)
{
 struct scsi_cmnd * VAR_12;
 struct aac_mount * VAR_13;
 struct aac_query_mount *VAR_14;
 int VAR_15;

 VAR_13 = (struct aac_mount *) FUNC_6(VAR_11);
 if (!FUNC_3(VAR_11->dev)) {
  VAR_13->mnt[0].capacityhigh = 0;
  if ((FUNC_7(VAR_13->status) == VAR_7) &&
   (FUNC_7(VAR_13->mnt[0].vol) != VAR_2)) {
   FUNC_0(VAR_10, VAR_11);
   return;
  }
 }
 VAR_12 = (struct scsi_cmnd *) VAR_10;

 if (!FUNC_4(VAR_12, VAR_11))
  return;

 FUNC_1(VAR_11);

 VAR_14 = (struct aac_query_mount *)FUNC_6(VAR_11);

 if (VAR_11->dev->supplement_adapter_info.supported_options2 &
     VAR_0)
  VAR_14->command = FUNC_5(VAR_9);
 else
  VAR_14->command = FUNC_5(VAR_8);

 VAR_14->count = FUNC_5(FUNC_8(VAR_12));
 VAR_14->type = FUNC_5(VAR_5);
 VAR_12->SCp.phase = VAR_1;

 VAR_15 = FUNC_2(VAR_3,
     VAR_11,
     sizeof(struct aac_query_mount),
     VAR_6,
     0, 1,
     FUNC_0,
     (void *) VAR_12);



 if (VAR_15 < 0 && VAR_15 != -VAR_4) {

  VAR_13->status = FUNC_5(VAR_7);
  FUNC_0(VAR_10, VAR_11);
 }
}
