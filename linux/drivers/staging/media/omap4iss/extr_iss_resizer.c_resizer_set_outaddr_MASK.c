
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_mbus_framefmt {scalar_t__ code; int height; } ;
struct TYPE_2__ {int bpl_value; } ;
struct iss_resizer_device {TYPE_1__ video_out; struct v4l2_mbus_framefmt* formats; } ;
struct iss_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct iss_device*,int ,int ,int) ;
 struct iss_device* FUNC_1 (struct iss_resizer_device*) ;

__attribute__((used)) static void FUNC_2(struct iss_resizer_device *VAR_13, u32 VAR_14)
{
 struct iss_device *VAR_15 = FUNC_1(VAR_13);
 struct v4l2_mbus_framefmt *VAR_16, *VAR_17;

 VAR_16 = &VAR_13->formats[VAR_3];
 VAR_17 = &VAR_13->formats[VAR_4];


 FUNC_0(VAR_15, VAR_2, VAR_9,
        (VAR_14 >> 16) & 0xffff);
 FUNC_0(VAR_15, VAR_2, VAR_10,
        VAR_14 & 0xffff);


 FUNC_0(VAR_15, VAR_2, VAR_11,
        (VAR_14 >> 16) & 0xffff);
 FUNC_0(VAR_15, VAR_2, VAR_12,
        VAR_14 & 0xffff);


 if ((VAR_16->code == VAR_0) &&
     (VAR_17->code == VAR_1)) {
  u32 VAR_18 = VAR_14 + VAR_13->video_out.bpl_value
      * VAR_17->height;


  if ((VAR_18 ^ VAR_14) & 0x7f) {
   VAR_18 &= ~0x7f;
   VAR_18 += 0x80;
   VAR_18 |= VAR_14 & 0x7f;
  }


  FUNC_0(VAR_15, VAR_2, VAR_5,
         (VAR_18 >> 16) & 0xffff);
  FUNC_0(VAR_15, VAR_2, VAR_6,
         VAR_18 & 0xffff);


  FUNC_0(VAR_15, VAR_2, VAR_7,
         (VAR_18 >> 16) & 0xffff);
  FUNC_0(VAR_15, VAR_2, VAR_8,
         VAR_18 & 0xffff);
 }
}
