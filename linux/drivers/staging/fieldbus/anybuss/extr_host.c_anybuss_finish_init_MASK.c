
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct anybuss_host {int dummy; } ;
struct anybuss_client {struct anybuss_host* host; } ;


 int VAR_0 ;
 int FUNC_0 (struct anybuss_host*,int ,int,int *,int ,int *,int ,int *,int ) ;

int FUNC_1(struct anybuss_client *VAR_1)
{
 struct anybuss_host *VAR_2 = VAR_1->host;

 return FUNC_0(VAR_2, VAR_0, 0, ((void*)0), 0,
     ((void*)0), 0, ((void*)0), 0);
}
