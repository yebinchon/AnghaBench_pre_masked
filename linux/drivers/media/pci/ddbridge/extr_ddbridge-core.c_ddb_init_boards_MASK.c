
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ddb_link {struct ddb_info* info; } ;
struct ddb_info {int board_control; int board_control_2; } ;
struct ddb {struct ddb_link* link; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 size_t VAR_1 ;
 int FUNC_1 (struct ddb_link*) ;
 int FUNC_2 (struct ddb*,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;

__attribute__((used)) static int FUNC_5(struct ddb *VAR_2)
{
 const struct ddb_info *VAR_3;
 struct ddb_link *VAR_4;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_4 = &VAR_2->link[VAR_5];
  VAR_3 = VAR_4->info;

  if (!VAR_3)
   continue;
  if (VAR_3->board_control) {
   FUNC_2(VAR_2, 0, FUNC_0(VAR_5) | VAR_0);
   FUNC_3(100);
   FUNC_2(VAR_2, VAR_3->board_control_2,
      FUNC_0(VAR_5) | VAR_0);
   FUNC_4(2000, 3000);
   FUNC_2(VAR_2,
      VAR_3->board_control_2 | VAR_3->board_control,
      FUNC_0(VAR_5) | VAR_0);
   FUNC_4(2000, 3000);
  }
  FUNC_1(VAR_4);
 }
 return 0;
}
