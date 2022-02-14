
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct bgmac {int (* idm_read ) (struct bgmac*,int ) ;} ;


 int FUNC_0 (struct bgmac*,int ) ;

__attribute__((used)) static inline u32 FUNC_1(struct bgmac *VAR_0, u16 VAR_1)
{
 return VAR_0->idm_read(VAR_0, VAR_1);
}
