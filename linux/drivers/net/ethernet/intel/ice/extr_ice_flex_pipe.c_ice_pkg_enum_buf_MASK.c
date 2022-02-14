
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ice_seg {int dummy; } ;
struct ice_pkg_enum {scalar_t__ buf_idx; TYPE_1__* buf_table; } ;
struct ice_buf_hdr {int dummy; } ;
struct TYPE_2__ {scalar_t__ buf_array; int buf_count; } ;


 TYPE_1__* FUNC_0 (struct ice_seg*) ;
 struct ice_buf_hdr* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static struct ice_buf_hdr *
FUNC_3(struct ice_seg *VAR_0, struct ice_pkg_enum *VAR_1)
{
 if (VAR_0) {
  VAR_1->buf_table = FUNC_0(VAR_0);
  if (!VAR_1->buf_table)
   return ((void*)0);

  VAR_1->buf_idx = 0;
  return FUNC_1(VAR_1->buf_table->buf_array);
 }

 if (++VAR_1->buf_idx < FUNC_2(VAR_1->buf_table->buf_count))
  return FUNC_1(VAR_1->buf_table->buf_array +
           VAR_1->buf_idx);
 else
  return ((void*)0);
}
