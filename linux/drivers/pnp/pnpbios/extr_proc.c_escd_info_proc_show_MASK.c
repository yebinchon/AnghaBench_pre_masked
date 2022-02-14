
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct escd_info_struc {int nv_storage_base; int escd_size; int min_escd_write_size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct escd_info_struc*) ;
 int FUNC_1 (struct seq_file*,char*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct seq_file *VAR_1, void *VAR_2)
{
 struct escd_info_struc VAR_3;

 if (FUNC_0(&VAR_3))
  return -VAR_0;
 FUNC_1(VAR_1, "min_ESCD_write_size %d\n"
   "ESCD_size %d\n"
   "NVRAM_base 0x%x\n",
   VAR_3.min_escd_write_size,
   VAR_3.escd_size, VAR_3.nv_storage_base);
 return 0;
}
