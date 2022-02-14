
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct can_frame {int can_id; int can_dlc; int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct spi_device*,int*,int) ;
 int FUNC_1 (int*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct spi_device *VAR_14, struct can_frame *VAR_15)
{
 u8 VAR_16[VAR_12];

 VAR_16[VAR_11] = 0;

 if (VAR_15->can_id & VAR_0) {

  VAR_16[VAR_8] = (VAR_15->can_id & VAR_1) >> 21;
  VAR_16[VAR_8 + 1] =
   (((VAR_15->can_id & VAR_1) >> 13) & 0xe0) |
   VAR_5 |
   (((VAR_15->can_id & VAR_1) >> 15) & 0x07);
  VAR_16[VAR_8 + 2] =
   (VAR_15->can_id & VAR_1) >> 7;
  VAR_16[VAR_8 + 3] =
   ((VAR_15->can_id & VAR_1) << 1) |
   ((VAR_15->can_id & VAR_2) ? 1 : 0);

  VAR_16[VAR_7] = VAR_15->can_dlc;

  FUNC_1(VAR_16 + VAR_6,
         VAR_15->data, VAR_15->can_dlc);

  FUNC_0(VAR_14, VAR_16, VAR_12 -
       (VAR_4 - VAR_15->can_dlc));
 } else {

  VAR_16[VAR_8] = (VAR_15->can_id & VAR_3) >> 3;
  VAR_16[VAR_8 + 1] =
   ((VAR_15->can_id & VAR_3) << 5) |
   ((VAR_15->can_id & VAR_2) ? (1 << 4) : 0);

  VAR_16[VAR_10] = VAR_15->can_dlc;

  FUNC_1(VAR_16 + VAR_9,
         VAR_15->data, VAR_15->can_dlc);

  FUNC_0(VAR_14, VAR_16, VAR_13 -
       (VAR_4 - VAR_15->can_dlc));
 }
}
