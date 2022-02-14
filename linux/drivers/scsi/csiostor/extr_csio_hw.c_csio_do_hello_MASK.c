
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct csio_mb {int dummy; } ;
struct csio_hw {int mb_mempool; int pfn; int flags; int lock; } ;
typedef int state_str ;
typedef enum fw_retval { ____Placeholder_fw_retval } fw_retval ;
typedef enum csio_dev_state { ____Placeholder_csio_dev_state } csio_dev_state ;





 int VAR_0 ;
 int FUNC_0 (struct csio_hw*,int ) ;
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
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct csio_hw*,char*,int) ;
 int FUNC_3 (struct csio_hw*,char*,int ,char*,...) ;
 int FUNC_4 (struct csio_hw*,struct csio_mb*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (struct csio_hw*,struct csio_mb*) ;
 int FUNC_6 (struct csio_hw*,struct csio_mb*,int*,int*,int *) ;
 int FUNC_7 (struct csio_hw*,int ) ;
 struct csio_mb* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct csio_mb*,int ) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (int) ;
 int VAR_15 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (char*,char*) ;

__attribute__((used)) static int
FUNC_15(struct csio_hw *VAR_16, enum csio_dev_state *VAR_17)
{
 struct csio_mb *VAR_18;
 int VAR_19 = 0;
 enum fw_retval VAR_20;
 uint8_t VAR_21;
 char VAR_22[16];
 int VAR_23 = VAR_6;

 FUNC_10(VAR_22, 0, sizeof(VAR_22));

 VAR_18 = FUNC_8(VAR_16->mb_mempool, VAR_9);
 if (!VAR_18) {
  VAR_19 = -VAR_4;
  FUNC_0(VAR_16, VAR_15);
  goto out;
 }

retry:
 FUNC_4(VAR_16, VAR_18, VAR_2, VAR_16->pfn,
        VAR_16->pfn, VAR_1, ((void*)0));

 VAR_19 = FUNC_5(VAR_16, VAR_18);
 if (VAR_19) {
  FUNC_2(VAR_16, "failed to issue HELLO cmd. ret:%d.\n", VAR_19);
  goto out_free_mb;
 }

 FUNC_6(VAR_16, VAR_18, &VAR_20, VAR_17, &VAR_21);
 if (VAR_20 != VAR_8) {
  FUNC_2(VAR_16, "HELLO cmd failed with ret: %d\n", VAR_20);
  VAR_19 = -VAR_3;
  goto out_free_mb;
 }


 if (VAR_16->pfn == VAR_21) {
  VAR_16->flags |= VAR_0;
 } else if (*VAR_17 == 128) {
  int VAR_24 = VAR_7;
  for (;;) {
   uint32_t VAR_25;

   FUNC_13(&VAR_16->lock);
   FUNC_11(50);
   FUNC_12(&VAR_16->lock);
   VAR_24 -= 50;







   VAR_25 = FUNC_7(VAR_16, VAR_10);
   if (!(VAR_25 & (VAR_11|VAR_12))) {
    if (VAR_24 <= 0) {
     if (VAR_23-- > 0)
      goto retry;

     VAR_19 = -VAR_5;
     break;
    }
    continue;
   }





   if (VAR_17) {
    if (VAR_25 & VAR_11) {
     *VAR_17 = 130;
     VAR_19 = -VAR_5;
    } else if (VAR_25 & VAR_12)
     *VAR_17 = 129;
   }






   if (VAR_21 == VAR_13 &&
       (VAR_25 & VAR_14))
    VAR_21 = FUNC_1(VAR_25);
   break;
  }
  VAR_16->flags &= ~VAR_0;
 }

 switch (*VAR_17) {
 case 128:
  FUNC_14(VAR_22, "Initializing");
  break;
 case 129:
  FUNC_14(VAR_22, "Initialized");
  break;
 case 130:
  FUNC_14(VAR_22, "Error");
  break;
 default:
  FUNC_14(VAR_22, "Unknown");
  break;
 }

 if (VAR_16->pfn == VAR_21)
  FUNC_3(VAR_16, "PF: %d, Coming up as MASTER, HW state: %s\n",
   VAR_16->pfn, VAR_22);
 else
  FUNC_3(VAR_16,
      "PF: %d, Coming up as SLAVE, Master PF: %d, HW state: %s\n",
      VAR_16->pfn, VAR_21, VAR_22);

out_free_mb:
 FUNC_9(VAR_18, VAR_16->mb_mempool);
out:
 return VAR_19;
}
