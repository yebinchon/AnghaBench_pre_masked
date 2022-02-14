
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rd_dev {int sg_table_count; int * sg_table_array; int rd_dev_id; TYPE_1__* rd_host; } ;
struct TYPE_2__ {int rd_host_id; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (char*,int ,int ,scalar_t__,int ,unsigned long) ;
 scalar_t__ FUNC_1 (struct rd_dev*,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct rd_dev *VAR_1)
{
 u32 VAR_2;

 if (!VAR_1->sg_table_array || !VAR_1->sg_table_count)
  return;

 VAR_2 = FUNC_1(VAR_1, VAR_1->sg_table_array,
       VAR_1->sg_table_count);

 FUNC_0("CORE_RD[%u] - Released device space for Ramdisk"
  " Device ID: %u, pages %u in %u tables total bytes %lu\n",
  VAR_1->rd_host->rd_host_id, VAR_1->rd_dev_id, VAR_2,
  VAR_1->sg_table_count, (unsigned long)VAR_2 * VAR_0);

 VAR_1->sg_table_array = ((void*)0);
 VAR_1->sg_table_count = 0;
}
