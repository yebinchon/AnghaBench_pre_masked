
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct gadget_info {scalar_t__ qw_sign; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct gadget_info* FUNC_0 (struct config_item*) ;
 int FUNC_1 (int *,int ,int ,char*,scalar_t__) ;

__attribute__((used)) static ssize_t FUNC_2(struct config_item *VAR_3, char *VAR_4)
{
 struct gadget_info *VAR_5 = FUNC_0(VAR_3);
 int VAR_6;

 VAR_6 = FUNC_1((wchar_t *) VAR_5->qw_sign, VAR_0,
         VAR_2, VAR_4, VAR_1 - 1);
 VAR_4[VAR_6++] = '\n';

 return VAR_6;
}
