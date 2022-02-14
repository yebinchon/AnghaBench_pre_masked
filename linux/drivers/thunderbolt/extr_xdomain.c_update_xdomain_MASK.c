
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tb_xdomain {int properties_changed_work; TYPE_1__* tb; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int wq; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *,int ) ;
 struct tb_xdomain* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, void *VAR_1)
{
 struct tb_xdomain *VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2) {
  FUNC_1(VAR_2->tb->wq, &VAR_2->properties_changed_work,
       FUNC_0(50));
 }

 return 0;
}
