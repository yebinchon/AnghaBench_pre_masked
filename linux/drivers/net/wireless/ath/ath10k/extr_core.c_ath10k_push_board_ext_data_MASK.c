
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_4__ {scalar_t__ board_size; scalar_t__ board_ext_size; } ;
struct TYPE_3__ {TYPE_2__ fw; } ;
struct ath10k {TYPE_1__ hw_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath10k*,int ,scalar_t__*) ;
 int FUNC_1 (struct ath10k*,int ,scalar_t__) ;
 int FUNC_2 (struct ath10k*,scalar_t__,void const*,scalar_t__) ;
 int FUNC_3 (struct ath10k*,int ,char*,scalar_t__) ;
 int FUNC_4 (struct ath10k*,char*,int,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5(struct ath10k *VAR_4, const void *VAR_5,
          size_t VAR_6)
{
 u32 VAR_7 = VAR_4->hw_params.fw.board_size;
 u32 VAR_8 = VAR_4->hw_params.fw.board_ext_size;
 u32 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_4, VAR_2, &VAR_9);
 if (VAR_10) {
  FUNC_4(VAR_4, "could not read board ext data addr (%d)\n",
      VAR_10);
  return VAR_10;
 }

 FUNC_3(VAR_4, VAR_0,
     "boot push board extended data addr 0x%x\n",
     VAR_9);

 if (VAR_9 == 0)
  return 0;

 if (VAR_6 != (VAR_7 + VAR_8)) {
  FUNC_4(VAR_4, "invalid board (ext) data sizes %zu != %d+%d\n",
      VAR_6, VAR_7, VAR_8);
  return -VAR_1;
 }

 VAR_10 = FUNC_2(VAR_4, VAR_9,
          VAR_5 + VAR_7,
          VAR_8);
 if (VAR_10) {
  FUNC_4(VAR_4, "could not write board ext data (%d)\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_1(VAR_4, VAR_3,
     (VAR_8 << 16) | 1);
 if (VAR_10) {
  FUNC_4(VAR_4, "could not write board ext data bit (%d)\n",
      VAR_10);
  return VAR_10;
 }

 return 0;
}
