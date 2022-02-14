
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmlogrdr_priv_t {int priv_lock; scalar_t__ dev_in_use; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct vmlogrdr_priv_t* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 int VAR_2;
 struct vmlogrdr_priv_t *VAR_3 = FUNC_0(VAR_1);

 VAR_2 = 0;
 if (VAR_3) {
  FUNC_3(&VAR_3->priv_lock);
  if (VAR_3->dev_in_use)
   VAR_2 = -VAR_0;
  FUNC_4(&VAR_3->priv_lock);
 }
 if (VAR_2)
  FUNC_2("vmlogrdr: device %s is busy. Refuse to suspend.\n",
         FUNC_1(VAR_1));
 return VAR_2;
}
