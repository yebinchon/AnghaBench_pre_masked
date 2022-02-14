
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct twl4030_script {scalar_t__ size; int flags; int script; } ;
struct twl4030_power_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct twl4030_power_data const*,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_8(const struct twl4030_power_data *VAR_8,
          struct twl4030_script *VAR_9,
          u8 VAR_10)
{
 int VAR_11;
 static int VAR_12;


 if ((VAR_10 + VAR_9->size) > VAR_1) {
  FUNC_0("TWL4030 scripts too big error\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_6(VAR_10, VAR_9->script, VAR_9->size);
 if (VAR_11)
  goto out;

 if (VAR_9->flags & VAR_6) {
  VAR_11 = FUNC_5(VAR_10);
  if (VAR_11)
   goto out;
 }
 if (VAR_9->flags & VAR_4) {

  VAR_11 = FUNC_7(VAR_7, VAR_1,
           VAR_2);
  if (VAR_11)
   goto out;

  VAR_11 = FUNC_3(VAR_8, VAR_10);
  if (VAR_11)
   goto out;
  VAR_12 = 1;
 }
 if (VAR_9->flags & VAR_5) {
  VAR_11 = FUNC_4(VAR_10);
  if (VAR_11)
   goto out;
 }
 if (VAR_9->flags & VAR_3) {
  if (!VAR_12)
   FUNC_1("TWL4030: Bad order of scripts (sleep script before wakeup) Leads to boot failure on some boards\n");
  VAR_11 = FUNC_2(VAR_10);
 }
out:
 return VAR_11;
}
