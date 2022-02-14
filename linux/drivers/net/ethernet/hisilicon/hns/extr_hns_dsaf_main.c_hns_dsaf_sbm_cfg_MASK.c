
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct dsaf_device*) ;
 int FUNC_1 (struct dsaf_device*,scalar_t__) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct dsaf_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_4(struct dsaf_device *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_3); VAR_5++) {
  VAR_4 = FUNC_1(VAR_3,
       VAR_1 + 0x80 * VAR_5);
  FUNC_2(VAR_4, VAR_0, 1);
  FUNC_2(VAR_4, VAR_2, 0);
  FUNC_3(VAR_3,
          VAR_1 + 0x80 * VAR_5, VAR_4);
 }
}
