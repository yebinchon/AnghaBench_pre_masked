
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct aat2870_data {int io_lock; } ;


 int FUNC_0 (struct aat2870_data*,int,int*) ;
 int FUNC_1 (struct aat2870_data*,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct aat2870_data *VAR_0, u8 VAR_1, u8 VAR_2,
     u8 VAR_3)
{
 int VAR_4;
 u8 VAR_5, VAR_6;
 int VAR_7;

 FUNC_2(&VAR_0->io_lock);

 VAR_7 = FUNC_0(VAR_0, VAR_1, &VAR_5);
 if (VAR_7)
  goto out_unlock;

 VAR_6 = (VAR_5 & ~VAR_2) | (VAR_3 & VAR_2);
 VAR_4 = VAR_5 != VAR_6;
 if (VAR_4)
  VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_6);

out_unlock:
 FUNC_3(&VAR_0->io_lock);

 return VAR_7;
}
