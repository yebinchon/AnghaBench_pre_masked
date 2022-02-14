
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct b43_wldev*,int ,int ) ;

u64 FUNC_1(struct b43_wldev *VAR_4)
{
 u64 VAR_5;

 VAR_5 = FUNC_0(VAR_4, VAR_0, VAR_3);
 VAR_5 <<= 16;
 VAR_5 |= FUNC_0(VAR_4, VAR_0, VAR_2);
 VAR_5 <<= 16;
 VAR_5 |= FUNC_0(VAR_4, VAR_0, VAR_1);

 return VAR_5;
}
