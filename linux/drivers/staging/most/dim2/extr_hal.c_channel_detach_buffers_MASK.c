
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct dim_channel {scalar_t__ done_sw_buffers_number; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;

__attribute__((used)) static bool FUNC_1(struct dim_channel *VAR_1, u16 VAR_2)
{
 if (VAR_2 > VAR_1->done_sw_buffers_number)
  return FUNC_0(VAR_0, "Channel underflow");

 VAR_1->done_sw_buffers_number -= VAR_2;
 return 1;
}
