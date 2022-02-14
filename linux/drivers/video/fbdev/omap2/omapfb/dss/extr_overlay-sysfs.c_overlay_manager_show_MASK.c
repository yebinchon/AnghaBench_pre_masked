
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_overlay {TYPE_1__* manager; } ;
typedef int ssize_t ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;

__attribute__((used)) static ssize_t FUNC_1(struct omap_overlay *VAR_1, char *VAR_2)
{
 return FUNC_0(VAR_2, VAR_0, "%s\n",
   VAR_1->manager ? VAR_1->manager->name : "<none>");
}
