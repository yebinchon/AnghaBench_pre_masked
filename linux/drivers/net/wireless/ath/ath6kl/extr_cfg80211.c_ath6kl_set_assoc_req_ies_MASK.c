
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ath6kl_vif {int fw_vif_idx; struct ath6kl* ar; } ;
struct ath6kl {int wmi; int connect_ctrl_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int const*) ;
 scalar_t__ FUNC_2 (int const*) ;
 int FUNC_3 (int ,int ,int ,int*,size_t) ;
 int FUNC_4 (int*) ;
 int* FUNC_5 (size_t,int ) ;
 int FUNC_6 (int*,int const*,int const) ;

__attribute__((used)) static int FUNC_7(struct ath6kl_vif *VAR_4, const u8 *VAR_5,
        size_t VAR_6)
{
 struct ath6kl *VAR_7 = VAR_4->ar;
 const u8 *VAR_8;
 u8 *VAR_9 = ((void*)0);
 size_t VAR_10 = 0;
 int VAR_11;





 VAR_7->connect_ctrl_flags &= ~VAR_0;





 if (VAR_5 && VAR_6) {
  VAR_9 = FUNC_5(VAR_6, VAR_2);
  if (VAR_9 == ((void*)0))
   return -VAR_1;
  VAR_8 = VAR_5;

  while (VAR_8 + 1 < VAR_5 + VAR_6) {
   if (VAR_8 + 2 + VAR_8[1] > VAR_5 + VAR_6)
    break;
   if (!(FUNC_1(VAR_8) || FUNC_0(VAR_8))) {
    FUNC_6(VAR_9 + VAR_10, VAR_8, 2 + VAR_8[1]);
    VAR_10 += 2 + VAR_8[1];
   }

   if (FUNC_2(VAR_8))
    VAR_7->connect_ctrl_flags |= VAR_0;

   VAR_8 += 2 + VAR_8[1];
  }
 }

 VAR_11 = FUNC_3(VAR_7->wmi, VAR_4->fw_vif_idx,
           VAR_3, VAR_9, VAR_10);
 FUNC_4(VAR_9);
 return VAR_11;
}
