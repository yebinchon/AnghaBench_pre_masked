
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvmet_fabrics_ops {size_t type; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 struct nvmet_fabrics_ops const** VAR_2 ;
 int FUNC_1 (int *) ;

int FUNC_2(const struct nvmet_fabrics_ops *VAR_3)
{
 int VAR_4 = 0;

 FUNC_0(&VAR_1);
 if (VAR_2[VAR_3->type])
  VAR_4 = -VAR_0;
 else
  VAR_2[VAR_3->type] = VAR_3;
 FUNC_1(&VAR_1);

 return VAR_4;
}
