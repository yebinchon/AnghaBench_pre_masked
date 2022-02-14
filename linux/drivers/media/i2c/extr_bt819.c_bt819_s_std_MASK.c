
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct v4l2_subdev {TYPE_1__* v4l2_dev; } ;
struct timing {int vdelay; int vactive; int hdelay; int hactive; int hscale; } ;
struct bt819 {int norm; } ;
struct TYPE_2__ {int * notify; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bt819*,int,int,int) ;
 int FUNC_1 (struct bt819*,int,int) ;
 int VAR_5 ;
 struct timing* VAR_6 ;
 struct bt819* FUNC_2 (struct v4l2_subdev*) ;
 int FUNC_3 (int,int ,struct v4l2_subdev*,char*,unsigned long long) ;
 int FUNC_4 (struct v4l2_subdev*,char*) ;
 int FUNC_5 (struct v4l2_subdev*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_7, v4l2_std_id VAR_8)
{
 struct bt819 *VAR_9 = FUNC_2(VAR_7);
 struct timing *VAR_10 = ((void*)0);

 FUNC_3(1, VAR_5, VAR_7, "set norm %llx\n", (unsigned long long)VAR_8);

 if (VAR_7->v4l2_dev == ((void*)0) || VAR_7->v4l2_dev->notify == ((void*)0))
  FUNC_4(VAR_7, "no notify found!\n");

 if (VAR_8 & VAR_3) {
  FUNC_5(VAR_7, VAR_1, ((void*)0));
  FUNC_0(VAR_9, 0x01, 0, 1);
  FUNC_0(VAR_9, 0x01, 1, 0);
  FUNC_0(VAR_9, 0x01, 5, 0);
  FUNC_1(VAR_9, 0x18, 0x68);
  FUNC_1(VAR_9, 0x19, 0x5d);

  VAR_10 = &VAR_6[1];
 } else if (VAR_8 & VAR_4) {
  FUNC_5(VAR_7, VAR_1, ((void*)0));
  FUNC_0(VAR_9, 0x01, 0, 1);
  FUNC_0(VAR_9, 0x01, 1, 1);
  FUNC_0(VAR_9, 0x01, 5, 1);
  FUNC_1(VAR_9, 0x18, 0x7f);
  FUNC_1(VAR_9, 0x19, 0x72);

  VAR_10 = &VAR_6[0];
 } else {
  FUNC_3(1, VAR_5, VAR_7, "unsupported norm %llx\n",
    (unsigned long long)VAR_8);
  return -VAR_2;
 }
 FUNC_1(VAR_9, 0x03,
   (((VAR_10->vdelay >> 8) & 0x03) << 6) |
   (((VAR_10->vactive >> 8) & 0x03) << 4) |
   (((VAR_10->hdelay >> 8) & 0x03) << 2) |
   ((VAR_10->hactive >> 8) & 0x03));
 FUNC_1(VAR_9, 0x04, VAR_10->vdelay & 0xff);
 FUNC_1(VAR_9, 0x05, VAR_10->vactive & 0xff);
 FUNC_1(VAR_9, 0x06, VAR_10->hdelay & 0xff);
 FUNC_1(VAR_9, 0x07, VAR_10->hactive & 0xff);
 FUNC_1(VAR_9, 0x08, (VAR_10->hscale >> 8) & 0xff);
 FUNC_1(VAR_9, 0x09, VAR_10->hscale & 0xff);
 VAR_9->norm = VAR_8;
 FUNC_5(VAR_7, VAR_0, ((void*)0));
 return 0;
}
