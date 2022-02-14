
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ci_hdrc {int debugfs; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct ci_hdrc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,int,int ,struct ci_hdrc*,int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct ci_hdrc *VAR_9)
{
 VAR_9->debugfs = FUNC_1(FUNC_3(VAR_9->dev), ((void*)0));

 FUNC_2("device", VAR_0, VAR_9->debugfs, VAR_9,
       &VAR_2);
 FUNC_2("port_test", VAR_0 | VAR_1, VAR_9->debugfs, VAR_9,
       &VAR_4);
 FUNC_2("qheads", VAR_0, VAR_9->debugfs, VAR_9,
       &VAR_5);
 FUNC_2("requests", VAR_0, VAR_9->debugfs, VAR_9,
       &VAR_7);

 if (FUNC_0(VAR_9)) {
  FUNC_2("otg", VAR_0, VAR_9->debugfs, VAR_9,
        &VAR_3);
 }

 FUNC_2("role", VAR_0 | VAR_1, VAR_9->debugfs, VAR_9,
       &VAR_8);
 FUNC_2("registers", VAR_0, VAR_9->debugfs, VAR_9,
       &VAR_6);
}
