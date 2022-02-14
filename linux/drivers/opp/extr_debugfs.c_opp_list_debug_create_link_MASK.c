
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opp_table {int dentry_name; } ;
struct opp_device {int dentry; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct opp_device *VAR_2,
           struct opp_table *VAR_3)
{
 char VAR_4[VAR_0];

 FUNC_1(VAR_2->dev, VAR_4);


 VAR_2->dentry = FUNC_0(VAR_4, VAR_1,
       VAR_3->dentry_name);
}
