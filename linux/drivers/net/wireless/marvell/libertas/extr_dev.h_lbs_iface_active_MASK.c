
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lbs_private {scalar_t__ mesh_dev; scalar_t__ dev; } ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static inline int FUNC_1(struct lbs_private *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0->dev);
 if (VAR_0->mesh_dev)
  VAR_1 |= FUNC_0(VAR_0->mesh_dev);

 return VAR_1;
}
