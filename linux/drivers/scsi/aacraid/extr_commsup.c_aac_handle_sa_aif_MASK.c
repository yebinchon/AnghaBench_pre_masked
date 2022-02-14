
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fib {int hbacmd_size; } ;
struct aac_dev {int dummy; } ;
struct TYPE_2__ {int IDR; } ;


 TYPE_1__ VAR_0 ;






 int FUNC_0 (struct aac_dev*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct aac_dev*,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct aac_dev *VAR_1, struct fib *VAR_2)
{
 int VAR_3;
 u32 VAR_4 = 0;

 if (VAR_2->hbacmd_size & 130)
  VAR_4 = 130;
 else if (VAR_2->hbacmd_size & 131)
  VAR_4 = 131;
 else if (VAR_2->hbacmd_size & 128)
  VAR_4 = 128;
 else if (VAR_2->hbacmd_size & 129)
  VAR_4 = 129;
 else if (VAR_2->hbacmd_size & 132)
  VAR_4 = 132;
 else if (VAR_2->hbacmd_size & 133)
  VAR_4 = 133;

 switch (VAR_4) {
 case 130:
 case 131:
 case 128:
 case 129:
 case 133:

  FUNC_0(VAR_1);

  break;

 case 132:

  break;
 }

 for (VAR_3 = 1; VAR_3 <= 10; ++VAR_3) {
  VAR_4 = FUNC_2(VAR_1, VAR_0.IDR);
  if (VAR_4 & (1<<23)) {
   FUNC_1(" AIF not cleared by firmware - %d/%d)\n",
    VAR_3, 10);
   FUNC_3(1);
  }
 }
}
