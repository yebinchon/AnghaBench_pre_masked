
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msb_data {int disk_id; scalar_t__ usage_count; } ;
struct gendisk {struct msb_data* private_data; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct msb_data*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct gendisk*) ;

__attribute__((used)) static int FUNC_6(struct gendisk *VAR_2)
{
 struct msb_data *VAR_3 = VAR_2->private_data;

 FUNC_0("block device release");
 FUNC_3(&VAR_1);

 if (VAR_3) {
  if (VAR_3->usage_count)
   VAR_3->usage_count--;

  if (!VAR_3->usage_count) {
   VAR_2->private_data = ((void*)0);
   FUNC_1(&VAR_0, VAR_3->disk_id);
   FUNC_5(VAR_2);
   FUNC_2(VAR_3);
  }
 }
 FUNC_4(&VAR_1);
 return 0;
}
