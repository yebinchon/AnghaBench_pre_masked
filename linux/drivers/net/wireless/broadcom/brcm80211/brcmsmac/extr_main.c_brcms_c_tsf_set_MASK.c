
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct brcms_c_info {TYPE_1__* hw; } ;
struct TYPE_2__ {int d11core; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct brcms_c_info*) ;
 int FUNC_3 (struct brcms_c_info*) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_4(struct brcms_c_info *VAR_2, u64 VAR_3)
{
 u32 VAR_4, VAR_5;

 FUNC_2(VAR_2);

 VAR_5 = VAR_3;
 VAR_4 = (VAR_3 >> 32);


 FUNC_1(VAR_2->hw->d11core, FUNC_0(VAR_1), VAR_5);
 FUNC_1(VAR_2->hw->d11core, FUNC_0(VAR_0), VAR_4);

 FUNC_3(VAR_2);
}
