
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct f_ss_opts {int isoc_interval; int lock; scalar_t__ refcnt; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct f_ss_opts* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 struct f_ss_opts *VAR_5 = FUNC_3(VAR_2);
 int VAR_6;
 u8 VAR_7;

 FUNC_1(&VAR_5->lock);
 if (VAR_5->refcnt) {
  VAR_6 = -VAR_0;
  goto end;
 }

 VAR_6 = FUNC_0(VAR_3, 0, &VAR_7);
 if (VAR_6)
  goto end;

 if (VAR_7 > 16) {
  VAR_6 = -VAR_1;
  goto end;
 }

 VAR_5->isoc_interval = VAR_7;
 VAR_6 = VAR_4;
end:
 FUNC_2(&VAR_5->lock);
 return VAR_6;
}
