
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f2fs_io_info {int temp; int sbi; } ;
struct TYPE_2__ {int active_logs; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int FUNC_3 (struct f2fs_io_info*) ;
 int FUNC_4 (struct f2fs_io_info*) ;
 int FUNC_5 (struct f2fs_io_info*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(struct f2fs_io_info *VAR_3)
{
 int VAR_4 = 0;

 switch (FUNC_0(VAR_3->sbi).active_logs) {
 case 2:
  VAR_4 = FUNC_3(VAR_3);
  break;
 case 4:
  VAR_4 = FUNC_4(VAR_3);
  break;
 case 6:
  VAR_4 = FUNC_5(VAR_3);
  break;
 default:
  FUNC_6(VAR_3->sbi, 1);
 }

 if (FUNC_1(VAR_4))
  VAR_3->temp = VAR_1;
 else if (FUNC_2(VAR_4))
  VAR_3->temp = VAR_2;
 else
  VAR_3->temp = VAR_0;
 return VAR_4;
}
