
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bgmac {int feature_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct bgmac*,scalar_t__) ;
 int FUNC_1 (struct bgmac*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct bgmac *VAR_7)
{
 int VAR_8;

 if (VAR_7->feature_flags & VAR_2)
  return;

 FUNC_1(VAR_7, VAR_1, VAR_0);
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  FUNC_0(VAR_7, VAR_6 + (VAR_8 * 4));
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_0(VAR_7, VAR_5 + (VAR_8 * 4));
}
