
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_handler {int error; } ;



__attribute__((used)) static inline int FUNC_0(struct v4l2_ctrl_handler *VAR_0, int VAR_1)
{
 if (VAR_0->error == 0)
  VAR_0->error = VAR_1;
 return VAR_1;
}
