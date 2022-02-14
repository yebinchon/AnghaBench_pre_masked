
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct niu_parent {int num_ports; scalar_t__ plat_type; } ;
struct niu {int port; int flags; struct niu_parent* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct niu*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct niu *VAR_5)
{
 struct niu_parent *VAR_6 = VAR_5->parent;

 if (VAR_5->port <= 1)
  VAR_5->flags |= VAR_3;

 if (!VAR_6->num_ports) {
  if (VAR_6->plat_type == VAR_4) {
   VAR_6->num_ports = 2;
  } else {
   VAR_6->num_ports = FUNC_0(VAR_5);
   if (!VAR_6->num_ports) {



    VAR_6->num_ports = FUNC_1(VAR_1) &
     VAR_2;




    if (!VAR_6->num_ports)
     VAR_6->num_ports = 4;
   }
  }
 }

 if (VAR_5->port >= VAR_6->num_ports)
  return -VAR_0;

 return 0;
}
