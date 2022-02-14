
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mode; int name; } ;
struct TYPE_3__ {TYPE_2__ attr; int show; } ;
struct status_attr {TYPE_1__ attr; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__,char*,int) ;
 struct status_attr* VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_3(int VAR_4)
{
 struct status_attr *VAR_5;

 VAR_5 = VAR_2 + VAR_4;
 if (VAR_4 == 0)
  FUNC_1(VAR_5->name, "status");
 else
  FUNC_0(VAR_5->name, VAR_0+1, "status.%d", VAR_4);
 VAR_5->attr.attr.name = VAR_5->name;
 VAR_5->attr.attr.mode = VAR_1;
 VAR_5->attr.show = VAR_3;
 FUNC_2(&VAR_5->attr.attr);
}
