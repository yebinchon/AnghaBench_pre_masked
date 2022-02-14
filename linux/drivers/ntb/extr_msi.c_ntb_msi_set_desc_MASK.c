
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ u64 ;
struct ntb_msi_desc {int data; scalar_t__ addr_offset; } ;
struct ntb_dev {TYPE_1__* msi; int dev; } ;
struct TYPE_4__ {scalar_t__ address_lo; int data; scalar_t__ address_hi; } ;
struct msi_desc {TYPE_2__ msg; int irq; } ;
struct TYPE_3__ {scalar_t__ base_addr; scalar_t__ end_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int ,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct ntb_dev *VAR_1, struct msi_desc *VAR_2,
       struct ntb_msi_desc *VAR_3)
{
 u64 VAR_4;

 VAR_4 = VAR_2->msg.address_lo +
  ((uint64_t)VAR_2->msg.address_hi << 32);

 if (VAR_4 < VAR_1->msi->base_addr || VAR_4 >= VAR_1->msi->end_addr) {
  FUNC_0(&VAR_1->dev,
         "IRQ %d: MSI Address not within the memory window (%llx, [%llx %llx])\n",
         VAR_2->irq, VAR_4, VAR_1->msi->base_addr,
         VAR_1->msi->end_addr);
  return -VAR_0;
 }

 VAR_3->addr_offset = VAR_4 - VAR_1->msi->base_addr;
 VAR_3->data = VAR_2->msg.data;

 return 0;
}
