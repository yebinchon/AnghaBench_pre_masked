
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parisc_device {int dev; } ;
struct ioc {int dummy; } ;
struct ibase_data_struct {int ioc_num; struct ioc* ioc; } ;


 int FUNC_0 (int *,struct ibase_data_struct*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct parisc_device *VAR_1, struct ioc *VAR_2, int VAR_3)
{
 struct ibase_data_struct VAR_4 = {
  .ioc = VAR_2,
  .ioc_num = VAR_3,
 };

 FUNC_0(&VAR_1->dev, &VAR_4,
         VAR_0);
}
