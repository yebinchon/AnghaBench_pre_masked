
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ps3av_send_hdr {int cid; scalar_t__ size; int version; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_0(u32 VAR_2, u16 VAR_3, struct ps3av_send_hdr *VAR_4)
{
 VAR_4->version = VAR_1;
 VAR_4->size = VAR_3 - VAR_0;
 VAR_4->cid = VAR_2;
}
