
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int name; } ;
struct m5mols_info {int handle; } ;


 struct m5mols_info* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0)
{
 struct m5mols_info *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->handle, VAR_0->name);

 return 0;
}
