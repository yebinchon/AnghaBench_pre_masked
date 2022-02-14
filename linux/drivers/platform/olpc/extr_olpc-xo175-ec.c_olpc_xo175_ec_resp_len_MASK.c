
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ec_cmd_t {scalar_t__ cmd; int bytes_returned; } ;


 int VAR_0 ;
 struct ec_cmd_t* VAR_1 ;

__attribute__((used)) static int FUNC_0(u8 VAR_2)
{
 const struct ec_cmd_t *VAR_3;

 for (VAR_3 = VAR_1; VAR_3->cmd; VAR_3++) {
  if (VAR_3->cmd == VAR_2)
   return VAR_3->bytes_returned;
 }

 return -VAR_0;
}
