
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct pci_dev {int dummy; } ;
struct mlx4_dev {int flags; int * dev_vfs; TYPE_1__* persist; } ;
struct TYPE_2__ {int num_vfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,char*,...) ;
 int FUNC_6 (struct mlx4_dev*,char*,...) ;
 int FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (struct pci_dev*) ;
 int VAR_6 ;

__attribute__((used)) static u64 FUNC_9(struct mlx4_dev *VAR_7, struct pci_dev *VAR_8,
        u8 VAR_9, int VAR_10, int VAR_11)
{
 u64 VAR_12 = VAR_7->flags;
 int VAR_13 = 0;
 int VAR_14 = FUNC_4(FUNC_8(VAR_8),
     VAR_5);

 if (VAR_11) {
  VAR_7->dev_vfs = FUNC_2(VAR_9, sizeof(*VAR_7->dev_vfs),
           VAR_1);
  if (!VAR_7->dev_vfs)
   goto free_mem;
  return VAR_12;
 }

 FUNC_1(&VAR_6);
 if (VAR_7->flags & VAR_4) {
  if (VAR_10 != VAR_9) {
   FUNC_5(VAR_7, "SR-IOV was already enabled, but with num_vfs (%d) different than requested (%d)\n",
     VAR_10, VAR_9);
   VAR_9 = VAR_10;
  }
 }

 VAR_7->dev_vfs = FUNC_2(VAR_9, sizeof(*VAR_7->dev_vfs), VAR_1);
 if (((void*)0) == VAR_7->dev_vfs) {
  FUNC_5(VAR_7, "Failed to allocate memory for VFs\n");
  goto disable_sriov;
 }

 if (!(VAR_7->flags & VAR_4)) {
  if (VAR_9 > VAR_14) {
   FUNC_5(VAR_7, "requested vfs (%d) > available vfs (%d). Continuing without SR_IOV\n",
     VAR_9, VAR_14);
   VAR_13 = -VAR_0;
   goto disable_sriov;
  }
  FUNC_6(VAR_7, "Enabling SR-IOV with %d VFs\n", VAR_9);
  VAR_13 = FUNC_7(VAR_8, VAR_9);
 }
 if (VAR_13) {
  FUNC_5(VAR_7, "Failed to enable SR-IOV, continuing without SR-IOV (err = %d)\n",
    VAR_13);
  goto disable_sriov;
 } else {
  FUNC_6(VAR_7, "Running in master mode\n");
  VAR_12 |= VAR_4 |
   VAR_2;
  VAR_12 &= ~VAR_3;
  VAR_7->persist->num_vfs = VAR_9;
 }
 return VAR_12;

disable_sriov:
 FUNC_0(&VAR_6);
free_mem:
 VAR_7->persist->num_vfs = 0;
 FUNC_3(VAR_7->dev_vfs);
 VAR_7->dev_vfs = ((void*)0);
 return VAR_12 & ~VAR_2;
}
