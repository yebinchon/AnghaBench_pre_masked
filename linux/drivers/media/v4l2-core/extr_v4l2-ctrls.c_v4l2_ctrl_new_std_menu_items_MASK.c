
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
 scalar_t__ FUNC_2 (int ) ;
 struct v4l2_ctrl* FUNC_3 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int *,int ,char const*,int,int ,int ,int ,int ,int *,int ,int ,char const* const*,int *,int *) ;

struct v4l2_ctrl *FUNC_4(struct v4l2_ctrl_handler *VAR_2,
   const struct v4l2_ctrl_ops *VAR_3, u32 VAR_4, u8 VAR_5,
   u64 VAR_6, u8 VAR_7, const char * const *VAR_8)
{
 enum v4l2_ctrl_type VAR_9;
 const char *VAR_10;
 u32 VAR_11;
 u64 VAR_12;
 s64 VAR_13;
 s64 VAR_14 = VAR_5;
 s64 VAR_15 = VAR_7;




 if (FUNC_2(VAR_4)) {
  FUNC_0(VAR_2, -VAR_0);
  return ((void*)0);
 }

 FUNC_1(VAR_4, &VAR_10, &VAR_9, &VAR_13, &VAR_14, &VAR_12, &VAR_15, &VAR_11);
 if (VAR_9 != VAR_1 || VAR_8 == ((void*)0)) {
  FUNC_0(VAR_2, -VAR_0);
  return ((void*)0);
 }
 return FUNC_3(VAR_2, VAR_3, ((void*)0), VAR_4, VAR_10, VAR_9,
        0, VAR_14, VAR_6, VAR_15, ((void*)0), 0,
        VAR_11, VAR_8, ((void*)0), ((void*)0));

}
