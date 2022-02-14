
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct twl_rtc {int * reg_map; } ;


 int VAR_0 ;
 int FUNC_0 (char*,size_t,int) ;
 int FUNC_1 (int ,size_t*,int ) ;

__attribute__((used)) static int FUNC_2(struct twl_rtc *VAR_1, u8 *VAR_2, u8 VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_2, (VAR_1->reg_map[VAR_3]));
 if (VAR_4 < 0)
  FUNC_0("Could not read TWL register %X - error %d\n", VAR_3, VAR_4);
 return VAR_4;
}
