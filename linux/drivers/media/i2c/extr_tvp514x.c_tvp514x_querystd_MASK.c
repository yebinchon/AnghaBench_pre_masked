
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct tvp514x_decoder {int input; TYPE_2__* std_list; int streaming; } ;
typedef enum tvp514x_std { ____Placeholder_tvp514x_std } tvp514x_std ;
typedef enum tvp514x_input { ____Placeholder_tvp514x_input } tvp514x_input ;
struct TYPE_3__ {int name; int id; } ;
struct TYPE_4__ {TYPE_1__ standard; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 struct tvp514x_decoder* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (struct v4l2_subdev*,int ) ;
 int FUNC_4 (struct v4l2_subdev*,int) ;
 int FUNC_5 (int,int ,struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_9, v4l2_std_id *VAR_10)
{
 struct tvp514x_decoder *VAR_11 = FUNC_1(VAR_9);
 enum tvp514x_std VAR_12;
 enum tvp514x_input VAR_13;
 u8 VAR_14, VAR_15;

 if (VAR_10 == ((void*)0))
  return -VAR_0;


 if (!VAR_11->streaming) {
  FUNC_4(VAR_9, 1);
  FUNC_0(VAR_1);
 }


 VAR_12 = FUNC_2(VAR_9);
 if (VAR_12 == VAR_6) {
  *VAR_10 = VAR_7;
  return 0;
 }

 VAR_13 = VAR_11->input;

 switch (VAR_13) {
 case 149:
 case 148:
 case 147:
 case 146:
 case 145:
 case 144:
 case 143:
 case 142:
 case 141:
 case 140:
  VAR_15 = VAR_3 |
   VAR_4 |
   VAR_5;
  break;

 case 139:
 case 137:
 case 135:
 case 138:
 case 136:
 case 134:
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  VAR_15 = VAR_4 |
   VAR_5;
  break;

 default:
  return -VAR_0;
 }

 VAR_14 = FUNC_3(VAR_9, VAR_2);
 if (VAR_15 != (VAR_14 & VAR_15)) {
  *VAR_10 = VAR_7;
  return 0;
 }

 *VAR_10 &= VAR_11->std_list[VAR_12].standard.id;

 FUNC_5(1, VAR_8, VAR_9, "Current STD: %s\n",
   VAR_11->std_list[VAR_12].standard.name);
 return 0;
}
