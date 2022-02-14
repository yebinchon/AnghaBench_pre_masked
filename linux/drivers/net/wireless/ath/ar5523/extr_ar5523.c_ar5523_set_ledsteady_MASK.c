
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ar5523_cmd_ledsteady {void* ledmode; void* lednum; } ;
struct ar5523 {int dummy; } ;
typedef int led ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ar5523*,int ,struct ar5523_cmd_ledsteady*,int,int ) ;
 int FUNC_1 (struct ar5523*,char*,char*,char*) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct ar5523 *VAR_2, int VAR_3, int VAR_4)
{
 struct ar5523_cmd_ledsteady VAR_5;

 VAR_5.lednum = FUNC_2(VAR_3);
 VAR_5.ledmode = FUNC_2(VAR_4);

 FUNC_1(VAR_2, "set %s led %s (steady)\n",
     (VAR_3 == VAR_0) ? "link" : "activity",
     VAR_4 ? "on" : "off");
 return FUNC_0(VAR_2, VAR_1, &VAR_5, sizeof(VAR_5),
     0);
}
