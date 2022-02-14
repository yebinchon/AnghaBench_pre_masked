
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvdimm {int dummy; } ;
struct nd_cmd_vendor_hdr {scalar_t__ in_length; } ;
struct nd_cmd_set_config_hdr {scalar_t__ in_length; } ;
struct nd_cmd_pkg {scalar_t__ nd_size_in; } ;
struct nd_cmd_desc {int in_num; scalar_t__* in_sizes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

u32 FUNC_0(struct nvdimm *VAR_4, int VAR_5,
  const struct nd_cmd_desc *VAR_6, int VAR_7, void *VAR_8)
{
 if (VAR_7 >= VAR_6->in_num)
  return VAR_3;

 if (VAR_6->in_sizes[VAR_7] < VAR_3)
  return VAR_6->in_sizes[VAR_7];

 if (VAR_4 && VAR_5 == VAR_1 && VAR_7 == 2) {
  struct nd_cmd_set_config_hdr *VAR_9 = VAR_8;

  return VAR_9->in_length;
 } else if (VAR_4 && VAR_5 == VAR_2 && VAR_7 == 2) {
  struct nd_cmd_vendor_hdr *VAR_10 = VAR_8;

  return VAR_10->in_length;
 } else if (VAR_5 == VAR_0) {
  struct nd_cmd_pkg *VAR_11 = VAR_8;

  return VAR_11->nd_size_in;
 }

 return VAR_3;
}
