
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int dummy; } ;
struct rocker {int port_count; int ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t,int ) ;
 int FUNC_1 (struct rocker*,int) ;
 int FUNC_2 (struct rocker*) ;

__attribute__((used)) static int FUNC_3(struct rocker *VAR_2)
{
 int VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_4 = sizeof(struct rocker_port *) * VAR_2->port_count;
 VAR_2->ports = FUNC_0(VAR_4, VAR_1);
 if (!VAR_2->ports)
  return -VAR_0;
 for (VAR_3 = 0; VAR_3 < VAR_2->port_count; VAR_3++) {
  VAR_5 = FUNC_1(VAR_2, VAR_3);
  if (VAR_5)
   goto remove_ports;
 }
 return 0;

remove_ports:
 FUNC_2(VAR_2);
 return VAR_5;
}
