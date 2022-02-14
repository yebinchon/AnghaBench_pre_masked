
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;


 int FUNC_0 (int const*) ;



 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_1 (struct b43_wldev*) ;
 int FUNC_2 (struct b43_wldev*) ;
 int FUNC_3 (struct b43_wldev*) ;
 int FUNC_4 (struct b43_wldev*,int const,int) ;
 int FUNC_5 (struct b43_wldev*,int const,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct b43_wldev*) ;

__attribute__((used)) static void FUNC_8(struct b43_wldev *VAR_3)
{
 static const u16 VAR_4[] = { 130, 129, 128 };
 int VAR_5;


 FUNC_2(VAR_3);

 FUNC_7(VAR_3);

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_4); VAR_5++)
  FUNC_5(VAR_3, VAR_4[VAR_5] | 0x146, 0x3);



 FUNC_5(VAR_3, VAR_1, 0x0078);
 FUNC_5(VAR_3, VAR_2, 0x0080);
 FUNC_6(2);
 FUNC_4(VAR_3, VAR_1, ~0x0078);
 FUNC_4(VAR_3, VAR_2, ~0x0080);

 if (1) {
  FUNC_3(VAR_3);
  FUNC_1(VAR_3);
 }

 FUNC_4(VAR_3, VAR_0, ~0x0008);
}
