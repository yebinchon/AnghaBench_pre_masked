
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct b43_wldev *VAR_1,
     u16 VAR_2, u16 VAR_3)
{
 u32 VAR_4;


 VAR_4 = VAR_2;
 VAR_4 <<= 16;
 VAR_4 |= VAR_3;
 FUNC_0(VAR_1, VAR_0, VAR_4);
}
