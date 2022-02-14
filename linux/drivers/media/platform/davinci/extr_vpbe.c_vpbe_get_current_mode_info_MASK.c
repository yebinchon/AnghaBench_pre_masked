
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpbe_enc_mode_info {int dummy; } ;
struct vpbe_device {struct vpbe_enc_mode_info current_timings; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct vpbe_device *VAR_1,
          struct vpbe_enc_mode_info *VAR_2)
{
 if (!VAR_2)
  return -VAR_0;

 *VAR_2 = VAR_1->current_timings;

 return 0;
}
