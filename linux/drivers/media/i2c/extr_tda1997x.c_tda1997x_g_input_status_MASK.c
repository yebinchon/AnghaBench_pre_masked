
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {int lock; int * input_detect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct tda1997x_state* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int,int ,struct v4l2_subdev*,char*,int ,int ,int,int,int) ;

__attribute__((used)) static int
FUNC_6(struct v4l2_subdev *VAR_9, u32 *VAR_10)
{
 struct tda1997x_state *VAR_11 = FUNC_4(VAR_9);
 u32 VAR_12;
 u16 VAR_13;
 u16 VAR_14;

 FUNC_2(&VAR_11->lock);
 VAR_12 = FUNC_1(VAR_9, VAR_5) & VAR_2;
 VAR_13 = FUNC_0(VAR_9, VAR_4) & VAR_0;
 VAR_14 = FUNC_0(VAR_9, VAR_3) & VAR_1;
 FUNC_5(1, VAR_8, VAR_9, "inputs:%d/%d timings:%d/%d/%d\n",
   VAR_11->input_detect[0], VAR_11->input_detect[1],
   VAR_12, VAR_13, VAR_14);
 if (!VAR_11->input_detect[0] && !VAR_11->input_detect[1])
  *VAR_10 = VAR_6;
 else if (!VAR_12 || !VAR_13 || !VAR_14)
  *VAR_10 = VAR_7;
 else
  *VAR_10 = 0;
 FUNC_3(&VAR_11->lock);

 return 0;
}
