
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reset_control {int array; } ;
struct reset_control_array {int num_rstcs; struct reset_control** rstc; struct reset_control base; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 struct reset_control* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct reset_control*) ;
 struct reset_control* FUNC_2 (struct device_node*,int *,int,int,int,int) ;
 int FUNC_3 (struct reset_control*) ;
 int FUNC_4 (struct reset_control_array*) ;
 struct reset_control_array* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device_node*) ;
 int VAR_2 ;
 int FUNC_9 (struct reset_control_array*,struct reset_control*,int) ;

struct reset_control *
FUNC_10(struct device_node *VAR_3, bool VAR_4, bool VAR_5,
      bool VAR_6)
{
 struct reset_control_array *VAR_7;
 struct reset_control *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_8(VAR_3);
 if (VAR_9 < 0)
  return VAR_5 ? ((void*)0) : FUNC_0(VAR_9);

 VAR_7 = FUNC_5(FUNC_9(VAR_7, VAR_8, VAR_9), VAR_1);
 if (!VAR_7)
  return FUNC_0(-VAR_0);

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  VAR_8 = FUNC_2(VAR_3, ((void*)0), VAR_10, VAR_4, VAR_5,
           VAR_6);
  if (FUNC_1(VAR_8))
   goto err_rst;
  VAR_7->rstc[VAR_10] = VAR_8;
 }
 VAR_7->num_rstcs = VAR_9;
 VAR_7->base.array = 1;

 return &VAR_7->base;

err_rst:
 FUNC_6(&VAR_2);
 while (--VAR_10 >= 0)
  FUNC_3(VAR_7->rstc[VAR_10]);
 FUNC_7(&VAR_2);

 FUNC_4(VAR_7);

 return VAR_8;
}
