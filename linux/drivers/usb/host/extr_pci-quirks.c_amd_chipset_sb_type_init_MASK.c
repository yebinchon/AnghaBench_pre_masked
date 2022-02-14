
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int rev; int gen; } ;
struct amd_chipset_info {TYPE_2__ sb_type; TYPE_1__* smbus_dev; } ;
struct TYPE_3__ {int revision; } ;


 int VAR_0 ;
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
 void* FUNC_0 (int ,int,int *) ;

__attribute__((used)) static int FUNC_1(struct amd_chipset_info *VAR_13)
{
 u8 VAR_14 = 0;
 VAR_13->sb_type.gen = VAR_6;

 VAR_13->smbus_dev = FUNC_0(VAR_12,
   VAR_10, ((void*)0));
 if (VAR_13->smbus_dev) {
  VAR_14 = VAR_13->smbus_dev->revision;
  if (VAR_14 >= 0x10 && VAR_14 <= 0x1f)
   VAR_13->sb_type.gen = VAR_2;
  else if (VAR_14 >= 0x30 && VAR_14 <= 0x3f)
   VAR_13->sb_type.gen = VAR_3;
  else if (VAR_14 >= 0x40 && VAR_14 <= 0x4f)
   VAR_13->sb_type.gen = VAR_4;
 } else {
  VAR_13->smbus_dev = FUNC_0(VAR_11,
    VAR_9, ((void*)0));

  if (VAR_13->smbus_dev) {
   VAR_14 = VAR_13->smbus_dev->revision;
   if (VAR_14 >= 0x11 && VAR_14 <= 0x14)
    VAR_13->sb_type.gen = VAR_1;
   else if (VAR_14 >= 0x15 && VAR_14 <= 0x18)
    VAR_13->sb_type.gen = VAR_0;
   else if (VAR_14 >= 0x39 && VAR_14 <= 0x3a)
    VAR_13->sb_type.gen = VAR_7;
  } else {
   VAR_13->smbus_dev = FUNC_0(VAR_11,
         0x145c, ((void*)0));
   if (VAR_13->smbus_dev) {
    VAR_14 = VAR_13->smbus_dev->revision;
    VAR_13->sb_type.gen = VAR_5;
   } else {
    VAR_13->sb_type.gen = VAR_8;
    return 0;
   }
  }
 }
 VAR_13->sb_type.rev = VAR_14;
 return 1;
}
