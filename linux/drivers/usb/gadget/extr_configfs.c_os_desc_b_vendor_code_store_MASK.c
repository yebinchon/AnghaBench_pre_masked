
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gadget_info {int lock; int b_vendor_code; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char const*,int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct gadget_info* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_0,
        const char *VAR_1, size_t VAR_2)
{
 struct gadget_info *VAR_3 = FUNC_3(VAR_0);
 int VAR_4;
 u8 VAR_5;

 FUNC_1(&VAR_3->lock);
 VAR_4 = FUNC_0(VAR_1, 0, &VAR_5);
 if (!VAR_4) {
  VAR_3->b_vendor_code = VAR_5;
  VAR_4 = VAR_2;
 }
 FUNC_2(&VAR_3->lock);

 return VAR_4;
}
