
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct device {int dummy; } ;
struct cmdq_pkt {size_t buf_size; int pa_base; struct cmdq_pkt* va_base; void* cl; } ;
struct cmdq_client {TYPE_2__* chan; } ;
typedef int dma_addr_t ;
struct TYPE_4__ {TYPE_1__* mbox; } ;
struct TYPE_3__ {struct device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmdq_pkt* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*,int ) ;
 int FUNC_2 (struct device*,struct cmdq_pkt*,size_t,int ) ;
 scalar_t__ FUNC_3 (struct device*,int ) ;
 int FUNC_4 (struct cmdq_pkt*) ;
 void* FUNC_5 (size_t,int ) ;

struct cmdq_pkt *FUNC_6(struct cmdq_client *VAR_3, size_t VAR_4)
{
 struct cmdq_pkt *VAR_5;
 struct device *VAR_6;
 dma_addr_t VAR_7;

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return FUNC_0(-VAR_1);
 VAR_5->va_base = FUNC_5(VAR_4, VAR_2);
 if (!VAR_5->va_base) {
  FUNC_4(VAR_5);
  return FUNC_0(-VAR_1);
 }
 VAR_5->buf_size = VAR_4;
 VAR_5->cl = (void *)VAR_3;

 VAR_6 = VAR_3->chan->mbox->dev;
 VAR_7 = FUNC_2(VAR_6, VAR_5->va_base, VAR_5->buf_size,
      VAR_0);
 if (FUNC_3(VAR_6, VAR_7)) {
  FUNC_1(VAR_6, "dma map failed, size=%u\n", (u32)(u64)VAR_4);
  FUNC_4(VAR_5->va_base);
  FUNC_4(VAR_5);
  return FUNC_0(-VAR_1);
 }

 VAR_5->pa_base = VAR_7;

 return VAR_5;
}
