
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {TYPE_1__* parent; scalar_t__ of_node; } ;
struct TYPE_2__ {scalar_t__ of_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int) ;
 int FUNC_1 (int *,int,int,int ) ;
 int FUNC_2 (scalar_t__,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 int VAR_3 = -1, VAR_4 = -1;

 if (VAR_2->of_node)
  VAR_3 = FUNC_2(VAR_2->of_node, "rtc");
 else if (VAR_2->parent && VAR_2->parent->of_node)
  VAR_3 = FUNC_2(VAR_2->parent->of_node, "rtc");

 if (VAR_3 >= 0) {
  VAR_4 = FUNC_1(&VAR_1, VAR_3, VAR_3 + 1, VAR_0);
  if (VAR_4 < 0)
   FUNC_0(VAR_2, "/aliases ID %d not available\n", VAR_3);
 }

 if (VAR_4 < 0)
  VAR_4 = FUNC_1(&VAR_1, 0, 0, VAR_0);

 return VAR_4;
}
