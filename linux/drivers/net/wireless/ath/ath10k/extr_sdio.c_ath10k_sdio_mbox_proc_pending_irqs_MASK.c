
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ath10k {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ath10k*,int ,char*,int,...) ;
 int FUNC_2 (struct ath10k*) ;
 int FUNC_3 (struct ath10k*) ;
 int FUNC_4 (struct ath10k*) ;
 int FUNC_5 (struct ath10k*,int *,scalar_t__*) ;
 int FUNC_6 (struct ath10k*,scalar_t__,int*) ;

__attribute__((used)) static int FUNC_7(struct ath10k *VAR_4,
           bool *VAR_5)
{
 u8 VAR_6;
 u32 VAR_7;
 int VAR_8;







 VAR_8 = FUNC_5(VAR_4,
            &VAR_6,
            &VAR_7);
 if (VAR_8) {
  *VAR_5 = 1;
  goto out;
 }

 if (!VAR_6 && !VAR_7) {
  VAR_8 = 0;
  *VAR_5 = 1;
  goto out;
 }

 if (VAR_7) {
  FUNC_1(VAR_4, VAR_0,
      "sdio pending mailbox msg lookahead 0x%08x\n",
      VAR_7);

  VAR_8 = FUNC_6(VAR_4,
            VAR_7,
            VAR_5);
  if (VAR_8)
   goto out;
 }


 FUNC_1(VAR_4, VAR_0,
     "sdio host_int_status 0x%x\n", VAR_6);

 if (FUNC_0(VAR_2, VAR_6)) {

  VAR_8 = FUNC_3(VAR_4);
  if (VAR_8)
   goto out;
 }

 if (FUNC_0(VAR_3, VAR_6)) {

  VAR_8 = FUNC_4(VAR_4);
  if (VAR_8)
   goto out;
 }

 if (FUNC_0(VAR_1, VAR_6))

  VAR_8 = FUNC_2(VAR_4);

 VAR_8 = 0;

out:
 FUNC_1(VAR_4, VAR_0,
     "sdio pending irqs done %d status %d",
     *VAR_5, VAR_8);

 return VAR_8;
}
