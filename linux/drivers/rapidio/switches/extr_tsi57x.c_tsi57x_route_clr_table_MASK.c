
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct rio_mport {scalar_t__ sys_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct rio_mport*,scalar_t__,int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct rio_mport *VAR_4, u16 VAR_5, u8 VAR_6,
         u16 VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;

 VAR_9 = (VAR_4->sys_size) ? 0x1ff : 0xff;

 if (VAR_7 == VAR_0) {
  FUNC_2(VAR_4, VAR_5, VAR_6,
       VAR_2, 0x80000000);
  for (VAR_8 = 0; VAR_8 <= VAR_9; VAR_8++)
   FUNC_2(VAR_4, VAR_5, VAR_6,
        VAR_3,
        VAR_1);
 } else {
  FUNC_2(VAR_4, VAR_5, VAR_6,
    FUNC_0(VAR_7), 0x80000000);
  for (VAR_8 = 0; VAR_8 <= VAR_9; VAR_8++)
   FUNC_2(VAR_4, VAR_5, VAR_6,
    FUNC_1(VAR_7) , VAR_1);
 }

 return 0;
}
