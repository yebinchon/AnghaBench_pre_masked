
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct falcon_nic_data {int spi_lock; } ;
struct ef4_nic {struct falcon_nic_data* nic_data; } ;
typedef enum reset_type { ____Placeholder_reset_type } reset_type ;


 int FUNC_0 (struct ef4_nic*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct ef4_nic *VAR_0, enum reset_type VAR_1)
{
 struct falcon_nic_data *VAR_2 = VAR_0->nic_data;
 int VAR_3;

 FUNC_1(&VAR_2->spi_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_2->spi_lock);

 return VAR_3;
}
