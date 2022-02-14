
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct gswip_priv {scalar_t__ gswip; } ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int,int,int,int) ;

__attribute__((used)) static u32 FUNC_1(struct gswip_priv *VAR_1, u32 VAR_2,
      u32 VAR_3)
{
 u32 VAR_4;

 return FUNC_0(VAR_0, VAR_1->gswip + (VAR_2 * 4), VAR_4,
      (VAR_4 & VAR_3) == 0, 20, 50000);
}
