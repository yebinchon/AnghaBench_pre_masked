
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zfcp_fsf_req {int * pool; } ;
typedef int mempool_t ;


 int VAR_0 ;
 struct zfcp_fsf_req* FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct zfcp_fsf_req* FUNC_2 (int *,int ) ;
 int FUNC_3 (struct zfcp_fsf_req*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static struct zfcp_fsf_req *FUNC_5(mempool_t *VAR_1)
{
 struct zfcp_fsf_req *VAR_2;

 if (FUNC_1(VAR_1))
  VAR_2 = FUNC_2(VAR_1, VAR_0);
 else
  VAR_2 = FUNC_0(sizeof(*VAR_2), VAR_0);

 if (FUNC_4(!VAR_2))
  return ((void*)0);

 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->pool = VAR_1;
 return VAR_2;
}
