
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vc_data {scalar_t__ vc_mode; TYPE_1__* vc_sw; } ;
struct TYPE_2__ {int (* con_resize ) (struct vc_data*,int,int,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct vc_data*,int,int,int) ;

__attribute__((used)) static inline int FUNC_1(struct vc_data *VAR_1, int VAR_2, int VAR_3,
    int VAR_4)
{

 int VAR_5 = 0;

 if (VAR_1->vc_mode != VAR_0 && VAR_1->vc_sw->con_resize)
  VAR_5 = VAR_1->vc_sw->con_resize(VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
