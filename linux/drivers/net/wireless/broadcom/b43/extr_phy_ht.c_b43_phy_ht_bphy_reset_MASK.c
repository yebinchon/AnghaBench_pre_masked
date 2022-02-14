
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct b43_wldev*,int ,int) ;
 int FUNC_1 (struct b43_wldev*,int ,int) ;
 int FUNC_2 (struct b43_wldev*,int ) ;
 int FUNC_3 (struct b43_wldev*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct b43_wldev *VAR_5, bool VAR_6)
{
 u16 VAR_7;

 VAR_7 = FUNC_2(VAR_5, VAR_0);
 FUNC_3(VAR_5, VAR_0,
      VAR_7 | VAR_4);


 if (VAR_6)
  FUNC_1(VAR_5, VAR_1,
       VAR_2 | VAR_3);
 else
  FUNC_0(VAR_5, VAR_1,
        (u16)~(VAR_2 |
        VAR_3));

 FUNC_3(VAR_5, VAR_0, VAR_7);
}
