
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct pnp_isa_config_struc {int isa_rd_data_port; int no_csns; int revision; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pnp_isa_config_struc*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct pnp_isa_config_struc VAR_3;

 if (FUNC_0(&VAR_3))
  return -VAR_0;
 FUNC_1(VAR_1, "structure_revision %d\n"
        "number_of_CSNs %d\n"
        "ISA_read_data_port 0x%x\n",
     VAR_3.revision, VAR_3.no_csns, VAR_3.isa_rd_data_port);
 return 0;
}
