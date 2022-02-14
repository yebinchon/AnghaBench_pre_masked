
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct sgentry {int dummy; } ;
struct scsi_cmnd {int dummy; } ;
struct fib {struct aac_dev* dev; } ;
struct TYPE_4__ {void* count; } ;
struct aac_write {TYPE_2__ sg; void* count; void* block; void* cid; void* command; } ;
struct aac_fibhdr {int dummy; } ;
struct aac_dev {int max_fib_size; TYPE_1__* fsa_dev; } ;
typedef int fib_callback ;
struct TYPE_3__ {int block_size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long FUNC_1 (struct scsi_cmnd*,TYPE_2__*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (int ,struct fib*,int,int ,int ,int,int ,void*) ;
 void* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct fib*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (void*) ;
 size_t FUNC_7 (struct scsi_cmnd*) ;

__attribute__((used)) static int FUNC_8(struct fib * VAR_4, struct scsi_cmnd * VAR_5, u64 VAR_6, u32 VAR_7, int VAR_8)
{
 u16 VAR_9;
 struct aac_write *VAR_10;
 struct aac_dev *VAR_11 = VAR_4->dev;
 long VAR_12;

 FUNC_2(VAR_4);
 VAR_10 = (struct aac_write *) FUNC_5(VAR_4);
 VAR_10->command = FUNC_4(VAR_2);
 VAR_10->cid = FUNC_4(FUNC_7(VAR_5));
 VAR_10->block = FUNC_4((u32)(VAR_6&0xffffffff));
 VAR_10->count = FUNC_4(VAR_7 *
  VAR_11->fsa_dev[FUNC_7(VAR_5)].block_size);
 VAR_10->sg.count = FUNC_4(1);


 VAR_12 = FUNC_1(VAR_5, &VAR_10->sg);
 if (VAR_12 < 0)
  return VAR_12;
 VAR_9 = sizeof(struct aac_write) +
  ((FUNC_6(VAR_10->sg.count) - 1) *
   sizeof (struct sgentry));
 FUNC_0 (VAR_9 > (VAR_4->dev->max_fib_size -
    sizeof(struct aac_fibhdr)));



 return FUNC_3(VAR_0,
     VAR_4,
     VAR_9,
     VAR_1,
     0, 1,
     (fib_callback) VAR_3,
     (void *) VAR_5);
}
