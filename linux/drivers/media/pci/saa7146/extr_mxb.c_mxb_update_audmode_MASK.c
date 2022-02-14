
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {int audmode; } ;
struct mxb {int cur_mode; } ;


 int VAR_0 ;
 int FUNC_0 (struct mxb*,int ,int ,struct v4l2_tuner*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(struct mxb *VAR_2)
{
 struct v4l2_tuner VAR_3 = {
  .audmode = VAR_2->cur_mode,
 };

 FUNC_0(VAR_2, VAR_1, VAR_0, &VAR_3);
}
