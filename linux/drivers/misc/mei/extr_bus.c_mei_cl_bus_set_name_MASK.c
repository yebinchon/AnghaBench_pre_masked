
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mei_cl_device {int me_cl; int name; int dev; } ;


 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct mei_cl_device *VAR_0)
{
 FUNC_0(&VAR_0->dev, "mei:%s:%pUl:%02X",
       VAR_0->name,
       FUNC_1(VAR_0->me_cl),
       FUNC_2(VAR_0->me_cl));
}
