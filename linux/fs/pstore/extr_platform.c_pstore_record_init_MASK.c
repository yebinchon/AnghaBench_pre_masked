
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pstore_record {int time; struct pstore_info* psi; } ;
struct pstore_info {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct pstore_record*,int ,int) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct pstore_record *VAR_0,
   struct pstore_info *VAR_1)
{
 FUNC_1(VAR_0, 0, sizeof(*VAR_0));

 VAR_0->psi = VAR_1;


 VAR_0->time = FUNC_2(FUNC_0());
}
