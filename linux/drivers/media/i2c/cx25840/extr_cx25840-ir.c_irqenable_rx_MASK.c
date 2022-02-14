
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx25840_state {int c; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;
 scalar_t__ FUNC_1 (struct cx25840_state*) ;
 scalar_t__ FUNC_2 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static inline void FUNC_4(struct v4l2_subdev *VAR_5, u32 VAR_6)
{
 struct cx25840_state *VAR_7 = FUNC_3(VAR_5);

 if (FUNC_1(VAR_7) || FUNC_2(VAR_7))
  VAR_6 ^= VAR_1;
 VAR_6 &= (VAR_4 | VAR_2 | VAR_3);
 FUNC_0(VAR_7->c, VAR_0,
   ~(VAR_4 | VAR_2 | VAR_3), VAR_6);
}
