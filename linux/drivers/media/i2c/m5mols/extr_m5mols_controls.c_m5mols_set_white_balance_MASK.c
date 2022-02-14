
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct m5mols_info {struct v4l2_subdev sd; } ;


 int FUNC_0 (unsigned short const**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short const VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct v4l2_subdev*,int ,unsigned short const) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,unsigned short const) ;

__attribute__((used)) static int FUNC_3(struct m5mols_info *VAR_5, int VAR_6)
{
 static const unsigned short VAR_7[][2] = {
  { 129, 139 },
  { 132, 142 },
  { 131, 141 },
  { 130, 140 },
  { 134, 143 },
  { 133, 138 },
  { 135, 144 },
  { 128, 137 },
  { 136, 145 },
 };
 int VAR_8;
 struct v4l2_subdev *VAR_9 = &VAR_5->sd;
 int VAR_10 = -VAR_2;

 for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_7); VAR_8++) {
  int VAR_11;
  if (VAR_7[VAR_8][0] != VAR_6)
   continue;

  FUNC_2(1, VAR_4, VAR_9,
    "Setting white balance to: %#x\n", VAR_7[VAR_8][0]);

  VAR_11 = VAR_7[VAR_8][0] == 136;
  VAR_10 = FUNC_1(VAR_9, VAR_1, VAR_11 ? 145 :
       VAR_3);
  if (VAR_10 < 0)
   return VAR_10;

  if (!VAR_11)
   VAR_10 = FUNC_1(VAR_9, VAR_0, VAR_7[VAR_8][1]);
 }

 return VAR_10;
}
