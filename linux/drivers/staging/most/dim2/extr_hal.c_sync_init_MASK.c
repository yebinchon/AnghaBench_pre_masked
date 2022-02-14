
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct dim_channel {scalar_t__ done_sw_buffers_number; int bytes_per_frame; scalar_t__ packet_length; int addr; int state; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dim_channel *VAR_0, u8 VAR_1, u16 VAR_2)
{
 FUNC_0(&VAR_0->state);

 VAR_0->addr = VAR_1;

 VAR_0->packet_length = 0;
 VAR_0->bytes_per_frame = VAR_2;
 VAR_0->done_sw_buffers_number = 0;
}
