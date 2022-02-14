
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnfs_block_extent {scalar_t__ be_state; scalar_t__ be_f_offset; scalar_t__ be_length; } ;
struct layout_verification {scalar_t__ mode; scalar_t__ start; scalar_t__ cowread; scalar_t__ inval; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int FUNC_0(struct pnfs_block_extent *VAR_5,
    struct layout_verification *VAR_6)
{
 if (VAR_6->mode == VAR_1) {
  if (VAR_5->be_state == VAR_3 ||
      VAR_5->be_state == VAR_2)
   return -VAR_0;
  if (VAR_5->be_f_offset != VAR_6->start)
   return -VAR_0;
  VAR_6->start += VAR_5->be_length;
  return 0;
 }

 if (VAR_5->be_state == VAR_3) {
  if (VAR_5->be_f_offset != VAR_6->start)
   return -VAR_0;
  if (VAR_6->cowread > VAR_6->start)
   return -VAR_0;
  VAR_6->start += VAR_5->be_length;
  VAR_6->inval = VAR_6->start;
  return 0;
 } else if (VAR_5->be_state == VAR_2) {
  if (VAR_5->be_f_offset != VAR_6->start)
   return -VAR_0;
  VAR_6->start += VAR_5->be_length;
  return 0;
 } else if (VAR_5->be_state == VAR_4) {
  if (VAR_5->be_f_offset > VAR_6->start)
   return -VAR_0;
  if (VAR_5->be_f_offset < VAR_6->inval)
   return -VAR_0;
  if (VAR_5->be_f_offset < VAR_6->cowread)
   return -VAR_0;



  VAR_6->inval = VAR_6->inval + VAR_5->be_length;
  VAR_6->cowread = VAR_5->be_f_offset + VAR_5->be_length;
  return 0;
 } else
  return -VAR_0;
}
