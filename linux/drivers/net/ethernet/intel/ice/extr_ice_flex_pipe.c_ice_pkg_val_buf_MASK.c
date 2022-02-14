
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ice_buf_hdr {int data_end; int section_count; } ;
struct ice_buf {scalar_t__ buf; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct ice_buf_hdr *FUNC_1(struct ice_buf *VAR_4)
{
 struct ice_buf_hdr *VAR_5;
 u16 VAR_6;
 u16 VAR_7;

 VAR_5 = (struct ice_buf_hdr *)VAR_4->buf;

 VAR_6 = FUNC_0(VAR_5->section_count);
 if (VAR_6 < VAR_2 || VAR_6 > VAR_0)
  return ((void*)0);

 VAR_7 = FUNC_0(VAR_5->data_end);
 if (VAR_7 < VAR_3 || VAR_7 > VAR_1)
  return ((void*)0);

 return VAR_5;
}
