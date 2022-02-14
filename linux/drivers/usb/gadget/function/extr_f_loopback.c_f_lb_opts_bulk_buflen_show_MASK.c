
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_lb_opts {int bulk_buflen; int lock; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,char*,int) ;
 struct f_lb_opts* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_0, char *VAR_1)
{
 struct f_lb_opts *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_0(&VAR_2->lock);
 VAR_3 = FUNC_2(VAR_1, "%d\n", VAR_2->bulk_buflen);
 FUNC_1(&VAR_2->lock);

 return VAR_3;
}
