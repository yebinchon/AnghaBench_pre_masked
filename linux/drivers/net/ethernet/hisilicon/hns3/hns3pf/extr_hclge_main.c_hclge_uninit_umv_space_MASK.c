
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hclge_dev {scalar_t__ max_umv_size; int umv_mutex; } ;


 int FUNC_0 (struct hclge_dev*,scalar_t__,int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_0)
{
 int VAR_1;

 if (VAR_0->max_umv_size > 0) {
  VAR_1 = FUNC_0(VAR_0, VAR_0->max_umv_size, ((void*)0),
       0);
  if (VAR_1)
   return VAR_1;
  VAR_0->max_umv_size = 0;
 }
 FUNC_1(&VAR_0->umv_mutex);

 return 0;
}
