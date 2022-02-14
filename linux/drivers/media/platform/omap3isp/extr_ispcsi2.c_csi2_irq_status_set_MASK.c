
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct isp_device {int dummy; } ;
struct isp_csi2_device {int regs1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct isp_device*,int ,int ) ;
 int FUNC_2 (struct isp_device*,int,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct isp_device *VAR_9,
    struct isp_csi2_device *VAR_10, int VAR_11)
{
 u32 VAR_12;
 VAR_12 = VAR_7 |
  VAR_8 |
  VAR_4 |
  VAR_5 |
  VAR_3 |
  VAR_2 |
  VAR_6 |
  FUNC_0(0);
 FUNC_2(VAR_9, VAR_12, VAR_10->regs1, VAR_1);
 if (VAR_11)
  VAR_12 |= FUNC_1(VAR_9, VAR_10->regs1, VAR_0);
 else
  VAR_12 = 0;

 FUNC_2(VAR_9, VAR_12, VAR_10->regs1, VAR_0);
}
