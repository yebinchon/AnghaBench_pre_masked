
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct ath10k {int dummy; } ;
struct TYPE_2__ {int src_nentries; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath10k*,size_t) ;
 int FUNC_1 (struct ath10k*,int ,char*) ;
 int FUNC_2 (struct ath10k*,size_t) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_3(struct ath10k *VAR_2, u8 VAR_3,
      int VAR_4)
{
 int VAR_5;

 FUNC_1(VAR_2, VAR_0, "snoc hif send complete check\n");

 if (!VAR_4) {
  VAR_5 = FUNC_2(VAR_2, VAR_3);

  if (VAR_5 > (VAR_1[VAR_3].src_nentries >> 1))
   return;
 }
 FUNC_0(VAR_2, VAR_3);
}
