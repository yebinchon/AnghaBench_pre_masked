
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pci_dev {int dummy; } ;
struct icm {int vnd_cap; struct pci_dev* upstream_port; } ;
typedef enum tb_cfg_space { ____Placeholder_tb_cfg_space } tb_cfg_space ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct icm*,int) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,unsigned int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct icm *VAR_7, enum tb_cfg_space VAR_8,
    unsigned int VAR_9, unsigned int VAR_10, u32 *VAR_11)
{
 struct pci_dev *VAR_12 = VAR_7->upstream_port;
 int VAR_13, VAR_14 = VAR_7->vnd_cap;
 u32 VAR_15;

 VAR_15 = VAR_10;
 VAR_15 |= (VAR_9 << VAR_4) & VAR_3;
 VAR_15 |= (VAR_8 << VAR_2) & VAR_1;
 VAR_15 |= VAR_5;
 FUNC_2(VAR_12, VAR_14 + VAR_0, VAR_15);

 VAR_13 = FUNC_0(VAR_7, 5000);
 if (VAR_13)
  return VAR_13;

 FUNC_1(VAR_12, VAR_14 + VAR_6, VAR_11);
 return 0;
}
