
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {int (* set_state ) (struct sfp*,unsigned int) ;} ;


 int FUNC_0 (struct sfp*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct sfp *VAR_0, unsigned int VAR_1)
{
 VAR_0->set_state(VAR_0, VAR_1);
}
