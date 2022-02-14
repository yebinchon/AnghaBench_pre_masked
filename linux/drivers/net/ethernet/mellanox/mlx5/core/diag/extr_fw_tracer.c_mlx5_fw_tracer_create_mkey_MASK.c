
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef void u32 ;
struct TYPE_2__ {int pdn; int mkey; scalar_t__ size; scalar_t__ dma; } ;
struct mlx5_fw_tracer {TYPE_1__ buff; struct mlx5_core_dev* dev; } ;
struct mlx5_core_dev {int dummy; } ;
typedef int __be64 ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (void*,void*,int ) ;
 int VAR_2 ;
 int FUNC_2 (void*,void*,int ,int) ;
 int FUNC_3 (void*,void*,int ,scalar_t__) ;
 int FUNC_4 (void*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (scalar_t__) ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (struct mlx5_core_dev*,int *,void*,int) ;
 int FUNC_9 (struct mlx5_core_dev*,char*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_10 (int,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_11(struct mlx5_fw_tracer *VAR_20)
{
 struct mlx5_core_dev *VAR_21 = VAR_20->dev;
 int VAR_22, VAR_23, VAR_24;
 __be64 *VAR_25;
 void *VAR_26;
 u32 *VAR_27;

 VAR_23 = FUNC_4(VAR_8) +
   sizeof(*VAR_25) * FUNC_10(VAR_5, 2);

 VAR_27 = FUNC_7(VAR_23, VAR_1);
 if (!VAR_27)
  return -VAR_0;

 FUNC_2(VAR_8, VAR_27, VAR_18,
   FUNC_0(VAR_5, 2));
 VAR_25 = (u64 *)FUNC_1(VAR_8, VAR_27, VAR_9);
 for (VAR_24 = 0 ; VAR_24 < VAR_5 ; VAR_24++)
  VAR_25[VAR_24] = FUNC_5(VAR_20->buff.dma + VAR_24 * VAR_4);

 VAR_26 = FUNC_1(VAR_8, VAR_27, VAR_14);
 FUNC_2(VAR_26, VAR_26, VAR_6, VAR_2);
 FUNC_2(VAR_26, VAR_26, VAR_12, 1);
 FUNC_2(VAR_26, VAR_26, VAR_13, 1);
 FUNC_2(VAR_26, VAR_26, VAR_15, VAR_20->buff.pdn);
 FUNC_2(VAR_26, VAR_26, VAR_7, 0);
 FUNC_2(VAR_26, VAR_26, VAR_16, 0xffffff);
 FUNC_2(VAR_26, VAR_26, VAR_11, VAR_3);
 FUNC_2(VAR_26, VAR_26, VAR_19,
   FUNC_0(VAR_5, 2));
 FUNC_3(VAR_26, VAR_26, VAR_17, VAR_20->buff.dma);
 FUNC_3(VAR_26, VAR_26, VAR_10, VAR_20->buff.size);
 VAR_22 = FUNC_8(VAR_21, &VAR_20->buff.mkey, VAR_27, VAR_23);
 if (VAR_22)
  FUNC_9(VAR_21, "FWTracer: Failed to create mkey, %d\n", VAR_22);

 FUNC_6(VAR_27);

 return VAR_22;
}
