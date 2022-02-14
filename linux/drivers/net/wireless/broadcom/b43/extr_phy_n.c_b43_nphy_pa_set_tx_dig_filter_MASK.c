
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct b43_wldev {int dummy; } ;
typedef int s16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct b43_wldev*,int ,int const) ;

__attribute__((used)) static void FUNC_2(struct b43_wldev *VAR_0, u16 VAR_1,
       const s16 *VAR_2)
{
 int VAR_3;

 VAR_1 = FUNC_0(VAR_1);

 for (VAR_3 = 0; VAR_3 < 15; VAR_3++, VAR_1++)
  FUNC_1(VAR_0, VAR_1, VAR_2[VAR_3]);
}
