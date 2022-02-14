
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bgmac {int feature_flags; int has_robosw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bgmac*,int) ;
 int FUNC_1 (struct bgmac*,int ) ;
 int FUNC_2 (struct bgmac*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct bgmac *VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7, VAR_1);
 if (VAR_7->feature_flags & VAR_5)
  VAR_8 &= ~VAR_4;


 if (!(VAR_7->feature_flags & VAR_6)) {
  u32 VAR_9 = 0;

  if (VAR_8 & VAR_4) {
   VAR_9 = VAR_2;
   if (!VAR_7->has_robosw)
    VAR_9 |= VAR_3;
  }
  FUNC_0(VAR_7, VAR_9);
 }

 if (VAR_8 & VAR_4 && !VAR_7->has_robosw)
  FUNC_2(VAR_7, VAR_0,
    FUNC_1(VAR_7, VAR_0) &
    ~VAR_3);
}
