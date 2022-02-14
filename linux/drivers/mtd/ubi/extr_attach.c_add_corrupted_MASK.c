
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubi_attach_info {int corr_peb_count; int corr; } ;
struct TYPE_2__ {int list; } ;
struct ubi_ainf_peb {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (int *,int *) ;
 struct ubi_ainf_peb* FUNC_2 (struct ubi_attach_info*,int,int) ;

__attribute__((used)) static int FUNC_3(struct ubi_attach_info *VAR_1, int VAR_2, int VAR_3)
{
 struct ubi_ainf_peb *VAR_4;

 FUNC_0("add to corrupted: PEB %d, EC %d", VAR_2, VAR_3);

 VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 if (!VAR_4)
  return -VAR_0;

 VAR_1->corr_peb_count += 1;
 FUNC_1(&VAR_4->u.list, &VAR_1->corr);
 return 0;
}
