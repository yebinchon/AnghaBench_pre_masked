
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath10k_fw_ie {void* data; int len; int id; } ;
struct TYPE_2__ {size_t board_len; size_t ext_board_len; void const* ext_board_data; void const* board_data; } ;
struct ath10k {TYPE_1__ normal_mode_fw; } ;


 size_t FUNC_0 (size_t,int) ;
 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ath10k*,int ,char*,char const*) ;
 int FUNC_2 (struct ath10k*,int ,char*,char*,void const*,size_t) ;
 int FUNC_3 (struct ath10k*,char*,size_t,size_t) ;
 int FUNC_4 (struct ath10k*,char*,int) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (void const*,char const*,size_t) ;
 size_t FUNC_7 (char const*) ;

__attribute__((used)) static int FUNC_8(struct ath10k *VAR_5,
      const void *VAR_6, size_t VAR_7,
      const char *VAR_8,
      int VAR_9)
{
 const struct ath10k_fw_ie *VAR_10;
 bool VAR_11;
 int VAR_12, VAR_13;
 size_t VAR_14;
 const void *VAR_15;

 VAR_11 = 0;


 while (VAR_7 > sizeof(struct ath10k_fw_ie)) {
  VAR_10 = VAR_6;
  VAR_13 = FUNC_5(VAR_10->id);
  VAR_14 = FUNC_5(VAR_10->len);
  VAR_15 = VAR_10->data;

  VAR_7 -= sizeof(*VAR_10);
  VAR_6 += sizeof(*VAR_10);

  if (VAR_7 < FUNC_0(VAR_14, 4)) {
   FUNC_3(VAR_5, "invalid ATH10K_BD_IE_BOARD length: %zu < %zu\n",
       VAR_7, FUNC_0(VAR_14, 4));
   VAR_12 = -VAR_3;
   goto out;
  }

  switch (VAR_13) {
  case 128:
   FUNC_2(VAR_5, VAR_2, "board name", "",
     VAR_15, VAR_14);

   if (VAR_14 != FUNC_7(VAR_8))
    break;

   VAR_12 = FUNC_6(VAR_15, VAR_8, FUNC_7(VAR_8));
   if (VAR_12)
    break;

   VAR_11 = 1;
   FUNC_1(VAR_5, VAR_2,
       "boot found match for name '%s'",
       VAR_8);
   break;
  case 129:
   if (!VAR_11)

    break;

   if (VAR_9 == VAR_0) {
    FUNC_1(VAR_5, VAR_2,
        "boot found board data for '%s'",
      VAR_8);

    VAR_5->normal_mode_fw.board_data = VAR_15;
    VAR_5->normal_mode_fw.board_len = VAR_14;
   } else if (VAR_9 == VAR_1) {
    FUNC_1(VAR_5, VAR_2,
        "boot found eboard data for '%s'",
      VAR_8);

    VAR_5->normal_mode_fw.ext_board_data = VAR_15;
    VAR_5->normal_mode_fw.ext_board_len = VAR_14;
   }

   VAR_12 = 0;
   goto out;
  default:
   FUNC_4(VAR_5, "unknown ATH10K_BD_IE_BOARD found: %d\n",
        VAR_13);
   break;
  }


  VAR_14 = FUNC_0(VAR_14, 4);

  VAR_7 -= VAR_14;
  VAR_6 += VAR_14;
 }


 VAR_12 = -VAR_4;

out:
 return VAR_12;
}
