
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct cgx_link_user_info {size_t link_up; size_t full_duplex; size_t lmac_type_id; int lmac_type; int speed; } ;
struct cgx {int dummy; } ;


 size_t FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t FUNC_1 (struct cgx*,int ) ;
 char** VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_3(u64 VAR_6,
        struct cgx_link_user_info *VAR_7,
        struct cgx *VAR_8, u8 VAR_9)
{
 char *VAR_10;

 VAR_7->link_up = FUNC_0(VAR_3, VAR_6);
 VAR_7->full_duplex = FUNC_0(VAR_1, VAR_6);
 VAR_7->speed = VAR_5[FUNC_0(VAR_2, VAR_6)];
 VAR_7->lmac_type_id = FUNC_1(VAR_8, VAR_9);
 VAR_10 = VAR_4[VAR_7->lmac_type_id];
 FUNC_2(VAR_7->lmac_type, VAR_10, VAR_0 - 1);
}
