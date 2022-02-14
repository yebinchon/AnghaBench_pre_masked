
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct garmin_data {int lock; scalar_t__ outsize; scalar_t__ insize; } ;


 int FUNC_0 (struct garmin_data*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct garmin_data *VAR_0)
{
 unsigned long VAR_1;


 FUNC_0(VAR_0);

 FUNC_1(&VAR_0->lock, VAR_1);
 VAR_0->insize = 0;
 VAR_0->outsize = 0;
 FUNC_2(&VAR_0->lock, VAR_1);

 return 0;
}
