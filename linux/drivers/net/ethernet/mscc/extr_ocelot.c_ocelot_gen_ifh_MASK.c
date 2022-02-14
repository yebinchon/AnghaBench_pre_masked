
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct frame_info {int rew_op; int port; int tag_type; int vid; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(u32 *VAR_1, struct frame_info *VAR_2)
{
 VAR_1[0] = VAR_0 | ((0x1ff & VAR_2->rew_op) << 21);
 VAR_1[1] = (0xf00 & VAR_2->port) >> 8;
 VAR_1[2] = (0xff & VAR_2->port) << 24;
 VAR_1[3] = (VAR_2->tag_type << 16) | VAR_2->vid;

 return 0;
}
