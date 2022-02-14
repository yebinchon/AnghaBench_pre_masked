
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sfp {int attached; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sfp*,int ) ;

__attribute__((used)) static void FUNC_1(struct sfp *VAR_2)
{
 VAR_2->attached = 1;
 if (VAR_2->state & VAR_1)
  FUNC_0(VAR_2, VAR_0);
}
