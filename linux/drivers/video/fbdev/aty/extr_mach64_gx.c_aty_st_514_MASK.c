
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct atyfb_par {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int,struct atyfb_par const*) ;

__attribute__((used)) static void FUNC_1(int VAR_4, u8 VAR_5, const struct atyfb_par *VAR_6)
{
 FUNC_0(VAR_0, 1, VAR_6);

 FUNC_0(VAR_3, VAR_4 & 0xff, VAR_6);

 FUNC_0(VAR_1, (VAR_4 >> 8) & 0xff, VAR_6);
 FUNC_0(VAR_2, VAR_5, VAR_6);
 FUNC_0(VAR_0, 0, VAR_6);
}
