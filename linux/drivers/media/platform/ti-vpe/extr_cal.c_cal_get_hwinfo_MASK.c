
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cal_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct cal_dev*,char*,int ) ;
 int FUNC_1 (struct cal_dev*,int ) ;

__attribute__((used)) static void FUNC_2(struct cal_dev *VAR_2)
{
 u32 VAR_3 = 0;
 u32 VAR_4 = 0;

 VAR_3 = FUNC_1(VAR_2, VAR_1);
 FUNC_0(3, VAR_2, "CAL_HL_REVISION = 0x%08x (expecting 0x40000200)\n",
  VAR_3);

 VAR_4 = FUNC_1(VAR_2, VAR_0);
 FUNC_0(3, VAR_2, "CAL_HL_HWINFO = 0x%08x (expecting 0xA3C90469)\n",
  VAR_4);
}
