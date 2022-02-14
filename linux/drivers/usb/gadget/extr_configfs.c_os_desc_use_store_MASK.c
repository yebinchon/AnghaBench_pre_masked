
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gadget_info {int use_os_desc; int lock; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct gadget_info* FUNC_2 (struct config_item*) ;
 int FUNC_3 (char const*,int*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_0, const char *VAR_1,
     size_t VAR_2)
{
 struct gadget_info *VAR_3 = FUNC_2(VAR_0);
 int VAR_4;
 bool VAR_5;

 FUNC_0(&VAR_3->lock);
 VAR_4 = FUNC_3(VAR_1, &VAR_5);
 if (!VAR_4) {
  VAR_3->use_os_desc = VAR_5;
  VAR_4 = VAR_2;
 }
 FUNC_1(&VAR_3->lock);

 return VAR_4;
}
