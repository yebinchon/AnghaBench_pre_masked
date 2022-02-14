
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fwtty_port {TYPE_1__* serial; } ;
struct TYPE_2__ {int kref; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct fwtty_port** VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static struct fwtty_port *FUNC_3(unsigned int VAR_3)
{
 struct fwtty_port *VAR_4;

 if (VAR_3 >= VAR_0)
  return ((void*)0);

 FUNC_1(&VAR_2);
 VAR_4 = VAR_1[VAR_3];
 if (VAR_4)
  FUNC_0(&VAR_4->serial->kref);
 FUNC_2(&VAR_2);
 return VAR_4;
}
