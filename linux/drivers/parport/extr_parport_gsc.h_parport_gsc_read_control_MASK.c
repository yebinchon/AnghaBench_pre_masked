
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct parport_gsc_private {unsigned char const ctr; } ;
struct parport {TYPE_1__* physport; } ;
struct TYPE_2__ {struct parport_gsc_private* private_data; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;

__attribute__((used)) static inline unsigned char FUNC_0(struct parport *VAR_4)
{
 const unsigned char VAR_5 = (VAR_3 |
      VAR_0 |
      VAR_1 |
      VAR_2);
 const struct parport_gsc_private *VAR_6 = VAR_4->physport->private_data;
 return VAR_6->ctr & VAR_5;
}
