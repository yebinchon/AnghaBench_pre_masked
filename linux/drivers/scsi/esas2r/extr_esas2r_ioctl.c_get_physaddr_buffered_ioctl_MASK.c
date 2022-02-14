
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct esas2r_sg_context {scalar_t__ cur_offset; } ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static u32 FUNC_0(struct esas2r_sg_context *VAR_3,
           u64 *VAR_4)
{
 int VAR_5 = (u8 *)VAR_3->cur_offset - VAR_0;

 (*VAR_4) = VAR_1 + VAR_5;
 return VAR_2 - VAR_5;
}
