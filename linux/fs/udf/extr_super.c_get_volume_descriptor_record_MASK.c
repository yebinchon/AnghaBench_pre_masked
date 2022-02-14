
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct udf_vds_record {int dummy; } ;
struct desc_seq_scan_data {struct udf_vds_record* vds; } ;
struct buffer_head {int dummy; } ;







 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct udf_vds_record* FUNC_0 (struct buffer_head*,struct desc_seq_scan_data*) ;

__attribute__((used)) static struct udf_vds_record *FUNC_1(uint16_t VAR_4,
  struct buffer_head *VAR_5, struct desc_seq_scan_data *VAR_6)
{
 switch (VAR_4) {
 case 129:
  return &(VAR_6->vds[VAR_2]);
 case 132:
  return &(VAR_6->vds[VAR_0]);
 case 131:
  return &(VAR_6->vds[VAR_1]);
 case 128:
  return &(VAR_6->vds[VAR_3]);
 case 130:
  return FUNC_0(VAR_5, VAR_6);
 }
 return ((void*)0);
}
