
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsi_hw {scalar_t__ device_model; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct rsi_hw*,int ,int,int) ;
 int FUNC_3 (struct rsi_hw*,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct rsi_hw *VAR_23)
{
 int VAR_24;

 FUNC_1(VAR_1, "Resetting Card...\n");
 FUNC_2(VAR_23, VAR_12, 0xE, 4);




 FUNC_0(100);

 VAR_24 = FUNC_2(VAR_23, VAR_22,
           VAR_11,
           VAR_9);
 if (VAR_24 < 0) {
  FUNC_1(VAR_0, "Disabling firmware watchdog timer failed\n");
  goto fail;
 }

 if (VAR_23->device_model != VAR_10) {
  VAR_24 = FUNC_3(VAR_23, VAR_19,
      VAR_15, 32);
  if (VAR_24 < 0)
   goto fail;
  VAR_24 = FUNC_3(VAR_23, VAR_20,
      VAR_14, 32);
  if (VAR_24 < 0)
   goto fail;
  VAR_24 = FUNC_3(VAR_23, VAR_17,
      VAR_16, 32);
  if (VAR_24 < 0)
   goto fail;
  VAR_24 = FUNC_3(VAR_23, VAR_18,
      VAR_14, 32);
  if (VAR_24 < 0)
   goto fail;
  VAR_24 = FUNC_3(VAR_23, VAR_21,
      VAR_13, 32);
  if (VAR_24 < 0)
   goto fail;
 } else {
  if ((FUNC_2(VAR_23,
           VAR_2,
           VAR_3,
           VAR_8)) < 0) {
   goto fail;
  }
  if ((FUNC_2(VAR_23,
           VAR_5,
           VAR_6,
           VAR_8)) < 0) {
   goto fail;
  }
  if ((FUNC_2(VAR_23,
           VAR_4,
           VAR_7,
           VAR_8)) < 0) {
   goto fail;
  }
 }

 FUNC_1(VAR_1, "Reset card done\n");
 return VAR_24;

fail:
 FUNC_1(VAR_0, "Reset card failed\n");
 return VAR_24;
}
