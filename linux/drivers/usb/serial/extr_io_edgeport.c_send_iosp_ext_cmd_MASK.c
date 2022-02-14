
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct edgeport_port {TYPE_1__* port; } ;
typedef int __u8 ;
struct TYPE_2__ {int port_number; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char**,int*,int ,int ,int ) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (struct edgeport_port*,unsigned char*,int) ;

__attribute__((used)) static int FUNC_4(struct edgeport_port *VAR_2,
      __u8 VAR_3, __u8 VAR_4)
{
 unsigned char *VAR_5;
 unsigned char *VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;

 VAR_5 = FUNC_2(10, VAR_1);
 if (!VAR_5)
  return -VAR_0;

 VAR_6 = VAR_5;

 FUNC_0(&VAR_6, &VAR_7, VAR_2->port->port_number,
    VAR_3, VAR_4);

 VAR_8 = FUNC_3(VAR_2, VAR_5, VAR_7);
 if (VAR_8) {

  FUNC_1(VAR_5);
 }

 return VAR_8;
}
