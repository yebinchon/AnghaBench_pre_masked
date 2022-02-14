
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct expander_device {int num_phys; } ;
struct domain_device {struct expander_device ex_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct domain_device*,int *,int *,int) ;

int FUNC_4(struct domain_device *VAR_4, int VAR_5)
{
 struct expander_device *VAR_6 = &VAR_4->ex_dev;
 int VAR_7 = 0;
 u8 *VAR_8;
 u8 *VAR_9;

 VAR_8 = FUNC_0(VAR_0);
 if (!VAR_8)
  return -VAR_2;

 VAR_9 = FUNC_1(VAR_1);
 if (!VAR_9) {
  FUNC_2(VAR_8);
  return -VAR_2;
 }

 VAR_8[1] = VAR_3;

 if (0 <= VAR_5 && VAR_5 < VAR_6->num_phys) {
  VAR_7 = FUNC_3(VAR_4, VAR_8, VAR_9, VAR_5);
 } else {
  int VAR_10;

  for (VAR_10 = 0; VAR_10 < VAR_6->num_phys; VAR_10++) {
   VAR_7 = FUNC_3(VAR_4, VAR_8,
        VAR_9, VAR_10);
   if (VAR_7)
    goto out_err;
  }
 }
out_err:
 FUNC_2(VAR_9);
 FUNC_2(VAR_8);
 return VAR_7;
}
