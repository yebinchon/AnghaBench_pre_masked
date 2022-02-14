
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sta_info {int bssratelen; int bssrateset; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(struct sta_info *VAR_2, u8 VAR_3)
{
 if (FUNC_0(VAR_3)) {

  FUNC_1(VAR_2->bssrateset, VAR_0, 4);
  VAR_2->bssratelen = 4;
 } else {
  FUNC_1(VAR_2->bssrateset, VAR_1, 3);
  VAR_2->bssratelen = 3;
 }
}
