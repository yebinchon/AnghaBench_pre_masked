
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {unsigned int (* get_state ) (struct sfp*) ;} ;


 unsigned int FUNC_0 (struct sfp*) ;

__attribute__((used)) static unsigned int FUNC_1(struct sfp *VAR_0)
{
 return VAR_0->get_state(VAR_0);
}
