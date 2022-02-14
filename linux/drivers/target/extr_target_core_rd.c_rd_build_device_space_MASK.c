
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct rd_dev_sg_table {int dummy; } ;
struct rd_dev {scalar_t__ rd_page_count; int rd_flags; int sg_table_count; int rd_dev_id; TYPE_1__* rd_host; struct rd_dev_sg_table* sg_table_array; } ;
struct TYPE_2__ {int rd_host_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct rd_dev_sg_table* FUNC_0 (int,int,int ) ;
 int FUNC_1 (char*,int ,int ,int,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct rd_dev*,struct rd_dev_sg_table*,int,int) ;

__attribute__((used)) static int FUNC_4(struct rd_dev *VAR_5)
{
 struct rd_dev_sg_table *VAR_6;
 u32 VAR_7, VAR_8;
 u32 VAR_9 = (VAR_4 /
    sizeof(struct scatterlist));
 int VAR_10;

 if (VAR_5->rd_page_count <= 0) {
  FUNC_2("Illegal page count: %u for Ramdisk device\n",
         VAR_5->rd_page_count);
  return -VAR_0;
 }


 if (VAR_5->rd_flags & VAR_3)
  return 0;

 VAR_8 = VAR_5->rd_page_count;

 VAR_7 = (VAR_8 / VAR_9) + 1;
 VAR_6 = FUNC_0(VAR_7, sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_5->sg_table_array = VAR_6;
 VAR_5->sg_table_count = VAR_7;

 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_8, 0x00);
 if (VAR_10)
  return VAR_10;

 FUNC_1("CORE_RD[%u] - Built Ramdisk Device ID: %u space of"
   " %u pages in %u tables\n", VAR_5->rd_host->rd_host_id,
   VAR_5->rd_dev_id, VAR_5->rd_page_count,
   VAR_5->sg_table_count);

 return 0;
}
