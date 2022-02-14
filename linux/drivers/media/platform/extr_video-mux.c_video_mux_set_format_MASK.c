
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct video_mux {size_t active; int lock; struct v4l2_mbus_framefmt* format_mbus; struct media_pad* pads; } ;
struct v4l2_subdev_pad_config {int dummy; } ;
struct v4l2_mbus_framefmt {int code; scalar_t__ field; int height; int width; } ;
struct v4l2_subdev_format {size_t pad; struct v4l2_mbus_framefmt format; int which; } ;
struct TYPE_2__ {size_t num_pads; } ;
struct v4l2_subdev {TYPE_1__ entity; } ;
struct media_pad {int flags; size_t index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct v4l2_mbus_framefmt* FUNC_0 (struct v4l2_subdev*,struct v4l2_subdev_pad_config*,size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct video_mux* FUNC_3 (struct v4l2_subdev*) ;
 int FUNC_4 (int *,int,int,int ,int *,int,int,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_5,
       struct v4l2_subdev_pad_config *VAR_6,
       struct v4l2_subdev_format *VAR_7)
{
 struct video_mux *VAR_8 = FUNC_3(VAR_5);
 struct v4l2_mbus_framefmt *VAR_9, *VAR_10;
 struct media_pad *VAR_11 = &VAR_8->pads[VAR_7->pad];
 u16 VAR_12 = VAR_5->entity.num_pads - 1;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7->pad,
         VAR_7->which);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_12,
             VAR_7->which);
 if (!VAR_10)
  return -VAR_0;


 FUNC_4(&VAR_7->format.width, 1, 65536, 0,
         &VAR_7->format.height, 1, 65536, 0, 0);


 switch (VAR_7->format.code) {
 case 203:
 case 202:
 case 201:
 case 200:
 case 199:
 case 198:
 case 212:
 case 211:
 case 197:
 case 196:
 case 195:
 case 207:
 case 194:
 case 210:
 case 209:
 case 193:
 case 191:
 case 190:
 case 214:
 case 192:
 case 206:
 case 205:
 case 204:
 case 147:
 case 169:
 case 163:
 case 151:
 case 136:
 case 129:
 case 162:
 case 150:
 case 135:
 case 128:
 case 149:
 case 167:
 case 155:
 case 140:
 case 133:
 case 148:
 case 165:
 case 153:
 case 138:
 case 131:
 case 164:
 case 152:
 case 137:
 case 130:
 case 146:
 case 168:
 case 156:
 case 141:
 case 134:
 case 157:
 case 142:
 case 158:
 case 166:
 case 154:
 case 139:
 case 132:
 case 145:
 case 161:
 case 213:
 case 160:
 case 144:
 case 143:
 case 159:
 case 208:
 case 215:
 case 185:
 case 180:
 case 175:
 case 170:
 case 189:
 case 184:
 case 179:
 case 174:
 case 188:
 case 183:
 case 178:
 case 173:
 case 187:
 case 182:
 case 177:
 case 172:
 case 186:
 case 181:
 case 176:
 case 171:
  break;
 default:
  VAR_7->format.code = 147;
  break;
 }
 if (VAR_7->format.field == VAR_3)
  VAR_7->format.field = VAR_4;

 FUNC_1(&VAR_8->lock);


 if ((VAR_11->flags & VAR_2) && VAR_8->active >= 0)
  VAR_7->format = VAR_8->format_mbus[VAR_8->active];

 *VAR_9 = VAR_7->format;


 if ((VAR_11->flags & VAR_1) && (VAR_11->index == VAR_8->active))
  *VAR_10 = VAR_7->format;

 FUNC_2(&VAR_8->lock);

 return 0;
}
