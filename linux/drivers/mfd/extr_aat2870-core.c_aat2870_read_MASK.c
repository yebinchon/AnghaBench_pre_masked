
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct aat2870_data {int io_lock; } ;


 int FUNC_0 (struct aat2870_data*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct aat2870_data *VAR_0, u8 VAR_1, u8 *VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->io_lock);
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_2(&VAR_0->io_lock);

 return VAR_3;
}
