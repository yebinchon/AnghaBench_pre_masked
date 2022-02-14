
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ScsiReqBlk {unsigned int sg_index; unsigned int sg_count; unsigned int total_xfer_length; struct SGentry* segment_x; } ;
struct SGentry {scalar_t__ length; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct ScsiReqBlk *VAR_1)
{
 if (FUNC_0(VAR_0)) {
  unsigned VAR_2 = 0;
  unsigned VAR_3 = VAR_1->sg_index;
  struct SGentry *VAR_4 = VAR_1->segment_x + VAR_3;
  for (; VAR_3 < VAR_1->sg_count; VAR_4++, VAR_3++)
   VAR_2 += VAR_4->length;
  if (VAR_2 != VAR_1->total_xfer_length)
   FUNC_1(VAR_0,
          "Inconsistent SRB S/G lengths (Tot=%i, Count=%i) !!\n",
          VAR_1->total_xfer_length, VAR_2);
 }
}
