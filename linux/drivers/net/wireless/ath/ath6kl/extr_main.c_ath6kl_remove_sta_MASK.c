
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct ath6kl {TYPE_1__* sta_list; } ;
struct TYPE_2__ {size_t* mac; int aid; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct ath6kl*,size_t) ;
 scalar_t__ FUNC_2 (size_t*) ;
 scalar_t__ FUNC_3 (size_t*) ;
 scalar_t__ FUNC_4 (size_t*,size_t*,int ) ;

__attribute__((used)) static u8 FUNC_5(struct ath6kl *VAR_3, u8 *VAR_4, u16 VAR_5)
{
 u8 VAR_6, VAR_7 = 0;

 if (FUNC_3(VAR_4))
  return VAR_7;

 if (FUNC_2(VAR_4)) {
  FUNC_0(VAR_1, "deleting all station\n");

  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (!FUNC_3(VAR_3->sta_list[VAR_6].mac)) {
    FUNC_1(VAR_3, VAR_6);
    VAR_7 = 1;
   }
  }
 } else {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (FUNC_4(VAR_3->sta_list[VAR_6].mac, VAR_4, VAR_2) == 0) {
    FUNC_0(VAR_1,
        "deleting station %pM aid=%d reason=%d\n",
        VAR_4, VAR_3->sta_list[VAR_6].aid, VAR_5);
    FUNC_1(VAR_3, VAR_6);
    VAR_7 = 1;
    break;
   }
  }
 }

 return VAR_7;
}
