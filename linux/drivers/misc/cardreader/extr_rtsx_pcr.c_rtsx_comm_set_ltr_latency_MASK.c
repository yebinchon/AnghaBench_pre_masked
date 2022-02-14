
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtsx_pcr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct rtsx_pcr*,int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct rtsx_pcr *VAR_10, u32 VAR_11)
{
 FUNC_0(VAR_10, VAR_6,
    VAR_5, (u8) (VAR_11 & 0xFF));
 FUNC_0(VAR_10, VAR_7,
    VAR_5, (u8)((VAR_11 >> 8) & 0xFF));
 FUNC_0(VAR_10, VAR_8,
    VAR_5, (u8)((VAR_11 >> 16) & 0xFF));
 FUNC_0(VAR_10, VAR_9,
    VAR_5, (u8)((VAR_11 >> 24) & 0xFF));
 FUNC_0(VAR_10, VAR_0, VAR_4 |
  VAR_1, VAR_3 | VAR_2);

 return 0;
}
