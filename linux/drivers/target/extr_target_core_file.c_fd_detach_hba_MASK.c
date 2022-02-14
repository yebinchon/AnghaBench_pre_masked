
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_hba {struct fd_host* hba_ptr; int hba_id; } ;
struct fd_host {int fd_host_id; } ;


 int FUNC_0 (struct fd_host*) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct se_hba *VAR_0)
{
 struct fd_host *VAR_1 = VAR_0->hba_ptr;

 FUNC_1("CORE_HBA[%d] - Detached FILEIO HBA: %u from Generic"
  " Target Core\n", VAR_0->hba_id, VAR_1->fd_host_id);

 FUNC_0(VAR_1);
 VAR_0->hba_ptr = ((void*)0);
}
