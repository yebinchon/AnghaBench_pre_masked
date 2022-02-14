
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct megasas_instance {scalar_t__ requestorId; scalar_t__ enable_fw_dev_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct megasas_instance*,int ) ;
 int FUNC_1 (struct megasas_instance*) ;
 int FUNC_2 (struct megasas_instance*,int) ;
 int FUNC_3 (struct megasas_instance*,int ) ;

__attribute__((used)) static
int FUNC_4(struct megasas_instance *VAR_4,
          int VAR_5)
{
 int VAR_6 = VAR_0;

 if (VAR_4->enable_fw_dev_list) {
  VAR_6 = FUNC_2(VAR_4, 0);
  if (VAR_6 != VAR_0)
   goto out;
 } else {
  if (VAR_5 & VAR_2) {
   VAR_6 = FUNC_1(VAR_4);

   if (VAR_6 != VAR_0)
    goto out;
  }

  if (VAR_5 & VAR_3) {
   if (!VAR_4->requestorId ||
       (VAR_4->requestorId &&
        FUNC_0(VAR_4, 0))) {
    VAR_6 = FUNC_3(VAR_4,
      VAR_1);
    if (VAR_6 != VAR_0)
     goto out;
   }
  }
 }

out:
 return VAR_6;
}
