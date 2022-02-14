
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f_hid_opts {char* report_desc; size_t report_desc_length; int report_desc_alloc; int lock; scalar_t__ refcnt; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*,size_t,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct f_hid_opts* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_5,
         const char *VAR_6, size_t VAR_7)
{
 struct f_hid_opts *VAR_8 = FUNC_4(VAR_5);
 int VAR_9 = -VAR_0;
 char *VAR_10;

 FUNC_2(&VAR_8->lock);

 if (VAR_8->refcnt)
  goto end;
 if (VAR_7 > VAR_4) {
  VAR_9 = -VAR_2;
  goto end;
 }
 VAR_10 = FUNC_1(VAR_6, VAR_7, VAR_3);
 if (!VAR_10) {
  VAR_9 = -VAR_1;
  goto end;
 }
 FUNC_0(VAR_8->report_desc);
 VAR_8->report_desc = VAR_10;
 VAR_8->report_desc_length = VAR_7;
 VAR_8->report_desc_alloc = 1;
 VAR_9 = VAR_7;
end:
 FUNC_3(&VAR_8->lock);
 return VAR_9;
}
