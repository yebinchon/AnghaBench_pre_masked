
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int device_virt_addr; } ;
struct TYPE_8__ {int handle; } ;
struct TYPE_7__ {int mem_size; } ;
struct TYPE_11__ {int op; TYPE_4__ unmap; TYPE_2__ free; TYPE_1__ alloc; } ;
struct TYPE_9__ {int device_virt_addr; int handle; } ;
union hl_mem_args {TYPE_5__ in; TYPE_3__ out; } ;
typedef int u64 ;
typedef int u32 ;
struct hl_fpriv {struct hl_ctx* ctx; struct hl_device* hdev; } ;
struct hl_device {int dev; int dram_supports_virtual_memory; int mmu_enable; int in_reset; } ;
struct hl_ctx {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct hl_ctx*,TYPE_5__*,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (struct hl_ctx*,int ) ;
 scalar_t__ FUNC_5 (struct hl_device*) ;
 int FUNC_6 (struct hl_ctx*,TYPE_5__*,int *) ;
 int FUNC_7 (struct hl_fpriv*,union hl_mem_args*) ;
 int FUNC_8 (union hl_mem_args*,int ,int) ;
 int FUNC_9 (struct hl_ctx*,int ) ;

int FUNC_10(struct hl_fpriv *VAR_3, void *VAR_4)
{
 union hl_mem_args *VAR_5 = VAR_4;
 struct hl_device *VAR_6 = VAR_3->hdev;
 struct hl_ctx *VAR_7 = VAR_3->ctx;
 u64 VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10;

 if (FUNC_5(VAR_6)) {
  FUNC_3(VAR_6->dev,
   "Device is %s. Can't execute MEMORY IOCTL\n",
   FUNC_1(&VAR_6->in_reset) ? "in_reset" : "disabled");
  return -VAR_0;
 }

 if (!VAR_6->mmu_enable)
  return FUNC_7(VAR_3, VAR_5);

 switch (VAR_5->in.op) {
 case 131:
  if (!VAR_6->dram_supports_virtual_memory) {
   FUNC_2(VAR_6->dev, "DRAM alloc is not supported\n");
   VAR_10 = -VAR_1;
   goto out;
  }

  if (VAR_5->in.alloc.mem_size == 0) {
   FUNC_2(VAR_6->dev,
    "alloc size must be larger than 0\n");
   VAR_10 = -VAR_1;
   goto out;
  }
  VAR_10 = FUNC_0(VAR_7, &VAR_5->in, &VAR_9);

  FUNC_8(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->out.handle = (__u64) VAR_9;
  break;

 case 130:
  VAR_10 = FUNC_4(VAR_7, VAR_5->in.free.handle);
  break;

 case 129:
  VAR_10 = FUNC_6(VAR_7, &VAR_5->in, &VAR_8);

  FUNC_8(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->out.device_virt_addr = VAR_8;
  break;

 case 128:
  VAR_10 = FUNC_9(VAR_7,
    VAR_5->in.unmap.device_virt_addr);
  break;

 default:
  FUNC_2(VAR_6->dev, "Unknown opcode for memory IOCTL\n");
  VAR_10 = -VAR_2;
  break;
 }

out:
 return VAR_10;
}
