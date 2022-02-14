
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct docg3 {TYPE_1__* cascade; } ;
struct TYPE_2__ {int lock; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (struct docg3*,int ) ;
 int FUNC_1 (struct docg3*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct seq_file*,char*,int,...) ;
 int FUNC_5 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_19, void *VAR_20)
{
 struct docg3 *VAR_21 = (struct docg3 *)VAR_19->private;
 int VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;

 FUNC_2(&VAR_21->cascade->lock);
 VAR_22 = FUNC_0(VAR_21, VAR_11);
 VAR_23 = FUNC_0(VAR_21, VAR_2);
 VAR_24 = FUNC_1(VAR_21, VAR_1);
 VAR_25 = FUNC_1(VAR_21, VAR_0);
 VAR_26 = FUNC_0(VAR_21, VAR_5);
 VAR_27 = FUNC_1(VAR_21, VAR_4);
 VAR_28 = FUNC_1(VAR_21, VAR_3);
 FUNC_3(&VAR_21->cascade->lock);

 FUNC_4(VAR_19, "Protection = 0x%02x (", VAR_22);
 if (VAR_22 & VAR_13)
  FUNC_5(VAR_19, "FOUNDRY_OTP_LOCK,");
 if (VAR_22 & VAR_12)
  FUNC_5(VAR_19, "CUSTOMER_OTP_LOCK,");
 if (VAR_22 & VAR_15)
  FUNC_5(VAR_19, "LOCK_INPUT,");
 if (VAR_22 & VAR_18)
  FUNC_5(VAR_19, "STICKY_LOCK,");
 if (VAR_22 & VAR_16)
  FUNC_5(VAR_19, "PROTECTION ON,");
 if (VAR_22 & VAR_14)
  FUNC_5(VAR_19, "IPL_DOWNLOAD_LOCK,");
 if (VAR_22 & VAR_17)
  FUNC_5(VAR_19, "PROTECT_ERR,");
 else
  FUNC_5(VAR_19, "NO_PROTECT_ERR");
 FUNC_5(VAR_19, ")\n");

 FUNC_4(VAR_19, "DPS0 = 0x%02x : Protected area [0x%x - 0x%x] : OTP=%d, READ=%d, WRITE=%d, HW_LOCK=%d, KEY_OK=%d\n",
     VAR_23, VAR_24, VAR_25,
     !!(VAR_23 & VAR_8),
     !!(VAR_23 & VAR_9),
     !!(VAR_23 & VAR_10),
     !!(VAR_23 & VAR_6),
     !!(VAR_23 & VAR_7));
 FUNC_4(VAR_19, "DPS1 = 0x%02x : Protected area [0x%x - 0x%x] : OTP=%d, READ=%d, WRITE=%d, HW_LOCK=%d, KEY_OK=%d\n",
     VAR_26, VAR_27, VAR_28,
     !!(VAR_26 & VAR_8),
     !!(VAR_26 & VAR_9),
     !!(VAR_26 & VAR_10),
     !!(VAR_26 & VAR_6),
     !!(VAR_26 & VAR_7));
 return 0;
}
