
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct gadget_info {int lock; scalar_t__ qw_sign; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct gadget_info* FUNC_3 (struct config_item*) ;
 int FUNC_4 (char const*,int,int ,int *,int) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_2, const char *VAR_3,
         size_t VAR_4)
{
 struct gadget_info *VAR_5 = FUNC_3(VAR_2);
 int VAR_6, VAR_7;

 VAR_7 = FUNC_0((int)VAR_4, VAR_0 >> 1);
 if (VAR_3[VAR_7 - 1] == '\n')
  --VAR_7;

 FUNC_1(&VAR_5->lock);
 VAR_6 = FUNC_4(VAR_3, VAR_7,
         VAR_1, (wchar_t *) VAR_5->qw_sign,
         VAR_0);
 if (VAR_6 > 0)
  VAR_6 = VAR_4;
 FUNC_2(&VAR_5->lock);

 return VAR_6;
}
