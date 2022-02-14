
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mvpp2_prs_entry {int index; } ;
struct mvpp2 {int dummy; } ;
typedef int pe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,int,int ) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int,int ,int ) ;
 int FUNC_6 (struct mvpp2*,int ,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ) ;

int FUNC_9(struct mvpp2 *VAR_6, int VAR_7, u32 VAR_8, u32 VAR_9)
{
 struct mvpp2_prs_entry VAR_10;
 u8 *VAR_11, *VAR_12;
 int VAR_13, VAR_14;

 FUNC_0(&VAR_10, 0, sizeof(VAR_10));

 VAR_13 = FUNC_6(VAR_6,
     VAR_1,
     VAR_0);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_10.index = VAR_13;

 VAR_11 = (u8 *)&VAR_8;
 VAR_12 = (u8 *)&VAR_9;

 FUNC_3(&VAR_10, VAR_7, VAR_2);
 FUNC_4(&VAR_10, VAR_5, 1);

 for (VAR_14 = 0; VAR_14 < 4; VAR_14++) {
  FUNC_5(&VAR_10, VAR_14, VAR_11[VAR_14],
          VAR_12[VAR_14]);
 }

 FUNC_2(VAR_6, VAR_10.index, VAR_3);
 FUNC_7(&VAR_10, VAR_3);
 FUNC_8(&VAR_10, VAR_4);
 FUNC_1(VAR_6, &VAR_10);

 return 0;
}
