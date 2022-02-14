
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_port {int dummy; } ;
struct port_name {char* buf; size_t len; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 struct rocker_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct rocker_port*,int,int ,int *,int ,struct port_name*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
       char *VAR_4, size_t VAR_5)
{
 struct rocker_port *VAR_6 = FUNC_0(VAR_3);
 struct port_name VAR_7 = { .buf = VAR_4, .len = VAR_5 };
 int VAR_8;

 VAR_8 = FUNC_1(VAR_6, 0,
         VAR_2, ((void*)0),
         VAR_1,
         &VAR_7);

 return VAR_8 ? -VAR_0 : 0;
}
