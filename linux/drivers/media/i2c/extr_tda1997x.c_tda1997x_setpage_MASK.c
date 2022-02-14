
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct v4l2_subdev {int dummy; } ;
struct tda1997x_state {scalar_t__ page; int client; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 struct tda1997x_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int ,char*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, u8 VAR_2)
{
 struct tda1997x_state *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;

 if (VAR_3->page != VAR_2) {
  VAR_4 = FUNC_0(VAR_3->client,
   VAR_0, VAR_2);
  if (VAR_4 < 0) {
   FUNC_2(VAR_3->client,
    "write reg error:reg=%2x,val=%2x\n",
    VAR_0, VAR_2);
   return VAR_4;
  }
  VAR_3->page = VAR_2;
 }
 return 0;
}
