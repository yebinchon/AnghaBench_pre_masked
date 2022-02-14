
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {int page_lock; int client; } ;
typedef int s32 ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct v4l2_subdev*,int) ;
 struct tda1997x_state* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int ,char*,int,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_0, u16 VAR_1, u8 VAR_2)
{
 struct tda1997x_state *VAR_3 = FUNC_4(VAR_0);
 s32 VAR_4 = 0;

 FUNC_1(&VAR_3->page_lock);
 if (FUNC_3(VAR_0, VAR_1 >> 8)) {
  VAR_4 = -1;
  goto out;
 }

 VAR_4 = FUNC_0(VAR_3->client, VAR_1 & 0xff, VAR_2);
 if (VAR_4 < 0) {
  FUNC_5(VAR_3->client, "write reg error:reg=%2x,val=%2x\n",
   VAR_1&0xff, VAR_2);
  VAR_4 = -1;
  goto out;
 }

out:
 FUNC_2(&VAR_3->page_lock);
 return VAR_4;
}
