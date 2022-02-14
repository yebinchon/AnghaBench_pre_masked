
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct btc_coexist {int dummy; } ;
struct TYPE_2__ {int cur_ss_type; int cur_ra_mask_type; } ;


 int FUNC_0 (struct btc_coexist*,int,int ) ;
 int FUNC_1 (struct btc_coexist*,int,int ) ;
 int FUNC_2 (struct btc_coexist*,int ,int ) ;
 int FUNC_3 (struct btc_coexist*,int,int ) ;
 int FUNC_4 (struct btc_coexist*,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_5(struct btc_coexist *VAR_1,
        bool VAR_2, u8 VAR_3,
        u8 VAR_4, u8 VAR_5,
        u8 VAR_6)
{
 u32 VAR_7 = 0x0;

 VAR_0->cur_ra_mask_type = VAR_3;
 VAR_7 =
   FUNC_2(VAR_1, VAR_0->cur_ss_type,
          VAR_3);
 FUNC_4(VAR_1, VAR_2, VAR_7);
 FUNC_1(VAR_1, VAR_2, VAR_4);
 FUNC_3(VAR_1, VAR_2, VAR_5);
 FUNC_0(VAR_1, VAR_2, VAR_6);
}
