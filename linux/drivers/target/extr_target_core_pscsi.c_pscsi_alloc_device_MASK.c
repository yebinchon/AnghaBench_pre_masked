
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_hba {int dummy; } ;
struct se_device {int dummy; } ;
struct pscsi_dev_virt {struct se_device dev; } ;


 int VAR_0 ;
 struct pscsi_dev_virt* FUNC_0 (int,int ) ;
 int FUNC_1 (char*,struct pscsi_dev_virt*,char const*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static struct se_device *FUNC_3(struct se_hba *VAR_1,
  const char *VAR_2)
{
 struct pscsi_dev_virt *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct pscsi_dev_virt), VAR_0);
 if (!VAR_3) {
  FUNC_2("Unable to allocate memory for struct pscsi_dev_virt\n");
  return ((void*)0);
 }

 FUNC_1("PSCSI: Allocated pdv: %p for %s\n", VAR_3, VAR_2);
 return &VAR_3->dev;
}
