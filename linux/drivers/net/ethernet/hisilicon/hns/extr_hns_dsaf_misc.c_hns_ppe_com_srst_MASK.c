
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct dsaf_device {int reset_offset; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dsaf_device*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dsaf_device*,int,int) ;

__attribute__((used)) static void FUNC_3(struct dsaf_device *VAR_5, bool VAR_6)
{
 u32 VAR_7;
 u32 VAR_8;

 if (!(FUNC_1(VAR_5->dev)))
  return;

 if (!FUNC_0(VAR_5)) {
  VAR_7 = VAR_4;
  if (!VAR_6)
   VAR_8 = VAR_3;
  else
   VAR_8 = VAR_2;

 } else {
  VAR_7 = 0x100 << VAR_5->reset_offset;

  if (!VAR_6)
   VAR_8 = VAR_1;
  else
   VAR_8 = VAR_0;
 }

 FUNC_2(VAR_5, VAR_8, VAR_7);
}
