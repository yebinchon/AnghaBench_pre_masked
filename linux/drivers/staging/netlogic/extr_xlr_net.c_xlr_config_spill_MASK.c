
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct xlr_net_priv {int* base_addr; TYPE_1__* ndev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 void* FUNC_0 (void*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (int *,char*,int,unsigned long) ;
 void* FUNC_2 (scalar_t__,int ) ;
 unsigned long FUNC_3 (void*) ;
 int FUNC_4 (int*,int,int) ;

__attribute__((used)) static void *FUNC_5(struct xlr_net_priv *VAR_3, int VAR_4,
         int VAR_5, int VAR_6, int VAR_7)
{
 void *VAR_8;
 u32 *VAR_9;
 unsigned long VAR_10;
 u32 VAR_11;

 VAR_9 = VAR_3->base_addr;
 VAR_11 = VAR_7;
 VAR_8 = FUNC_2(VAR_11 + VAR_1, VAR_0);
 if (!VAR_8)
  return VAR_2;

 VAR_8 = FUNC_0(VAR_8, VAR_1);
 VAR_10 = FUNC_3(VAR_8);
 FUNC_1(&VAR_3->ndev->dev, "Allocated spill %d bytes at %lx\n",
  VAR_7, VAR_10);
 FUNC_4(VAR_9, VAR_4, (VAR_10 >> 5) & 0xffffffff);
 FUNC_4(VAR_9, VAR_5, ((u64)VAR_10 >> 37) & 0x07);
 FUNC_4(VAR_9, VAR_6, VAR_11);

 return VAR_8;
}
