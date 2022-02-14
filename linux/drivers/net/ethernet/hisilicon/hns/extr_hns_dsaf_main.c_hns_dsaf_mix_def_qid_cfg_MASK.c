
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dsaf_device {int dsaf_mode; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dsaf_device*,scalar_t__,int,int ,int) ;
 int FUNC_1 (int ,int*,int*) ;

__attribute__((used)) static void FUNC_2(struct dsaf_device *VAR_2)
{
 u16 VAR_3, VAR_4;
 u32 VAR_5, VAR_6;
 u32 VAR_7;

 FUNC_1(VAR_2->dsaf_mode, &VAR_4, &VAR_3);
 VAR_6 = VAR_4 * VAR_3;

 for (VAR_7 = 0, VAR_5 = 0; VAR_7 < VAR_1; VAR_7++) {
  FUNC_0(VAR_2,
       VAR_0 + 0x0004 * VAR_7,
       0xff, 0, VAR_5);
  VAR_5 += VAR_6;
 }
}
