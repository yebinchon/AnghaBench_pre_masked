
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct upd64031a_state {int gr_mode; int direct_3dycs_connect; int ext_comp_sync; int ext_vert_sync; int* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct upd64031a_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int *) ;
 int FUNC_2 (struct v4l2_subdev*,size_t,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_8,
          u32 VAR_9, u32 VAR_10, u32 VAR_11)
{
 struct upd64031a_state *VAR_12 = FUNC_0(VAR_8);
 u8 VAR_13, VAR_14, VAR_15;

 VAR_12->gr_mode = (VAR_9 & 3) << 6;
 VAR_12->direct_3dycs_connect = (VAR_9 & 0xc) << 4;
 VAR_12->ext_comp_sync =
  (VAR_9 & VAR_6) << 1;
 VAR_12->ext_vert_sync =
  (VAR_9 & VAR_7) << 2;
 VAR_13 = (VAR_12->regs[VAR_2] & ~VAR_1) | VAR_12->gr_mode;
 VAR_14 = (VAR_12->regs[VAR_2] & ~VAR_5) |
  VAR_12->ext_comp_sync | VAR_12->ext_vert_sync;
 VAR_15 = (VAR_12->regs[VAR_4] & ~VAR_0) |
  VAR_12->direct_3dycs_connect;
 FUNC_2(VAR_8, VAR_2, VAR_13);
 FUNC_2(VAR_8, VAR_3, VAR_14);
 FUNC_2(VAR_8, VAR_4, VAR_15);
 return FUNC_1(VAR_8, ((void*)0));
}
