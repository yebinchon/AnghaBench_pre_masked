
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct node_descriptor {scalar_t__ validity; int byte0; int params; int tag; int seq; int plant; int manufacturer; int model; int type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,char*,int,int) ;
 int FUNC_2 (char*,char*,int) ;
 char* FUNC_3 (char*,int ,int,char) ;
 int FUNC_4 (char*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_5(char *VAR_3, char *VAR_4, struct node_descriptor *VAR_5)
{
 FUNC_0(VAR_3, 0, VAR_2);
 FUNC_0(VAR_4, 0, VAR_1);

 if (VAR_5->validity != VAR_0) {
  FUNC_4(VAR_3, "n/a", VAR_2 - 1);
  FUNC_4(VAR_4, "n/a", VAR_1 - 1);
  return;
 }


 FUNC_1(VAR_3, VAR_2, "%02x,%06x", VAR_5->byte0, VAR_5->params);

 VAR_4 = FUNC_3(VAR_4, VAR_5->type, sizeof(VAR_5->type), '/');
 VAR_4 = FUNC_3(VAR_4, VAR_5->model, sizeof(VAR_5->model), ',');
 VAR_4 = FUNC_3(VAR_4, VAR_5->manufacturer, sizeof(VAR_5->manufacturer), '.');
 VAR_4 = FUNC_3(VAR_4, VAR_5->plant, sizeof(VAR_5->plant), 0);
 VAR_4 = FUNC_3(VAR_4, VAR_5->seq, sizeof(VAR_5->seq), ',');
 FUNC_2(VAR_4, "%04X", VAR_5->tag);
}
