
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct spi_device {int dev; } ;
struct flash_info {int flags; scalar_t__ jedec_id; } ;


 int FUNC_0 (struct flash_info*) ;
 int VAR_0 ;
 struct flash_info* FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct flash_info* VAR_4 ;
 int FUNC_2 (struct spi_device*) ;
 int FUNC_3 (int *,char*,...) ;

__attribute__((used)) static struct flash_info *FUNC_4(struct spi_device *VAR_5,
           u64 VAR_6, bool VAR_7)
{
 struct flash_info *VAR_8;
 int VAR_9;

 for (VAR_8 = VAR_4;
      VAR_8 < VAR_4 + FUNC_0(VAR_4);
      VAR_8++) {
  if (VAR_7 && !(VAR_8->flags & VAR_2))
   continue;

  if (VAR_8->jedec_id == VAR_6) {
   FUNC_3(&VAR_5->dev, "OTP, sector protect%s\n",
    (VAR_8->flags & VAR_3) ?
    ", binary pagesize" : "");
   if (VAR_8->flags & VAR_3) {
    VAR_9 = FUNC_2(VAR_5);
    if (VAR_9 < 0) {
     FUNC_3(&VAR_5->dev, "status error %d\n",
      VAR_9);
     return FUNC_1(VAR_9);
    }
    if (VAR_9 & 0x1) {
     if (VAR_8->flags & VAR_1)
      return VAR_8;
    } else {
     if (!(VAR_8->flags & VAR_1))
      return VAR_8;
    }
   } else
    return VAR_8;
  }
 }

 return FUNC_1(-VAR_0);
}
