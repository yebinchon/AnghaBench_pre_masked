
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
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct icm*,int) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct icm *VAR_8, enum tb_cfg_space VAR_9,
     unsigned int VAR_10, unsigned int VAR_11, u32 VAR_12)
{
 struct pci_dev *VAR_13 = VAR_8->upstream_port;
 int VAR_14 = VAR_8->vnd_cap;
 u32 VAR_15;

 FUNC_1(VAR_13, VAR_14 + VAR_7, VAR_12);

 VAR_15 = VAR_11;
 VAR_15 |= (VAR_10 << VAR_4) & VAR_3;
 VAR_15 |= (VAR_9 << VAR_2) & VAR_1;
 VAR_15 |= VAR_6 | VAR_5;
 FUNC_1(VAR_13, VAR_14 + VAR_0, VAR_15);

 return FUNC_0(VAR_8, 5000);
}
