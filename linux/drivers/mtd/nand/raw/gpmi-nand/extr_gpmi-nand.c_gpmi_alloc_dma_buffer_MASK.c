
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtd_info {scalar_t__ oobsize; scalar_t__ writesize; } ;
struct bch_geometry {int auxiliary_size; } ;
struct gpmi_nand_data {void* raw_buffer; int auxiliary_virt; int auxiliary_phys; int * data_buffer_dma; int nand; struct device* dev; struct bch_geometry bch_geometry; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct device*,int ,int *,int) ;
 int FUNC_1 (struct gpmi_nand_data*) ;
 void* FUNC_2 (scalar_t__,int) ;
 struct mtd_info* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct gpmi_nand_data *VAR_4)
{
 struct bch_geometry *VAR_5 = &VAR_4->bch_geometry;
 struct device *VAR_6 = VAR_4->dev;
 struct mtd_info *VAR_7 = FUNC_3(&VAR_4->nand);
 VAR_4->data_buffer_dma = FUNC_2(VAR_7->writesize ?: VAR_3,
     VAR_1 | VAR_2);
 if (VAR_4->data_buffer_dma == ((void*)0))
  goto error_alloc;

 VAR_4->auxiliary_virt = FUNC_0(VAR_6, VAR_5->auxiliary_size,
     &VAR_4->auxiliary_phys, VAR_1);
 if (!VAR_4->auxiliary_virt)
  goto error_alloc;

 VAR_4->raw_buffer = FUNC_2((VAR_7->writesize ?: VAR_3) + VAR_7->oobsize, VAR_2);
 if (!VAR_4->raw_buffer)
  goto error_alloc;

 return 0;

error_alloc:
 FUNC_1(VAR_4);
 return -VAR_0;
}
