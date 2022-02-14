
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {int dummy; } ;
typedef int a ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(struct vc_data *VAR_0, u16 *VAR_1, int VAR_2)
{
    int VAR_3 = 1;

    while (VAR_2--) {
 u16 VAR_4 = FUNC_0(VAR_1);

 if (VAR_3)
  VAR_4 = ((VAR_4) & 0x88ff) | (((VAR_4) & 0x7000) >> 4) | (((VAR_4) & 0x0700) << 4);
 else
  VAR_4 = ((VAR_4 & 0x0700) == 0x0100) ? 0x7000 : 0x7700;

 FUNC_1(VAR_4, VAR_1++);
    }
}
