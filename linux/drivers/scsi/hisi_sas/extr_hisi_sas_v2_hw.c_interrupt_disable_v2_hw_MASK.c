
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct hisi_hba {int queue_count; int n_phy; struct platform_device* platform_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct hisi_hba*,int,int ,int) ;
 int FUNC_1 (struct hisi_hba*,scalar_t__,int) ;
 int FUNC_2 (struct platform_device*,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct hisi_hba *VAR_7)
{
 struct platform_device *VAR_8 = VAR_7->platform_dev;
 int VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_7->queue_count; VAR_9++)
  FUNC_1(VAR_7, VAR_5 + 0x4 * VAR_9, 0x1);

 FUNC_1(VAR_7, VAR_2, 0xffffffff);
 FUNC_1(VAR_7, VAR_3, 0xffffffff);
 FUNC_1(VAR_7, VAR_4, 0xffffffff);
 FUNC_1(VAR_7, VAR_6, 0xffffffff);

 for (VAR_9 = 0; VAR_9 < VAR_7->n_phy; VAR_9++) {
  FUNC_0(VAR_7, VAR_9, VAR_0, 0xffffffff);
  FUNC_0(VAR_7, VAR_9, VAR_1, 0xffffffff);
 }

 for (VAR_9 = 0; VAR_9 < 128; VAR_9++)
  FUNC_3(FUNC_2(VAR_8, VAR_9));
}
