
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dsaf_device*,scalar_t__) ;
 int FUNC_1 (int,int ,int ,int) ;
 int FUNC_2 (struct dsaf_device*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_3(struct dsaf_device *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_8 = FUNC_0(
   VAR_7, VAR_2 + 0x40 * VAR_9);
  if (VAR_9 < VAR_6) {
   FUNC_1(VAR_8,
           VAR_0,
           VAR_1, 930);
   FUNC_1(VAR_8,
           VAR_3,
           VAR_4, 950);
  } else {
   FUNC_1(VAR_8,
           VAR_0,
           VAR_1, 220);
   FUNC_1(VAR_8,
           VAR_3,
           VAR_4, 230);
  }
  FUNC_2(
   VAR_7, VAR_2 + 0x40 * VAR_9,
   VAR_8);
 }
}
