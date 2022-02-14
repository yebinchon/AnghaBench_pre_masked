
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_printer_opts {int lock; int pnp_string; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ,int) ;
 struct f_printer_opts* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1,
           char *VAR_2)
{
 struct f_printer_opts *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0;

 FUNC_0(&VAR_3->lock);
 if (!VAR_3->pnp_string)
  goto unlock;

 VAR_4 = FUNC_2(VAR_2, VAR_3->pnp_string, VAR_0);
 if (VAR_4 >= VAR_0) {
  VAR_4 = VAR_0;
 } else if (VAR_2[VAR_4 - 1] != '\n' && VAR_4 + 1 < VAR_0) {
  VAR_2[VAR_4++] = '\n';
  VAR_2[VAR_4] = '\0';
 }

unlock:
 FUNC_1(&VAR_3->lock);

 return VAR_4;
}
