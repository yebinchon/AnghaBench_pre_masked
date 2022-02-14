
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
typedef int u32 ;
struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int dummy; } ;
typedef int s64 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_1 (int ,char const**,int*,int *,int *,int *,int *,int *) ;
 struct v4l2_ctrl* FUNC_2 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int *,int ,char const*,int,int ,int ,int ,int ,int *,int ,int ,int *,int const*,int *) ;

struct v4l2_ctrl *FUNC_3(struct v4l2_ctrl_handler *VAR_2,
   const struct v4l2_ctrl_ops *VAR_3,
   u32 VAR_4, u8 VAR_5, u8 VAR_6, const s64 *VAR_7)
{
 const char *VAR_8;
 enum v4l2_ctrl_type VAR_9;
 s64 VAR_10;
 u64 VAR_11;
 s64 VAR_12 = VAR_5;
 s64 VAR_13 = VAR_6;
 u32 VAR_14;

 FUNC_1(VAR_4, &VAR_8, &VAR_9, &VAR_10, &VAR_12, &VAR_11, &VAR_13, &VAR_14);
 if (VAR_9 != VAR_1) {
  FUNC_0(VAR_2, -VAR_0);
  return ((void*)0);
 }
 return FUNC_2(VAR_2, VAR_3, ((void*)0), VAR_4, VAR_8, VAR_9,
        0, VAR_12, 0, VAR_13, ((void*)0), 0,
        VAR_14, ((void*)0), VAR_7, ((void*)0));
}
