
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct m5mols_info {struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;




 int VAR_11 ;
 int FUNC_0 (struct v4l2_subdev*,int ,unsigned int) ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,unsigned int,unsigned int,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(struct m5mols_info *VAR_12, int VAR_13)
{
 unsigned int VAR_14 = VAR_6;
 unsigned int VAR_15 = VAR_10;
 unsigned int VAR_16 = 0, VAR_17 = 0;
 struct v4l2_subdev *VAR_18 = &VAR_12->sd;
 int VAR_19 = 0;

 switch (VAR_13) {
 case 131:
  VAR_14 = VAR_7;
  break;
 case 129:
  VAR_15 = VAR_9;
  break;
 case 130:
  VAR_15 = VAR_8;
  break;
 case 128:
  VAR_14 = VAR_7;
  VAR_16 = VAR_5;
  VAR_17 = VAR_4;
  break;
 }

 VAR_19 = FUNC_0(VAR_18, VAR_3, VAR_15);
 if (!VAR_19)
  VAR_19 = FUNC_0(VAR_18, VAR_2, VAR_14);

 if (VAR_19 == 0 && VAR_14 == VAR_7) {
  VAR_19 = FUNC_0(VAR_18, VAR_1, VAR_16);
  if (!VAR_19)
   VAR_19 = FUNC_0(VAR_18, VAR_0, VAR_17);
 }

 FUNC_1(1, VAR_11, VAR_18,
   "p_effect: %#x, m_effect: %#x, r: %#x, b: %#x (%d)\n",
   VAR_15, VAR_14, VAR_16, VAR_17, VAR_19);

 return VAR_19;
}
