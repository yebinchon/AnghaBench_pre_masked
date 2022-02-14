
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zfcp_fsf_req {TYPE_2__* adapter; } ;
struct TYPE_4__ {TYPE_1__* dbf; } ;
struct TYPE_3__ {int hba; } ;


 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (char*,int,struct zfcp_fsf_req*) ;

__attribute__((used)) static inline
void FUNC_2(char *VAR_0, int VAR_1, struct zfcp_fsf_req *VAR_2)
{
 if (FUNC_0(VAR_2->adapter->dbf->hba, VAR_1))
  FUNC_1(VAR_0, VAR_1, VAR_2);
}
