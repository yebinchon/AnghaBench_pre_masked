
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bgmac {int feature_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bgmac*,int ,int) ;
 int FUNC_1 (struct bgmac*,int ) ;
 int FUNC_2 (struct bgmac*,int ,int) ;
 int FUNC_3 (struct bgmac*,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct bgmac *VAR_4, u32 VAR_5, u32 VAR_6,
     bool VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_4, VAR_0);
 u32 VAR_9 = (VAR_8 & VAR_5) | VAR_6;
 u32 VAR_10;

 if (VAR_4->feature_flags & VAR_3)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_1;

 FUNC_2(VAR_4, VAR_0, VAR_10);
 FUNC_4(2);

 if (VAR_9 != VAR_8 || VAR_7)
  FUNC_3(VAR_4, VAR_0, VAR_9);

 FUNC_0(VAR_4, VAR_0, ~VAR_10);
 FUNC_4(2);
}
