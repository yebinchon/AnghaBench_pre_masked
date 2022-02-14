
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vcc_port {scalar_t__ removed; } ;


 struct vcc_port* FUNC_0 (unsigned long,int) ;
 int FUNC_1 (struct vcc_port*,int) ;

__attribute__((used)) static struct vcc_port *FUNC_2(unsigned long VAR_0)
{
 struct vcc_port *VAR_1;

 VAR_1 = FUNC_0(VAR_0, 0);

 if (VAR_1 && VAR_1->removed) {
  FUNC_1(VAR_1, 0);
  return ((void*)0);
 }

 return VAR_1;
}
