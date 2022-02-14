
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fman_port {int port_type; } ;


 int VAR_0 ;


 int FUNC_0 (struct fman_port*) ;
 int FUNC_1 (struct fman_port*) ;
 int FUNC_2 (struct fman_port*) ;
 int FUNC_3 (struct fman_port*) ;

__attribute__((used)) static int FUNC_4(struct fman_port *VAR_1)
{
 int VAR_2;


 switch (VAR_1->port_type) {
 case 129:
  VAR_2 = FUNC_0(VAR_1);
  if (!VAR_2)
   FUNC_2(VAR_1);
  break;
 case 128:
  VAR_2 = FUNC_1(VAR_1);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_2)
  return VAR_2;


 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2)
  return VAR_2;

 return 0;
}
