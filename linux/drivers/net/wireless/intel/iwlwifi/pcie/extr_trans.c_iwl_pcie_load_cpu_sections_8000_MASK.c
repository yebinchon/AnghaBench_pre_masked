
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {TYPE_1__* trans_cfg; } ;
struct fw_img {int num_sec; TYPE_2__* sec; } ;
struct TYPE_4__ {scalar_t__ offset; int data; } ;
struct TYPE_3__ {scalar_t__ use_tfh; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_trans*,char*,int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct iwl_trans*) ;
 int FUNC_2 (struct iwl_trans*,int,TYPE_2__*) ;
 int FUNC_3 (struct iwl_trans*,int ) ;
 int FUNC_4 (struct iwl_trans*,int ,int) ;
 int FUNC_5 (struct iwl_trans*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct iwl_trans *VAR_4,
        const struct fw_img *VAR_5,
        int VAR_6,
        int *VAR_7)
{
 int VAR_8;
 int VAR_9, VAR_10 = 0, VAR_11 = 0x1;
 u32 VAR_12, VAR_13 = 0;

 if (VAR_6 == 1) {
  VAR_8 = 0;
  *VAR_7 = 0;
 } else {
  VAR_8 = 16;
  (*VAR_7)++;
 }

 for (VAR_9 = *VAR_7; VAR_9 < VAR_5->num_sec; VAR_9++) {
  VAR_13 = VAR_9;







  if (!VAR_5->sec[VAR_9].data ||
      VAR_5->sec[VAR_9].offset == VAR_0 ||
      VAR_5->sec[VAR_9].offset == VAR_2) {
   FUNC_0(VAR_4,
         "Break since Data not valid or Empty section, sec = %d\n",
         VAR_9);
   break;
  }

  VAR_10 = FUNC_2(VAR_4, VAR_9, &VAR_5->sec[VAR_9]);
  if (VAR_10)
   return VAR_10;


  VAR_12 = FUNC_3(VAR_4, VAR_1);
  VAR_12 = VAR_12 | (VAR_11 << VAR_8);
  FUNC_4(VAR_4, VAR_1, VAR_12);

  VAR_11 = (VAR_11 << 1) | 0x1;
 }

 *VAR_7 = VAR_13;

 FUNC_1(VAR_4);

 if (VAR_4->trans_cfg->use_tfh) {
  if (VAR_6 == 1)
   FUNC_5(VAR_4, VAR_3,
           0xFFFF);
  else
   FUNC_5(VAR_4, VAR_3,
           0xFFFFFFFF);
 } else {
  if (VAR_6 == 1)
   FUNC_4(VAR_4, VAR_1,
        0xFFFF);
  else
   FUNC_4(VAR_4, VAR_1,
        0xFFFFFFFF);
 }

 return 0;
}
