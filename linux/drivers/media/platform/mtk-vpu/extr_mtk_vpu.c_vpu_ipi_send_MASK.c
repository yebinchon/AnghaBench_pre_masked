
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct share_obj {unsigned int len; int id; scalar_t__ share_buf; } ;
struct platform_device {int dummy; } ;
struct mtk_vpu {int* ipi_id_ack; int vpu_mutex; int dev; int ack_wq; struct share_obj* send_buf; } ;
typedef enum ipi_id { ____Placeholder_ipi_id } ipi_id ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,...) ;
 unsigned long VAR_6 ;
 int FUNC_1 (void*,void*,unsigned int) ;
 unsigned long FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct mtk_vpu* FUNC_5 (struct platform_device*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 scalar_t__ FUNC_7 (struct mtk_vpu*,int ) ;
 int FUNC_8 (struct mtk_vpu*,int,int ) ;
 int FUNC_9 (struct mtk_vpu*) ;
 int FUNC_10 (struct mtk_vpu*) ;
 int FUNC_11 (struct mtk_vpu*) ;
 int FUNC_12 (int ,int,unsigned long) ;

int FUNC_13(struct platform_device *VAR_7,
   enum ipi_id VAR_8, void *VAR_9,
   unsigned int VAR_10)
{
 struct mtk_vpu *VAR_11 = FUNC_5(VAR_7);
 struct share_obj *VAR_12 = VAR_11->send_buf;
 unsigned long VAR_13;
 int VAR_14 = 0;

 if (VAR_8 <= VAR_5 || VAR_8 >= VAR_3 ||
     VAR_10 > sizeof(VAR_12->share_buf) || !VAR_9) {
  FUNC_0(VAR_11->dev, "failed to send ipi message\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_10(VAR_11);
 if (VAR_14) {
  FUNC_0(VAR_11->dev, "failed to enable vpu clock\n");
  return VAR_14;
 }
 if (!FUNC_11(VAR_11)) {
  FUNC_0(VAR_11->dev, "vpu_ipi_send: VPU is not running\n");
  VAR_14 = -VAR_0;
  goto clock_disable;
 }

 FUNC_3(&VAR_11->vpu_mutex);


 VAR_13 = VAR_6 + FUNC_2(VAR_4);
 do {
  if (FUNC_6(VAR_6, VAR_13)) {
   FUNC_0(VAR_11->dev, "vpu_ipi_send: IPI timeout!\n");
   VAR_14 = -VAR_1;
   goto mut_unlock;
  }
 } while (FUNC_7(VAR_11, VAR_2));

 FUNC_1((void *)VAR_12->share_buf, VAR_9, VAR_10);
 VAR_12->len = VAR_10;
 VAR_12->id = VAR_8;

 VAR_11->ipi_id_ack[VAR_8] = 0;

 FUNC_8(VAR_11, 0x1, VAR_2);

 FUNC_4(&VAR_11->vpu_mutex);


 VAR_13 = FUNC_2(VAR_4);
 VAR_14 = FUNC_12(VAR_11->ack_wq, VAR_11->ipi_id_ack[VAR_8], VAR_13);
 VAR_11->ipi_id_ack[VAR_8] = 0;
 if (VAR_14 == 0) {
  FUNC_0(VAR_11->dev, "vpu ipi %d ack time out !", VAR_8);
  VAR_14 = -VAR_1;
  goto clock_disable;
 }
 FUNC_9(VAR_11);

 return 0;

mut_unlock:
 FUNC_4(&VAR_11->vpu_mutex);
clock_disable:
 FUNC_9(VAR_11);

 return VAR_14;
}
