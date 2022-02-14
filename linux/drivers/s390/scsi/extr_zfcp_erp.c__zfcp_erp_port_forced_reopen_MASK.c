
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_port {int adapter; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct zfcp_port*,int *,char*,int ) ;
 int FUNC_1 (struct zfcp_port*,int) ;
 int FUNC_2 (struct zfcp_port*) ;

__attribute__((used)) static void FUNC_3(struct zfcp_port *VAR_1, int VAR_2,
      char *VAR_3)
{
 FUNC_1(VAR_1, VAR_2);
 FUNC_2(VAR_1);

 FUNC_0(VAR_0,
    VAR_1->adapter, VAR_1, ((void*)0), VAR_3, 0);
}
