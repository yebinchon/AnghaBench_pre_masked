
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct slim_val_inf {size_t num_bytes; int * comp; int * wbuf; int * rbuf; int start_offset; } ;



__attribute__((used)) static void FUNC_0(struct slim_val_inf *VAR_0, u32 VAR_1,
    size_t VAR_2, u8 *VAR_3, u8 *VAR_4)
{
 VAR_0->start_offset = VAR_1;
 VAR_0->num_bytes = VAR_2;
 VAR_0->rbuf = VAR_3;
 VAR_0->wbuf = VAR_4;
 VAR_0->comp = ((void*)0);
}
