
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_device {int dummy; } ;
struct isp_csi2_device {int regs1; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (struct isp_device*,int ,int ,int ) ;
 int FUNC_3 (struct isp_device*,int ,int ,int ) ;
 int FUNC_4 (struct isp_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct isp_device *VAR_1,
        struct isp_csi2_device *VAR_2, int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 8; VAR_4++) {
  FUNC_4(VAR_1, VAR_0, VAR_2->regs1,
          FUNC_1(VAR_4));
  if (VAR_3)
   FUNC_3(VAR_1, VAR_2->regs1, FUNC_0(VAR_4),
        VAR_0);
  else
   FUNC_2(VAR_1, VAR_2->regs1, FUNC_0(VAR_4),
        VAR_0);
 }
}
