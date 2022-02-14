
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {scalar_t__ en; } ;
struct ngene {TYPE_2__* card_info; TYPE_1__ ci; } ;
struct TYPE_4__ {int fw_version; int* io_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ngene*,int) ;
 int FUNC_1 (struct ngene*,int*) ;

__attribute__((used)) static int FUNC_2(struct ngene *VAR_4)
{
 int VAR_5;

 if (VAR_4->card_info->fw_version >= 17) {
  u8 VAR_6[6] = { 0x60, 0x60, 0x00, 0x00, 0x00, 0x00 };
  u8 VAR_7[6] = { 0x30, 0x30, 0x00, 0x30, 0x30, 0x00 };
  u8 VAR_8[6] = { 0x30, 0x30, 0x00, 0x28, 0x00, 0x38 };
  u8 *VAR_9 = VAR_6;

  if (VAR_4->card_info->io_type[2]&VAR_2 &&
      VAR_4->card_info->io_type[3]&VAR_2) {
   VAR_9 = VAR_7;
   if (VAR_4->card_info->io_type[4]&VAR_3 &&
       VAR_4->ci.en)
    VAR_9 = VAR_8;
  }
  VAR_5 = FUNC_1(VAR_4, VAR_9);
 } else {
  int VAR_10 = VAR_1;

  if (VAR_4->card_info->io_type[3] == VAR_2)
   VAR_10 = VAR_0;
  VAR_5 = FUNC_0(VAR_4, VAR_10);
 }
 return VAR_5;
}
