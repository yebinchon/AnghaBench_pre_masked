
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct nvdimm {int dummy; } ;
struct nd_cmd_pkg {scalar_t__ nd_size_out; } ;
struct nd_cmd_desc {int out_num; scalar_t__* out_sizes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

u32 FUNC_0(struct nvdimm *VAR_5, int VAR_6,
  const struct nd_cmd_desc *VAR_7, int VAR_8, const u32 *VAR_9,
  const u32 *VAR_10, unsigned long VAR_11)
{
 if (VAR_8 >= VAR_7->out_num)
  return VAR_4;

 if (VAR_7->out_sizes[VAR_8] < VAR_4)
  return VAR_7->out_sizes[VAR_8];

 if (VAR_5 && VAR_6 == VAR_2 && VAR_8 == 1)
  return VAR_9[1];
 else if (VAR_5 && VAR_6 == VAR_3 && VAR_8 == 2)
  return VAR_10[1];
 else if (!VAR_5 && VAR_6 == VAR_0 && VAR_8 == 2) {





  if (VAR_10[1] < 4)
   return 0;






  if (VAR_10[1] - 4 == VAR_11)
   return VAR_11;
  return VAR_10[1] - 8;
 } else if (VAR_6 == VAR_1) {
  struct nd_cmd_pkg *VAR_12 = (struct nd_cmd_pkg *) VAR_9;

  return VAR_12->nd_size_out;
 }


 return VAR_4;
}
