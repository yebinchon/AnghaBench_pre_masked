
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {scalar_t__ data; } ;
struct fsl_spi_match_data {int type; } ;
struct device {scalar_t__ of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct of_device_id* FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_2)
{
 const struct of_device_id *VAR_3;

 if (VAR_2->of_node) {
  VAR_3 = FUNC_0(VAR_1, VAR_2->of_node);
  if (VAR_3 && VAR_3->data)
   return ((struct fsl_spi_match_data *)VAR_3->data)->type;
 }
 return VAR_0;
}
