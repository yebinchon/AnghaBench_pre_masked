
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct f_lb_opts {int lock; int qlen; scalar_t__ refcnt; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct f_lb_opts* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_1,
        const char *VAR_2, size_t VAR_3)
{
 struct f_lb_opts *VAR_4 = FUNC_3(VAR_1);
 int VAR_5;
 u32 VAR_6;

 FUNC_1(&VAR_4->lock);
 if (VAR_4->refcnt) {
  VAR_5 = -VAR_0;
  goto end;
 }

 VAR_5 = FUNC_0(VAR_2, 0, &VAR_6);
 if (VAR_5)
  goto end;

 VAR_4->qlen = VAR_6;
 VAR_5 = VAR_3;
end:
 FUNC_2(&VAR_4->lock);
 return VAR_5;
}
