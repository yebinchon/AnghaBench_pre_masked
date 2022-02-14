
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct se_hba {int hba_id; struct rd_host* hba_ptr; } ;
struct rd_host {int rd_host_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rd_host* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct se_hba *VAR_4, u32 VAR_5)
{
 struct rd_host *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->rd_host_id = VAR_5;

 VAR_4->hba_ptr = VAR_6;

 FUNC_1("CORE_HBA[%d] - TCM Ramdisk HBA Driver %s on"
  " Generic Target Core Stack %s\n", VAR_4->hba_id,
  VAR_2, VAR_3);

 return 0;
}
