
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pps_device {int dev; } ;
struct pps_bind_args {scalar_t__ edge; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 struct pps_device* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct pps_device *VAR_4, struct pps_bind_args *VAR_5)
{

 FUNC_2(&VAR_2);

 if (VAR_5->edge == 0)
  if (VAR_1 == VAR_4) {
   VAR_3 = 0;
   VAR_1 = ((void*)0);
   FUNC_3(&VAR_2);
   FUNC_1(VAR_4->dev, "unbound kernel"
     " consumer\n");
  } else {
   FUNC_3(&VAR_2);
   FUNC_0(VAR_4->dev, "selected kernel consumer"
     " is not bound\n");
   return -VAR_0;
  }
 else
  if (VAR_1 == ((void*)0) ||
    VAR_1 == VAR_4) {
   VAR_3 = VAR_5->edge;
   VAR_1 = VAR_4;
   FUNC_3(&VAR_2);
   FUNC_1(VAR_4->dev, "bound kernel consumer: "
    "edge=0x%x\n", VAR_5->edge);
  } else {
   FUNC_3(&VAR_2);
   FUNC_0(VAR_4->dev, "another kernel consumer"
     " is already bound\n");
   return -VAR_0;
  }

 return 0;
}
