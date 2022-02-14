
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bch_geometry {int auxiliary_size; } ;
struct gpmi_nand_data {int * raw_buffer; int * data_buffer_dma; int auxiliary_phys; int auxiliary_virt; struct bch_geometry bch_geometry; struct device* dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct gpmi_nand_data *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;
 struct bch_geometry *VAR_2 = &VAR_0->bch_geometry;

 if (VAR_0->auxiliary_virt && FUNC_2(VAR_0->auxiliary_virt))
  FUNC_0(VAR_1, VAR_2->auxiliary_size,
     VAR_0->auxiliary_virt,
     VAR_0->auxiliary_phys);
 FUNC_1(VAR_0->data_buffer_dma);
 FUNC_1(VAR_0->raw_buffer);

 VAR_0->data_buffer_dma = ((void*)0);
 VAR_0->raw_buffer = ((void*)0);
}
