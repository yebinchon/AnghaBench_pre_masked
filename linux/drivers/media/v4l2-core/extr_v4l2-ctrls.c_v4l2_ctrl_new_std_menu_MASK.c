
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8 ;
typedef int u64 ;
typedef int u32 ;
struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int dummy; } ;
typedef unsigned int s64 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_1 (int ,char const**,int*,unsigned int*,unsigned int*,int *,unsigned int*,int *) ;
 unsigned int* FUNC_2 (int ,unsigned int*) ;
 char** FUNC_3 (int ) ;
 struct v4l2_ctrl* FUNC_4 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int *,int ,char const*,int,int ,unsigned int,int ,unsigned int,int *,int ,int ,char const* const*,unsigned int const*,int *) ;

struct v4l2_ctrl *FUNC_5(struct v4l2_ctrl_handler *VAR_3,
   const struct v4l2_ctrl_ops *VAR_4,
   u32 VAR_5, u8 VAR_6, u64 VAR_7, u8 VAR_8)
{
 const char * const *VAR_9 = ((void*)0);
 const s64 *VAR_10 = ((void*)0);
 unsigned int VAR_11 = 0;
 const char *VAR_12;
 enum v4l2_ctrl_type VAR_13;
 s64 VAR_14;
 s64 VAR_15 = VAR_6;
 s64 VAR_16 = VAR_8;
 u64 VAR_17;
 u32 VAR_18;

 FUNC_1(VAR_5, &VAR_12, &VAR_13, &VAR_14, &VAR_15, &VAR_17, &VAR_16, &VAR_18);

 if (VAR_13 == VAR_2)
  VAR_9 = FUNC_3(VAR_5);
 else if (VAR_13 == VAR_1)
  VAR_10 = FUNC_2(VAR_5, &VAR_11);

 if ((!VAR_9 && !VAR_10) || (VAR_10 && VAR_15 > VAR_11)) {
  FUNC_0(VAR_3, -VAR_0);
  return ((void*)0);
 }
 return FUNC_4(VAR_3, VAR_4, ((void*)0), VAR_5, VAR_12, VAR_13,
        0, VAR_15, VAR_7, VAR_16, ((void*)0), 0,
        VAR_18, VAR_9, VAR_10, ((void*)0));
}
