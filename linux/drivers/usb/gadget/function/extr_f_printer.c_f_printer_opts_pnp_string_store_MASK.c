
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_printer_opts {int pnp_string_allocated; char* pnp_string; int lock; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct f_printer_opts* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_2,
            const char *VAR_3, size_t VAR_4)
{
 struct f_printer_opts *VAR_5 = FUNC_4(VAR_2);
 char *VAR_6;
 int VAR_7;

 FUNC_2(&VAR_5->lock);

 VAR_6 = FUNC_1(VAR_3, VAR_4, VAR_1);
 if (!VAR_6) {
  VAR_7 = -VAR_0;
  goto unlock;
 }

 if (VAR_5->pnp_string_allocated)
  FUNC_0(VAR_5->pnp_string);

 VAR_5->pnp_string_allocated = 1;
 VAR_5->pnp_string = VAR_6;
 VAR_7 = VAR_4;
unlock:
 FUNC_3(&VAR_5->lock);

 return VAR_7;
}
