
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct service_processor {int * heartbeat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct service_processor*,int ) ;

int FUNC_1(struct service_processor *VAR_2)
{
 VAR_2->heartbeat = FUNC_0(VAR_2, VAR_1);
 if (VAR_2->heartbeat == ((void*)0))
  return -VAR_0;

 return 0;
}
