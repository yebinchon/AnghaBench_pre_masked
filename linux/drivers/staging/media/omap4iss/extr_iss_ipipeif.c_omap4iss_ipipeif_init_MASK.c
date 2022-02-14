
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iss_ipipeif_device {int wait; int state; } ;
struct iss_device {struct iss_ipipeif_device ipipeif; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct iss_ipipeif_device*) ;

int FUNC_2(struct iss_device *VAR_1)
{
 struct iss_ipipeif_device *VAR_2 = &VAR_1->ipipeif;

 VAR_2->state = VAR_0;
 FUNC_0(&VAR_2->wait);

 return FUNC_1(VAR_2);
}
