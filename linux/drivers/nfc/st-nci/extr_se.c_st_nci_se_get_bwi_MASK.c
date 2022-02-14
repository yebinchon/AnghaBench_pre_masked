
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int* atr; } ;
struct st_nci_info {TYPE_1__ se_info; } ;
struct nci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 struct st_nci_info* FUNC_3 (struct nci_dev*) ;

__attribute__((used)) static u8 FUNC_4(struct nci_dev *VAR_2)
{
 int VAR_3;
 u8 VAR_4;
 struct st_nci_info *VAR_5 = FUNC_3(VAR_2);


 for (VAR_3 = 1; VAR_3 < VAR_1; VAR_3++) {
  VAR_4 = FUNC_0(VAR_5->se_info.atr[VAR_3]);
  if (FUNC_1(VAR_4))
   VAR_3++;
  if (FUNC_2(VAR_4)) {
   VAR_3++;
   return VAR_5->se_info.atr[VAR_3] >> 4;
  }
 }
 return VAR_0;
}
