
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* direction; } ;
struct most_channel {TYPE_1__ cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 struct most_channel* FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*) ;

int FUNC_3(char *VAR_4, char *VAR_5, char *VAR_6)
{
 struct most_channel *VAR_7 = FUNC_0(VAR_4, VAR_5);

 if (!VAR_7)
  return -VAR_1;
 if (!FUNC_2(VAR_6, "dir_rx\n")) {
  VAR_7->cfg.direction = VAR_2;
 } else if (!FUNC_2(VAR_6, "rx\n")) {
  VAR_7->cfg.direction = VAR_2;
 } else if (!FUNC_2(VAR_6, "dir_tx\n")) {
  VAR_7->cfg.direction = VAR_3;
 } else if (!FUNC_2(VAR_6, "tx\n")) {
  VAR_7->cfg.direction = VAR_3;
 } else {
  FUNC_1("Invalid direction\n");
  return -VAR_0;
 }
 return 0;
}
