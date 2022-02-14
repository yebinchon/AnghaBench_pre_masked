
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_notification {int vi; int di; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;




 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_1, unsigned long VAR_2,
    void *VAR_3)
{
 struct ubi_notification *VAR_4 = VAR_3;

 switch (VAR_2) {
 case 131:
  FUNC_0(&VAR_4->di, &VAR_4->vi);
  break;
 case 130:
  FUNC_1(&VAR_4->vi);
  break;
 case 129:
  FUNC_2(&VAR_4->vi);
  break;
 case 128:
  FUNC_3(&VAR_4->vi);
  break;
 default:
  break;
 }
 return VAR_0;
}
