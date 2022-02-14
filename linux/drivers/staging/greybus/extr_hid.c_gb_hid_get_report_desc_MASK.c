
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wReportDescLength; } ;
struct gb_hid {int bundle; TYPE_1__ hdesc; int connection; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct gb_hid *VAR_1, char *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->bundle);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1->connection, VAR_0,
    ((void*)0), 0, VAR_2,
    FUNC_3(VAR_1->hdesc.wReportDescLength));

 FUNC_2(VAR_1->bundle);

 return VAR_3;
}
