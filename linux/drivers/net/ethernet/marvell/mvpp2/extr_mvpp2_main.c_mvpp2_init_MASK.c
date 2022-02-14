
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct platform_device {int dev; } ;
struct mvpp2 {scalar_t__ hw_version; scalar_t__ lms_base; TYPE_1__* aggr_txqs; scalar_t__ iface_base; } ;
struct mbus_dram_target_info {int dummy; } ;
struct TYPE_3__ {int id; int size; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_1__* FUNC_0 (int *,int,int,int ) ;
 struct mbus_dram_target_info* FUNC_1 () ;
 int FUNC_2 (struct mvpp2*) ;
 int FUNC_3 (struct mvpp2*) ;
 int FUNC_4 (struct platform_device*,TYPE_1__*,int,struct mvpp2*) ;
 int FUNC_5 (struct mvpp2*) ;
 int FUNC_6 (int *,struct mvpp2*) ;
 int FUNC_7 (struct mvpp2*) ;
 int FUNC_8 (struct mbus_dram_target_info const*,struct mvpp2*) ;
 int FUNC_9 (struct platform_device*,struct mvpp2*) ;
 int FUNC_10 (struct mvpp2*) ;
 int FUNC_11 (struct mvpp2*,int ,int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_13, struct mvpp2 *VAR_14)
{
 const struct mbus_dram_target_info *VAR_15;
 int VAR_16, VAR_17;
 u32 VAR_18;


 VAR_15 = FUNC_1();
 if (VAR_15)
  FUNC_8(VAR_15, VAR_14);

 if (VAR_14->hw_version == VAR_3)
  FUNC_5(VAR_14);


 if (VAR_14->hw_version == VAR_2) {
  VAR_18 = FUNC_12(VAR_14->lms_base + VAR_10);
  VAR_18 |= VAR_11;
  FUNC_13(VAR_18, VAR_14->lms_base + VAR_10);
 } else {
  VAR_18 = FUNC_12(VAR_14->iface_base + VAR_4);
  VAR_18 &= ~VAR_5;
  FUNC_13(VAR_18, VAR_14->iface_base + VAR_4);
 }


 VAR_14->aggr_txqs = FUNC_0(&VAR_13->dev, VAR_8,
           sizeof(*VAR_14->aggr_txqs),
           VAR_1);
 if (!VAR_14->aggr_txqs)
  return -VAR_0;

 for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
  VAR_14->aggr_txqs[VAR_17].id = VAR_17;
  VAR_14->aggr_txqs[VAR_17].size = VAR_6;
  VAR_16 = FUNC_4(VAR_13, &VAR_14->aggr_txqs[VAR_17], VAR_17, VAR_14);
  if (VAR_16 < 0)
   return VAR_16;
 }


 if (VAR_14->hw_version == VAR_2) {
  FUNC_10(VAR_14);
 } else {
  FUNC_2(VAR_14);
  FUNC_3(VAR_14);
 }

 if (VAR_14->hw_version == VAR_2)
  FUNC_13(VAR_7,
         VAR_14->lms_base + VAR_9);


 FUNC_11(VAR_14, VAR_12, 0x1);


 VAR_16 = FUNC_6(&VAR_13->dev, VAR_14);
 if (VAR_16 < 0)
  return VAR_16;


 VAR_16 = FUNC_9(VAR_13, VAR_14);
 if (VAR_16 < 0)
  return VAR_16;


 FUNC_7(VAR_14);

 return 0;
}
