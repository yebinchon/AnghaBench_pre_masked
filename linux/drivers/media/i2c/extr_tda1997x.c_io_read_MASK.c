
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {int page_lock; int client; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct v4l2_subdev*,int) ;
 struct tda1997x_state* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int ,char*,int) ;

__attribute__((used)) static inline int FUNC_6(struct v4l2_subdev *VAR_0, u16 VAR_1)
{
 struct tda1997x_state *VAR_2 = FUNC_4(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->page_lock);
 if (FUNC_3(VAR_0, VAR_1 >> 8)) {
  VAR_3 = -1;
  goto out;
 }

 VAR_3 = FUNC_0(VAR_2->client, VAR_1&0xff);
 if (VAR_3 < 0) {
  FUNC_5(VAR_2->client, "read reg error: reg=%2x\n", VAR_1 & 0xff);
  VAR_3 = -1;
  goto out;
 }

out:
 FUNC_2(&VAR_2->page_lock);
 return VAR_3;
}
