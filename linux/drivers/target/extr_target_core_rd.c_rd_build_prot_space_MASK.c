
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct scatterlist {int dummy; } ;
struct rd_dev_sg_table {int dummy; } ;
struct rd_dev {int rd_flags; int rd_page_count; int sg_prot_count; int rd_dev_id; TYPE_1__* rd_host; struct rd_dev_sg_table* sg_prot_array; } ;
struct TYPE_2__ {int rd_host_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rd_dev_sg_table* FUNC_0 (int,int,int ) ;
 int FUNC_1 (char*,int ,int ,int,int) ;
 int FUNC_2 (struct rd_dev*,struct rd_dev_sg_table*,int,int) ;

__attribute__((used)) static int FUNC_3(struct rd_dev *VAR_4, int VAR_5, int VAR_6)
{
 struct rd_dev_sg_table *VAR_7;
 u32 VAR_8, VAR_9;
 u32 VAR_10 = (VAR_3 /
    sizeof(struct scatterlist));
 int VAR_11;

 if (VAR_4->rd_flags & VAR_2)
  return 0;






 VAR_8 = (VAR_4->rd_page_count * VAR_5 / VAR_6) + 1;

 VAR_9 = (VAR_8 / VAR_10) + 1;
 VAR_7 = FUNC_0(VAR_9, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_4->sg_prot_array = VAR_7;
 VAR_4->sg_prot_count = VAR_9;

 VAR_11 = FUNC_2(VAR_4, VAR_7, VAR_8, 0xff);
 if (VAR_11)
  return VAR_11;

 FUNC_1("CORE_RD[%u] - Built Ramdisk Device ID: %u prot space of"
   " %u pages in %u tables\n", VAR_4->rd_host->rd_host_id,
   VAR_4->rd_dev_id, VAR_8, VAR_4->sg_prot_count);

 return 0;
}
