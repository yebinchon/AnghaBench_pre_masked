
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct se_device {int dummy; } ;
struct rd_dev {int rd_dev_id; int rd_page_count; int sg_table_count; int rd_flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct rd_dev* FUNC_0 (struct se_device*) ;
 int FUNC_1 (char*,char*,int,...) ;

__attribute__((used)) static ssize_t FUNC_2(struct se_device *VAR_2, char *VAR_3)
{
 struct rd_dev *VAR_4 = FUNC_0(VAR_2);

 ssize_t VAR_5 = FUNC_1(VAR_3, "TCM RamDisk ID: %u  RamDisk Makeup: rd_mcp\n",
   VAR_4->rd_dev_id);
 VAR_5 += FUNC_1(VAR_3 + VAR_5, "        PAGES/PAGE_SIZE: %u*%lu"
   "  SG_table_count: %u  nullio: %d\n", VAR_4->rd_page_count,
   VAR_0, VAR_4->sg_table_count,
   !!(VAR_4->rd_flags & VAR_1));
 return VAR_5;
}
