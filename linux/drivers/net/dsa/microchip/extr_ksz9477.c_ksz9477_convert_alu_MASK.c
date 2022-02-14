
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct alu_struct {int is_static; int is_src_filter; int is_dst_filter; int prio_age; int mstp; int is_override; int is_use_fid; int port_forward; int fid; int* mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_0(struct alu_struct *VAR_11, u32 *VAR_12)
{
 VAR_11->is_static = !!(VAR_12[0] & VAR_9);
 VAR_11->is_src_filter = !!(VAR_12[0] & VAR_8);
 VAR_11->is_dst_filter = !!(VAR_12[0] & VAR_0);
 VAR_11->prio_age = (VAR_12[0] >> VAR_7) &
   VAR_6;
 VAR_11->mstp = VAR_12[0] & VAR_3;

 VAR_11->is_override = !!(VAR_12[1] & VAR_4);
 VAR_11->is_use_fid = !!(VAR_12[1] & VAR_10);
 VAR_11->port_forward = VAR_12[1] & VAR_5;

 VAR_11->fid = (VAR_12[2] >> VAR_2) & VAR_1;

 VAR_11->mac[0] = (VAR_12[2] >> 8) & 0xFF;
 VAR_11->mac[1] = VAR_12[2] & 0xFF;
 VAR_11->mac[2] = (VAR_12[3] >> 24) & 0xFF;
 VAR_11->mac[3] = (VAR_12[3] >> 16) & 0xFF;
 VAR_11->mac[4] = (VAR_12[3] >> 8) & 0xFF;
 VAR_11->mac[5] = VAR_12[3] & 0xFF;
}
