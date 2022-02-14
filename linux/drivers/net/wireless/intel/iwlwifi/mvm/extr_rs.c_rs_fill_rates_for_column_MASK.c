
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rs_rate {int index; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_lq_sta {int dummy; } ;
typedef int __le32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rs_rate*) ;
 int FUNC_2 (struct iwl_lq_sta*,struct rs_rate*) ;
 int FUNC_3 (int ,struct rs_rate*) ;
 int FUNC_4 (struct iwl_mvm*,struct rs_rate*) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_1,
         struct iwl_lq_sta *VAR_2,
         struct rs_rate *VAR_3,
         __le32 *VAR_4, int *VAR_5,
         int VAR_6, int VAR_7,
         u8 VAR_8, bool VAR_9)
{
 int VAR_10, VAR_11;
 __le32 VAR_12;
 bool VAR_13 = 0;
 int VAR_14 = VAR_3->index;
 int VAR_15 = VAR_0;
 int VAR_16 = *VAR_5;

 for (VAR_10 = 0; VAR_10 < VAR_6 && VAR_16 < VAR_15; VAR_10++) {
  for (VAR_11 = 0; VAR_11 < VAR_7 && VAR_16 < VAR_15; VAR_11++, VAR_16++) {
   VAR_12 = FUNC_0(FUNC_4(VAR_1,
          VAR_3));
   VAR_4[VAR_16] = VAR_12;
   if (VAR_9)
    FUNC_3(VAR_8, VAR_3);
  }

  VAR_14 = VAR_3->index;
  VAR_13 = FUNC_2(VAR_2, VAR_3);
  if (VAR_13 && !FUNC_1(VAR_3))
   break;
 }

 if (!VAR_13 && !FUNC_1(VAR_3))
  VAR_3->index = VAR_14;

 *VAR_5 = VAR_16;
}
