
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct dsaf_device {int dsaf_mode; int dsaf_ver; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct dsaf_device*,scalar_t__,int ,int ,int) ;
 int FUNC_2 (int ,int*,int*) ;

__attribute__((used)) static void FUNC_3(struct dsaf_device *VAR_4)
{
 u16 VAR_5, VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9;

 if (FUNC_0(VAR_4->dsaf_ver))
  return;

 FUNC_2(VAR_4->dsaf_mode, &VAR_6, &VAR_5);
 VAR_8 = VAR_6 * VAR_5;

 for (VAR_9 = 0, VAR_7 = 0; VAR_9 < VAR_3; VAR_9++) {
  FUNC_1(VAR_4,
       VAR_0 + 4 * VAR_9,
       VAR_1,
       VAR_2,
       VAR_7);
  VAR_7 += VAR_8;
 }
}
