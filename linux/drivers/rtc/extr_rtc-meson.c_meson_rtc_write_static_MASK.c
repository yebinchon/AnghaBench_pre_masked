
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct meson_rtc {int peripheral; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int,int,int,int) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct meson_rtc *VAR_6, u32 VAR_7)
{
 u32 VAR_8;

 FUNC_3(VAR_6->peripheral, VAR_4,
       FUNC_0(VAR_5, (VAR_7 >> 8)));


 VAR_8 = FUNC_0(VAR_1, (VAR_7 & 0xff)) | VAR_2;
 FUNC_2(VAR_6->peripheral, VAR_0,
      VAR_1 | VAR_2, VAR_8);


 return FUNC_1(VAR_6->peripheral, VAR_4, VAR_8,
     !(VAR_8 & VAR_3), 10,
     10000);
}
