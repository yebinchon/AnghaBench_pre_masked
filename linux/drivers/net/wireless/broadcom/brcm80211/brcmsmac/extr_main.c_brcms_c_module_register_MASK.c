
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_pub {scalar_t__ wlc; } ;
struct brcms_info {int dummy; } ;
struct brcms_c_info {TYPE_1__* modulecb; } ;
struct TYPE_2__ {char* name; int (* down_fn ) (void*) ;struct brcms_info* hdl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;

int FUNC_1(struct brcms_pub *VAR_2,
       const char *VAR_3, struct brcms_info *VAR_4,
       int (*VAR_5)(void *VAR_6))
{
 struct brcms_c_info *VAR_7 = (struct brcms_c_info *) VAR_2->wlc;
 int VAR_8;


 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_7->modulecb[VAR_8].name[0] == '\0') {
   FUNC_0(VAR_7->modulecb[VAR_8].name, VAR_3,
    sizeof(VAR_7->modulecb[VAR_8].name) - 1);
   VAR_7->modulecb[VAR_8].hdl = VAR_4;
   VAR_7->modulecb[VAR_8].down_fn = VAR_5;
   return 0;
  }
 }

 return -VAR_1;
}
