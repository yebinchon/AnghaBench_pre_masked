
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct d11txh {int TxFrameID; } ;
struct brcms_c_info {int mc_fid_counter; } ;
struct brcms_bss_cfg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline u16
FUNC_1(struct brcms_c_info *VAR_4, struct brcms_bss_cfg *VAR_5,
    struct d11txh *VAR_6)
{
 u16 VAR_7;

 VAR_7 = FUNC_0(VAR_6->TxFrameID) & ~(VAR_1 |
        VAR_0);
 VAR_7 |=
     (((VAR_4->
        mc_fid_counter++) << VAR_2) & VAR_1) |
     VAR_3;

 return VAR_7;
}
