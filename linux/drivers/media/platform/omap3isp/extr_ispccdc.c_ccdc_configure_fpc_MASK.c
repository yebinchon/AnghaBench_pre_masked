
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isp_device {int dummy; } ;
struct TYPE_2__ {int dma; int fpnum; } ;
struct isp_ccdc_device {TYPE_1__ fpc; int fpc_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct isp_device*,int ,int ,int) ;
 int FUNC_1 (struct isp_device*,int,int ,int ) ;
 struct isp_device* FUNC_2 (struct isp_ccdc_device*) ;

__attribute__((used)) static void FUNC_3(struct isp_ccdc_device *VAR_5)
{
 struct isp_device *VAR_6 = FUNC_2(VAR_5);

 FUNC_0(VAR_6, VAR_4, VAR_0, VAR_2);

 if (!VAR_5->fpc_en)
  return;

 FUNC_1(VAR_6, VAR_5->fpc.dma, VAR_4,
         VAR_1);

 FUNC_1(VAR_6, (VAR_5->fpc.fpnum << VAR_3),
         VAR_4, VAR_0);
 FUNC_1(VAR_6, (VAR_5->fpc.fpnum << VAR_3) |
         VAR_2, VAR_4, VAR_0);
}
