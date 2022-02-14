
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int dummy; } ;
typedef int s64 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_1 (int ,char const**,int*,int *,int *,int *,int *,int *) ;
 struct v4l2_ctrl* FUNC_2 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int *,int ,char const*,int,int ,int ,int ,int ,int *,int ,int ,int *,int *,int *) ;

struct v4l2_ctrl *FUNC_3(struct v4l2_ctrl_handler *VAR_4,
   const struct v4l2_ctrl_ops *VAR_5,
   u32 VAR_6, s64 VAR_7, s64 VAR_8, u64 VAR_9, s64 VAR_10)
{
 const char *VAR_11;
 enum v4l2_ctrl_type VAR_12;
 u32 VAR_13;

 FUNC_1(VAR_6, &VAR_11, &VAR_12, &VAR_7, &VAR_8, &VAR_9, &VAR_10, &VAR_13);
 if (VAR_12 == VAR_3 ||
     VAR_12 == VAR_2 ||
     VAR_12 >= VAR_1) {
  FUNC_0(VAR_4, -VAR_0);
  return ((void*)0);
 }
 return FUNC_2(VAR_4, VAR_5, ((void*)0), VAR_6, VAR_11, VAR_12,
        VAR_7, VAR_8, VAR_9, VAR_10, ((void*)0), 0,
        VAR_13, ((void*)0), ((void*)0), ((void*)0));
}
