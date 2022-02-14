
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct fib {int dummy; } ;
struct aac_pause {void* count; void* noRescan; void* min; void* timeout; void* type; void* command; } ;
struct aac_dev {int in_reset; struct Scsi_Host* scsi_host_ptr; int fib_lock; } ;
struct Scsi_Host {int * host_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct aac_dev*,int,int ) ;
 int VAR_7 ;
 struct fib* FUNC_1 (struct aac_dev*) ;
 int FUNC_2 (struct fib*) ;
 int FUNC_3 (struct fib*) ;
 int FUNC_4 (struct fib*) ;
 int FUNC_5 (int ,struct fib*,int,int ,int,int,int *,int *) ;
 int FUNC_6 (struct aac_dev*) ;
 void* FUNC_7 (int) ;
 scalar_t__ FUNC_8 (struct fib*) ;
 int FUNC_9 (struct Scsi_Host*) ;
 int FUNC_10 (int *,unsigned long) ;
 scalar_t__ FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (int *,unsigned long) ;

int FUNC_13(struct aac_dev *VAR_8, int VAR_9, u8 VAR_10)
{
 unsigned long VAR_11 = 0;
 int VAR_12;
 struct Scsi_Host * VAR_13;
 int VAR_14;

 if (FUNC_11(&VAR_8->fib_lock, VAR_11) == 0)
  return -VAR_2;

 if (VAR_8->in_reset) {
  FUNC_12(&VAR_8->fib_lock, VAR_11);
  return -VAR_2;
 }
 VAR_8->in_reset = 1;
 FUNC_12(&VAR_8->fib_lock, VAR_11);






 VAR_13 = VAR_8->scsi_host_ptr;
 FUNC_9(VAR_13);


 if (VAR_9 < 2)
  FUNC_6(VAR_8);
 FUNC_10(VAR_13->host_lock, VAR_11);
 VAR_14 = VAR_9 ? VAR_9 :
   (VAR_7 != 0 && VAR_7 != 1);
 VAR_12 = FUNC_0(VAR_8, VAR_14, VAR_10);
 FUNC_12(VAR_13->host_lock, VAR_11);

 if ((VAR_9 < 2) && (VAR_12 == -VAR_3)) {

  struct fib * VAR_15 = FUNC_1(VAR_8);
  if (VAR_15) {
   struct aac_pause *VAR_16;
   int VAR_17;

   FUNC_4(VAR_15);

   VAR_16 = (struct aac_pause *) FUNC_8(VAR_15);

   VAR_16->command = FUNC_7(VAR_6);
   VAR_16->type = FUNC_7(VAR_0);
   VAR_16->timeout = FUNC_7(1);
   VAR_16->min = FUNC_7(1);
   VAR_16->noRescan = FUNC_7(1);
   VAR_16->count = FUNC_7(0);

   VAR_17 = FUNC_5(VAR_1,
     VAR_15,
     sizeof(struct aac_pause),
     VAR_5,
     -2 , 1,
     ((void*)0), ((void*)0));

   if (VAR_17 >= 0)
    FUNC_2(VAR_15);


   if (VAR_17 != -VAR_4)
    FUNC_3(VAR_15);
  }
 }

 return VAR_12;
}
