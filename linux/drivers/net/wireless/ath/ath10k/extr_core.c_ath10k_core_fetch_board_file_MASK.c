
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dir; } ;
struct TYPE_4__ {TYPE_1__ fw; } ;
struct ath10k {int bd_api; TYPE_2__ hw_params; } ;
typedef int boardname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath10k*,char*,int,int) ;
 int FUNC_1 (struct ath10k*,char*,int) ;
 int FUNC_2 (struct ath10k*,int) ;
 int FUNC_3 (struct ath10k*,char*,char*,int ) ;
 int FUNC_4 (struct ath10k*,int ,char*,int) ;
 int FUNC_5 (struct ath10k*,char*,...) ;

int FUNC_6(struct ath10k *VAR_4, int VAR_5)
{
 char VAR_6[100], VAR_7[100];
 int VAR_8;

 if (VAR_5 == VAR_0) {
  VAR_8 = FUNC_0(VAR_4, VAR_6,
          sizeof(VAR_6), 1);
  if (VAR_8) {
   FUNC_5(VAR_4, "failed to create board name: %d", VAR_8);
   return VAR_8;
  }

  VAR_8 = FUNC_0(VAR_4, VAR_7,
          sizeof(VAR_6), 0);
  if (VAR_8) {
   FUNC_5(VAR_4, "failed to create fallback board name: %d", VAR_8);
   return VAR_8;
  }
 } else if (VAR_5 == VAR_1) {
  VAR_8 = FUNC_1(VAR_4, VAR_6,
           sizeof(VAR_6));
  if (VAR_8) {
   FUNC_5(VAR_4, "fallback to eboard.bin since board id 0");
   goto fallback;
  }
 }

 VAR_4->bd_api = 2;
 VAR_8 = FUNC_3(VAR_4, VAR_6,
       VAR_7,
       VAR_2);
 if (!VAR_8)
  goto success;

fallback:
 VAR_4->bd_api = 1;
 VAR_8 = FUNC_2(VAR_4, VAR_5);
 if (VAR_8) {
  FUNC_5(VAR_4, "failed to fetch board-2.bin or board.bin from %s\n",
      VAR_4->hw_params.fw.dir);
  return VAR_8;
 }

success:
 FUNC_4(VAR_4, VAR_3, "using board api %d\n", VAR_4->bd_api);
 return 0;
}
