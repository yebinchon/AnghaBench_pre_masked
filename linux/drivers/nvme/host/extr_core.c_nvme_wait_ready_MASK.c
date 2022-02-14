
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvme_ctrl {int device; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* reg_read32 ) (struct nvme_ctrl*,int ,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nvme_ctrl*,int ,int*) ;
 scalar_t__ FUNC_5 (int,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct nvme_ctrl *VAR_7, u64 VAR_8, bool VAR_9)
{
 unsigned long VAR_10 =
  ((FUNC_0(VAR_8) + 1) * VAR_2 / 2) + VAR_6;
 u32 VAR_11, VAR_12 = VAR_9 ? VAR_3 : 0;
 int VAR_13;

 while ((VAR_13 = VAR_7->ops->reg_read32(VAR_7, VAR_4, &VAR_11)) == 0) {
  if (VAR_11 == ~0)
   return -VAR_1;
  if ((VAR_11 & VAR_3) == VAR_12)
   break;

  FUNC_3(100);
  if (FUNC_2(VAR_5))
   return -VAR_0;
  if (FUNC_5(VAR_6, VAR_10)) {
   FUNC_1(VAR_7->device,
    "Device not ready; aborting %s\n", VAR_9 ?
      "initialisation" : "reset");
   return -VAR_1;
  }
 }

 return VAR_13;
}
