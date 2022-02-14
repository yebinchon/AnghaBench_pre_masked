
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udf_vds_record {int dummy; } ;
struct partitionDesc {int partitionNumber; } ;
struct part_desc_seq_scan_data {int partnum; struct udf_vds_record rec; } ;
struct desc_seq_scan_data {int num_part_descs; int size_part_descs; struct part_desc_seq_scan_data* part_descs_loc; } ;
struct buffer_head {scalar_t__ b_data; } ;


 unsigned int FUNC_0 (int,int ) ;
 int VAR_0 ;
 struct udf_vds_record* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 struct part_desc_seq_scan_data* FUNC_2 (unsigned int,int,int ) ;
 int FUNC_3 (struct part_desc_seq_scan_data*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct part_desc_seq_scan_data*,struct part_desc_seq_scan_data*,int) ;

__attribute__((used)) static struct udf_vds_record *FUNC_6(
    struct buffer_head *VAR_3,
    struct desc_seq_scan_data *VAR_4)
{
 struct partitionDesc *VAR_5 = (struct partitionDesc *)VAR_3->b_data;
 int VAR_6;
 int VAR_7;

 VAR_6 = FUNC_4(VAR_5->partitionNumber);
 for (VAR_7 = 0; VAR_7 < VAR_4->num_part_descs; VAR_7++)
  if (VAR_6 == VAR_4->part_descs_loc[VAR_7].partnum)
   return &(VAR_4->part_descs_loc[VAR_7].rec);
 if (VAR_4->num_part_descs >= VAR_4->size_part_descs) {
  struct part_desc_seq_scan_data *VAR_8;
  unsigned int VAR_9 = FUNC_0(VAR_6, VAR_2);

  VAR_8 = FUNC_2(VAR_9, sizeof(*VAR_8), VAR_1);
  if (!VAR_8)
   return FUNC_1(-VAR_0);
  FUNC_5(VAR_8, VAR_4->part_descs_loc,
         VAR_4->size_part_descs * sizeof(*VAR_8));
  FUNC_3(VAR_4->part_descs_loc);
  VAR_4->part_descs_loc = VAR_8;
  VAR_4->size_part_descs = VAR_9;
 }
 return &(VAR_4->part_descs_loc[VAR_4->num_part_descs++].rec);
}
