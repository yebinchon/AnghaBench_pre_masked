
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int index; } ;
struct mvpp2 {int dummy; } ;
typedef int pe ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned short VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,int,int ) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_8 (struct mvpp2_prs_entry*,int ,int ,int ) ;
 int FUNC_9 (struct mvpp2*,int ,int ) ;
 int FUNC_10 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_11 (struct mvpp2_prs_entry*,int ) ;

__attribute__((used)) static int FUNC_12(struct mvpp2 *VAR_12, unsigned short VAR_13)
{
 struct mvpp2_prs_entry VAR_14;
 int VAR_15;

 if (VAR_13 != VAR_6)
  return -VAR_0;

 VAR_15 = FUNC_9(VAR_12, VAR_1,
     VAR_2);
 if (VAR_15 < 0)
  return VAR_15;

 FUNC_0(&VAR_14, 0, sizeof(VAR_14));
 FUNC_10(&VAR_14, VAR_7);
 VAR_14.index = VAR_15;


 FUNC_4(&VAR_14, VAR_7);
 FUNC_5(&VAR_14, VAR_10,
     VAR_9);
 FUNC_3(&VAR_14, VAR_5,
     VAR_5);

 FUNC_6(&VAR_14, -18, VAR_11);

 FUNC_8(&VAR_14, 0, VAR_3,
         VAR_4);
 FUNC_7(&VAR_14, 0, VAR_5);

 FUNC_11(&VAR_14, VAR_8);


 FUNC_2(VAR_12, VAR_14.index, VAR_7);
 FUNC_1(VAR_12, &VAR_14);

 return 0;
}
