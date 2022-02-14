
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int flags; scalar_t__ type; TYPE_1__* type_ops; int name; } ;
struct TYPE_2__ {int (* log ) (struct v4l2_ctrl const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*,char const*,int ) ;
 int FUNC_2 (struct v4l2_ctrl const*) ;

__attribute__((used)) static void FUNC_3(const struct v4l2_ctrl *VAR_6,
       const char *VAR_7, const char *VAR_8)
{
 if (VAR_6->flags & (VAR_0 | VAR_4))
  return;
 if (VAR_6->type == VAR_5)
  return;

 FUNC_1("%s%s%s: ", VAR_7, VAR_8, VAR_6->name);

 VAR_6->type_ops->log(VAR_6);

 if (VAR_6->flags & (VAR_2 |
      VAR_1 |
      VAR_3)) {
  if (VAR_6->flags & VAR_2)
   FUNC_0(" inactive");
  if (VAR_6->flags & VAR_1)
   FUNC_0(" grabbed");
  if (VAR_6->flags & VAR_3)
   FUNC_0(" volatile");
 }
 FUNC_0("\n");
}
