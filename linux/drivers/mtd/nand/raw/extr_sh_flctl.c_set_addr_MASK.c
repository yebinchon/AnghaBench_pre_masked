
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int options; } ;
struct sh_flctl {scalar_t__ rw_ADRCNT; scalar_t__ page_size; TYPE_1__ chip; } ;
struct mtd_info {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sh_flctl*) ;
 int FUNC_1 (struct sh_flctl*) ;
 int VAR_1 ;
 struct sh_flctl* FUNC_2 (struct mtd_info*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct mtd_info *VAR_2, int VAR_3, int VAR_4)
{
 struct sh_flctl *VAR_5 = FUNC_2(VAR_2);
 uint32_t VAR_6 = 0;

 if (VAR_3 == -1) {
  VAR_6 = VAR_4;
 } else if (VAR_4 != -1) {

  if (VAR_5->chip.options & VAR_1)
   VAR_3 >>= 1;
  if (VAR_5->page_size) {
   VAR_6 = VAR_3 & 0x0FFF;
   VAR_6 |= (VAR_4 & 0xff) << 16;
   VAR_6 |= ((VAR_4 >> 8) & 0xff) << 24;

   if (VAR_5->rw_ADRCNT == VAR_0) {
    uint32_t VAR_7;
    VAR_7 = (VAR_4 >> 16) & 0xff;
    FUNC_3(VAR_7, FUNC_1(VAR_5));
   }
  } else {
   VAR_6 = VAR_3;
   VAR_6 |= (VAR_4 & 0xff) << 8;
   VAR_6 |= ((VAR_4 >> 8) & 0xff) << 16;
   VAR_6 |= ((VAR_4 >> 16) & 0xff) << 24;
  }
 }
 FUNC_3(VAR_6, FUNC_0(VAR_5));
}
