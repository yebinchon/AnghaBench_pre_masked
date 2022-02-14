
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* fw_board; char* fw_default_board; } ;
struct ath6kl {int fw_board_len; int * fw_board; TYPE_1__ hw; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (struct ath6kl*,char const*,int **,int *) ;
 int FUNC_3 (char*,...) ;
 scalar_t__ FUNC_4 (struct ath6kl*) ;

__attribute__((used)) static int FUNC_5(struct ath6kl *VAR_1)
{
 const char *VAR_2;
 int VAR_3;

 if (VAR_1->fw_board != ((void*)0))
  return 0;

 if (FUNC_0(VAR_1->hw.fw_board == ((void*)0)))
  return -VAR_0;

 VAR_2 = VAR_1->hw.fw_board;

 VAR_3 = FUNC_2(VAR_1, VAR_2, &VAR_1->fw_board,
       &VAR_1->fw_board_len);
 if (VAR_3 == 0) {

  return 0;
 }

 if (FUNC_4(VAR_1)) {

  return 0;
 }


 FUNC_3("Failed to get board file %s (%d), trying to find default board file.\n",
      VAR_2, VAR_3);

 VAR_2 = VAR_1->hw.fw_default_board;

 VAR_3 = FUNC_2(VAR_1, VAR_2, &VAR_1->fw_board,
       &VAR_1->fw_board_len);
 if (VAR_3) {
  FUNC_1("Failed to get default board file %s: %d\n",
      VAR_2, VAR_3);
  return VAR_3;
 }

 FUNC_3("WARNING! No proper board file was not found, instead using a default board file.\n");
 FUNC_3("Most likely your hardware won't work as specified. Install correct board file!\n");

 return 0;
}
