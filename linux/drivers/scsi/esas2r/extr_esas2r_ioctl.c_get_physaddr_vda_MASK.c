
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct esas2r_sg_context {scalar_t__ cur_offset; scalar_t__ adapter; } ;
struct esas2r_adapter {scalar_t__ ppvda_buffer; scalar_t__ vda_buffer; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static u32 FUNC_0(struct esas2r_sg_context *VAR_1, u64 *VAR_2)
{
 struct esas2r_adapter *VAR_3 = (struct esas2r_adapter *)VAR_1->adapter;
 int VAR_4 = (u8 *)VAR_1->cur_offset - (u8 *)VAR_3->vda_buffer;

 (*VAR_2) = VAR_3->ppvda_buffer + VAR_4;
 return VAR_0 - VAR_4;
}
