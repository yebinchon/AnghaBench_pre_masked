
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {int client; int client_cec; } ;


 int FUNC_0 (int ,int ,int ) ;
 struct tda1997x_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,char*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, u8 VAR_1, u8 VAR_2)
{
 struct tda1997x_state *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_3->client_cec, VAR_1, VAR_2);
 if (VAR_4 < 0) {
  FUNC_2(VAR_3->client, "write reg error:reg=%2x,val=%2x\n",
   VAR_1, VAR_2);
  VAR_4 = -1;
 }

 return VAR_4;
}
