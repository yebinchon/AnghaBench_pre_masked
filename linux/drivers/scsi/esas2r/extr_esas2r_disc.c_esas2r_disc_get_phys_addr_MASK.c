
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct esas2r_sg_context {scalar_t__ length; struct esas2r_adapter* adapter; } ;
struct esas2r_adapter {int * uncached; scalar_t__ disc_buffer; scalar_t__ uncached_phys; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static u32 FUNC_1(struct esas2r_sg_context *VAR_1, u64 *VAR_2)
{
 struct esas2r_adapter *VAR_3 = VAR_1->adapter;

 if (VAR_1->length > VAR_0)
  FUNC_0();

 *VAR_2 = VAR_3->uncached_phys
  + (u64)((u8 *)VAR_3->disc_buffer - VAR_3->uncached);

 return VAR_1->length;
}
