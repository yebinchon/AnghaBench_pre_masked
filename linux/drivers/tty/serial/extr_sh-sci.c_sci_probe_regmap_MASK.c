
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sci_port_params {int dummy; } ;
struct plat_sci_port {size_t regtype; int type; } ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 size_t VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (char*) ;
 struct sci_port_params const* VAR_7 ;

__attribute__((used)) static const struct sci_port_params *
FUNC_1(const struct plat_sci_port *VAR_8)
{
 unsigned int VAR_9;

 if (VAR_8->regtype != VAR_2)
  return &VAR_7[VAR_8->regtype];

 switch (VAR_8->type) {
 case 131:
  VAR_9 = VAR_5;
  break;
 case 132:
  VAR_9 = VAR_1;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 case 128:
  VAR_9 = VAR_4;
  break;
 case 130:






  VAR_9 = VAR_6;
  break;
 case 133:
  VAR_9 = VAR_0;
  break;
 default:
  FUNC_0("Can't probe register map for given port\n");
  return ((void*)0);
 }

 return &VAR_7[VAR_9];
}
