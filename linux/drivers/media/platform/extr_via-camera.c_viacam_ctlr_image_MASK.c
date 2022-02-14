
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bytesperline; scalar_t__ pixelformat; } ;
struct TYPE_3__ {int height; int bytesperline; } ;
struct via_camera {int n_cap_bufs; TYPE_2__ user_format; TYPE_1__ sensor_format; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct via_camera*) ;
 int FUNC_1 (struct via_camera*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct via_camera *VAR_17)
{
 int VAR_18;





 FUNC_1(VAR_17, VAR_1, ~(VAR_6|VAR_4));




 FUNC_1(VAR_17, VAR_11, 0x06200120);
 FUNC_1(VAR_17, VAR_14, 0x01de0000);
 FUNC_0(VAR_17);



 FUNC_1(VAR_17, VAR_12,
   (VAR_17->sensor_format.height << 16) |
   (VAR_17->sensor_format.bytesperline >> 3));
 FUNC_1(VAR_17, VAR_13, 0);
 FUNC_1(VAR_17, VAR_15,
   VAR_17->user_format.bytesperline & VAR_16);







 VAR_18 = VAR_4 |
  0x08000000 |
  VAR_7 |
  VAR_9 |
  VAR_5 |
  VAR_3;
 if (VAR_17->n_cap_bufs == 3)
  VAR_18 |= VAR_2;



 if (VAR_17->user_format.pixelformat == VAR_0)
  VAR_18 |= VAR_10;
 else
  VAR_18 |= VAR_8;
 FUNC_1(VAR_17, VAR_1, VAR_18);
}
