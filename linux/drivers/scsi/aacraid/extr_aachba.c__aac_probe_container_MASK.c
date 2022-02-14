
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {char* ptr; int phase; } ;
struct scsi_cmnd {TYPE_5__* device; TYPE_3__ SCp; } ;
struct fsa_dev_info {int valid; } ;
struct fib {TYPE_2__* dev; } ;
struct aac_query_mount {void* type; void* count; void* command; } ;
struct aac_dev {struct fsa_dev_info* fsa_dev; } ;
struct TYPE_10__ {TYPE_4__* host; } ;
struct TYPE_9__ {scalar_t__ hostdata; } ;
struct TYPE_6__ {int supported_options2; } ;
struct TYPE_7__ {TYPE_1__ supplement_adapter_info; } ;


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
 struct fib* FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (struct fib*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (int ,struct fib*,int,int ,int ,int,int ,void*) ;
 void* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (struct fib*) ;
 int FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_9(struct scsi_cmnd * VAR_10, int (*VAR_11)(struct scsi_cmnd *))
{
 struct fib * VAR_12;
 int VAR_13 = -VAR_4;

 if ((VAR_12 = FUNC_0((struct aac_dev *)VAR_10->device->host->hostdata))) {
  struct aac_query_mount *VAR_14;

  FUNC_3(VAR_12);

  VAR_14 = (struct aac_query_mount *)FUNC_6(VAR_12);

  if (VAR_12->dev->supplement_adapter_info.supported_options2 &
      VAR_0)
   VAR_14->command = FUNC_5(VAR_8);
  else
   VAR_14->command = FUNC_5(VAR_7);

  VAR_14->count = FUNC_5(FUNC_7(VAR_10));
  VAR_14->type = FUNC_5(VAR_5);
  VAR_10->SCp.ptr = (char *)VAR_11;
  VAR_10->SCp.phase = VAR_1;

  VAR_13 = FUNC_4(VAR_2,
     VAR_12,
     sizeof(struct aac_query_mount),
     VAR_6,
     0, 1,
     VAR_9,
     (void *) VAR_10);



  if (VAR_13 == -VAR_3)
   return 0;

  if (VAR_13 < 0) {
   VAR_10->SCp.ptr = ((void*)0);
   FUNC_1(VAR_12);
   FUNC_2(VAR_12);
  }
 }
 if (VAR_13 < 0) {
  struct fsa_dev_info *VAR_15 = ((struct aac_dev *)(VAR_10->device->host->hostdata))->fsa_dev;
  if (VAR_15) {
   VAR_15 += FUNC_7(VAR_10);
   if ((VAR_15->valid & 1) == 0) {
    VAR_15->valid = 0;
    return (*VAR_11)(VAR_10);
   }
  }
 }
 return VAR_13;
}
