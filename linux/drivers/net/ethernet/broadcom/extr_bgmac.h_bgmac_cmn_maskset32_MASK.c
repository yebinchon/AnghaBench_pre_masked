
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bgmac {int (* cmn_maskset32 ) (struct bgmac*,int ,int ,int ) ;} ;


 int FUNC_0 (struct bgmac*,int ,int ,int ) ;

__attribute__((used)) static inline void FUNC_1(struct bgmac *VAR_0, u16 VAR_1,
           u32 VAR_2, u32 VAR_3)
{
 VAR_0->cmn_maskset32(VAR_0, VAR_1, VAR_2, VAR_3);
}
