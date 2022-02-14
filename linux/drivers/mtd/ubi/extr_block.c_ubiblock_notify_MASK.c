
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int vol_type; } ;
struct ubi_notification {TYPE_1__ vi; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(struct notifier_block *VAR_2,
    unsigned long VAR_3, void *VAR_4)
{
 struct ubi_notification *VAR_5 = VAR_4;

 switch (VAR_3) {
 case 131:




  break;
 case 130:
  FUNC_0(&VAR_5->vi);
  break;
 case 129:
  FUNC_1(&VAR_5->vi);
  break;
 case 128:




  if (VAR_5->vi.vol_type == VAR_1)
   FUNC_1(&VAR_5->vi);
  break;
 default:
  break;
 }
 return VAR_0;
}
