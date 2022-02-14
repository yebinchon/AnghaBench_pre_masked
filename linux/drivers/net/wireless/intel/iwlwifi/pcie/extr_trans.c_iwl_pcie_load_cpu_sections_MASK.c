
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iwl_trans {int dummy; } ;
struct fw_img {int num_sec; TYPE_1__* sec; } ;
struct TYPE_2__ {scalar_t__ offset; int data; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct iwl_trans*,char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct iwl_trans*,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct iwl_trans *VAR_2,
          const struct fw_img *VAR_3,
          int VAR_4,
          int *VAR_5)
{
 int VAR_6, VAR_7 = 0;
 u32 VAR_8 = 0;

 if (VAR_4 == 1)
  *VAR_5 = 0;
 else
  (*VAR_5)++;

 for (VAR_6 = *VAR_5; VAR_6 < VAR_3->num_sec; VAR_6++) {
  VAR_8 = VAR_6;







  if (!VAR_3->sec[VAR_6].data ||
      VAR_3->sec[VAR_6].offset == VAR_0 ||
      VAR_3->sec[VAR_6].offset == VAR_1) {
   FUNC_0(VAR_2,
         "Break since Data not valid or Empty section, sec = %d\n",
         VAR_6);
   break;
  }

  VAR_7 = FUNC_1(VAR_2, VAR_6, &VAR_3->sec[VAR_6]);
  if (VAR_7)
   return VAR_7;
 }

 *VAR_5 = VAR_8;

 return 0;
}
