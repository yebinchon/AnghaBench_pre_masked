
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lan743x_csr {int id_rev; int flags; void* fpga_rev; int csr_address; } ;
struct lan743x_adapter {int netdev; TYPE_1__* pdev; struct lan743x_csr csr; } ;
typedef int resource_size_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct lan743x_adapter*) ;
 void* FUNC_5 (struct lan743x_adapter*,int ) ;
 int FUNC_6 (struct lan743x_adapter*,int ,int ,char*,int,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct lan743x_adapter *VAR_9)
{
 struct lan743x_csr *VAR_10 = &VAR_9->csr;
 resource_size_t VAR_11, VAR_12;
 int VAR_13;

 VAR_11 = FUNC_8(VAR_9->pdev, 0);
 VAR_12 = FUNC_7(VAR_9->pdev, 0);
 VAR_10->csr_address = FUNC_3(&VAR_9->pdev->dev,
     VAR_11, VAR_12);
 if (!VAR_10->csr_address) {
  VAR_13 = -VAR_1;
  goto clean_up;
 }

 VAR_10->id_rev = FUNC_5(VAR_9, VAR_3);
 VAR_10->fpga_rev = FUNC_5(VAR_9, VAR_2);
 FUNC_6(VAR_9, VAR_8, VAR_9->netdev,
     "ID_REV = 0x%08X, FPGA_REV = %d.%d\n",
     VAR_10->id_rev, FUNC_0(VAR_10->fpga_rev),
     FUNC_1(VAR_10->fpga_rev));
 if (!FUNC_2(VAR_10->id_rev)) {
  VAR_13 = -VAR_0;
  goto clean_up;
 }

 VAR_10->flags = VAR_7;
 switch (VAR_10->id_rev & VAR_4) {
 case 129:
  VAR_10->flags |= VAR_5;
  VAR_10->flags &= ~VAR_7;
  break;
 case 128:
  VAR_10->flags |= VAR_6;
  break;
 }

 VAR_13 = FUNC_4(VAR_9);
 if (VAR_13)
  goto clean_up;
 return 0;
clean_up:
 return VAR_13;
}
