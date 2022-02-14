
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct anybuss_host {int dummy; } ;
struct anybuss_client {struct anybuss_host* host; } ;


 int FUNC_0 (struct anybuss_host*,int ,int,int *,int ,void*,size_t,int *,int ) ;

int FUNC_1(struct anybuss_client *VAR_0, u16 VAR_1,
       void *VAR_2, size_t VAR_3)
{
 struct anybuss_host *VAR_4 = VAR_0->host;

 return FUNC_0(VAR_4, VAR_1, 1, ((void*)0), 0, VAR_2, VAR_3,
     ((void*)0), 0);
}
