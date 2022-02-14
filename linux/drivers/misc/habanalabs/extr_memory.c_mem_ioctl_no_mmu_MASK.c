
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int device_virt_addr; int handle; } ;
struct TYPE_9__ {int host_virt_addr; } ;
struct TYPE_8__ {int handle; } ;
struct TYPE_7__ {int mem_size; } ;
struct TYPE_11__ {int op; int flags; TYPE_3__ map_host; TYPE_2__ free; TYPE_1__ alloc; } ;
union hl_mem_args {TYPE_4__ out; TYPE_5__ in; } ;
typedef int u64 ;
typedef int u32 ;
struct hl_fpriv {struct hl_ctx* ctx; struct hl_device* hdev; } ;
struct hl_device {int dev; } ;
struct hl_ctx {int dummy; } ;
typedef int __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (struct hl_ctx*,TYPE_5__*,int *) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct hl_ctx*,int ) ;
 int FUNC_3 (struct hl_ctx*,TYPE_5__*,int *) ;
 int FUNC_4 (union hl_mem_args*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct hl_fpriv *VAR_4, union hl_mem_args *VAR_5)
{
 struct hl_device *VAR_6 = VAR_4->hdev;
 struct hl_ctx *VAR_7 = VAR_4->ctx;
 u64 VAR_8 = 0;
 u32 VAR_9 = 0;
 int VAR_10;

 switch (VAR_5->in.op) {
 case 131:
  if (VAR_5->in.alloc.mem_size == 0) {
   FUNC_1(VAR_6->dev,
    "alloc size must be larger than 0\n");
   VAR_10 = -VAR_0;
   goto out;
  }




  VAR_5->in.flags |= VAR_2;
  VAR_10 = FUNC_0(VAR_7, &VAR_5->in, &VAR_9);

  FUNC_4(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->out.handle = (__u64) VAR_9;
  break;

 case 130:
  VAR_10 = FUNC_2(VAR_7, VAR_5->in.free.handle);
  break;

 case 129:
  if (VAR_5->in.flags & VAR_3) {
   VAR_8 = VAR_5->in.map_host.host_virt_addr;
   VAR_10 = 0;
  } else {
   VAR_10 = FUNC_3(VAR_7, &VAR_5->in,
     &VAR_8);
  }

  FUNC_4(VAR_5, 0, sizeof(*VAR_5));
  VAR_5->out.device_virt_addr = VAR_8;
  break;

 case 128:
  VAR_10 = 0;
  break;

 default:
  FUNC_1(VAR_6->dev, "Unknown opcode for memory IOCTL\n");
  VAR_10 = -VAR_1;
  break;
 }

out:
 return VAR_10;
}
