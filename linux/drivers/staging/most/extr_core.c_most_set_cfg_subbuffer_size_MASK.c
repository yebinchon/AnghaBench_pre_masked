
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int subbuffer_size; } ;
struct most_channel {TYPE_1__ cfg; } ;


 int VAR_0 ;
 struct most_channel* FUNC_0 (char*,char*) ;

int FUNC_1(char *VAR_1, char *VAR_2, u16 VAR_3)
{
 struct most_channel *VAR_4 = FUNC_0(VAR_1, VAR_2);

 if (!VAR_4)
  return -VAR_0;
 VAR_4->cfg.subbuffer_size = VAR_3;
 return 0;
}
