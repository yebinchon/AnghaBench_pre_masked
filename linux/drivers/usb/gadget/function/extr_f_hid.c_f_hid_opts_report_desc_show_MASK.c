
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_hid_opts {int report_desc_length; int lock; int report_desc; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct f_hid_opts* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_0, char *VAR_1)
{
 struct f_hid_opts *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_1(&VAR_2->lock);
 VAR_3 = VAR_2->report_desc_length;
 FUNC_0(VAR_1, VAR_2->report_desc, VAR_2->report_desc_length);
 FUNC_2(&VAR_2->lock);

 return VAR_3;
}
