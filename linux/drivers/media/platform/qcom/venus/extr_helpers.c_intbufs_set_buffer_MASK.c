
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct venus_inst {int internalbufs; struct venus_core* core; } ;
struct venus_core {struct device* dev; } ;
struct intbuf {int attrs; int da; int va; scalar_t__ size; int list; int type; } ;
struct hfi_buffer_requirements {unsigned int count_actual; scalar_t__ size; int type; } ;
struct hfi_buffer_desc {int num_buffers; int device_addr; int buffer_type; scalar_t__ buffer_size; } ;
struct device {int dummy; } ;
typedef int bd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,scalar_t__,int *,int ,int) ;
 int FUNC_2 (struct device*,scalar_t__,int ,int ,int) ;
 int FUNC_3 (struct venus_inst*,struct hfi_buffer_desc*) ;
 int FUNC_4 (struct intbuf*) ;
 struct intbuf* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct hfi_buffer_desc*,int ,int) ;
 int FUNC_8 (struct venus_inst*,int ,struct hfi_buffer_requirements*) ;

__attribute__((used)) static int FUNC_9(struct venus_inst *VAR_4, u32 VAR_5)
{
 struct venus_core *VAR_6 = VAR_4->core;
 struct device *VAR_7 = VAR_6->dev;
 struct hfi_buffer_requirements VAR_8;
 struct hfi_buffer_desc VAR_9;
 struct intbuf *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_12 = FUNC_8(VAR_4, VAR_5, &VAR_8);
 if (VAR_12)
  return 0;

 if (!VAR_8.size)
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_8.count_actual; VAR_11++) {
  VAR_10 = FUNC_5(sizeof(*VAR_10), VAR_3);
  if (!VAR_10) {
   VAR_12 = -VAR_2;
   goto fail;
  }

  VAR_10->type = VAR_8.type;
  VAR_10->size = VAR_8.size;
  VAR_10->attrs = VAR_1 |
        VAR_0;
  VAR_10->va = FUNC_1(VAR_7, VAR_10->size, &VAR_10->da, VAR_3,
       VAR_10->attrs);
  if (!VAR_10->va) {
   VAR_12 = -VAR_2;
   goto fail;
  }

  FUNC_7(&VAR_9, 0, sizeof(VAR_9));
  VAR_9.buffer_size = VAR_10->size;
  VAR_9.buffer_type = VAR_10->type;
  VAR_9.num_buffers = 1;
  VAR_9.device_addr = VAR_10->da;

  VAR_12 = FUNC_3(VAR_4, &VAR_9);
  if (VAR_12) {
   FUNC_0(VAR_7, "set session buffers failed\n");
   goto dma_free;
  }

  FUNC_6(&VAR_10->list, &VAR_4->internalbufs);
 }

 return 0;

dma_free:
 FUNC_2(VAR_7, VAR_10->size, VAR_10->va, VAR_10->da, VAR_10->attrs);
fail:
 FUNC_4(VAR_10);
 return VAR_12;
}
