
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct camera_data {scalar_t__ streaming; } ;


 int VAR_0 ;
 int FUNC_0 (struct camera_data*) ;
 int FUNC_1 (struct camera_data*,int ) ;

int FUNC_2(struct camera_data *VAR_1)
{
 int VAR_2 = 0;
 if(VAR_1->streaming) {
  FUNC_0(VAR_1);
  VAR_2 = FUNC_1(VAR_1, VAR_0);
 }
 return VAR_2;
}
