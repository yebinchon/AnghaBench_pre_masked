
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
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,int,int ) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ,int ) ;
 int FUNC_7 (struct mvpp2_prs_entry*,int,int,int) ;
 int FUNC_8 (struct mvpp2*,int ,int ) ;
 int FUNC_9 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_10 (struct mvpp2_prs_entry*,int ) ;

__attribute__((used)) static int FUNC_11(struct mvpp2 *VAR_14, unsigned short VAR_15)
{
 struct mvpp2_prs_entry VAR_16;
 int VAR_17, VAR_18;

 VAR_18 = FUNC_8(VAR_14, VAR_1,
     VAR_2);
 if (VAR_18 < 0)
  return VAR_18;

 FUNC_0(&VAR_16, 0, sizeof(VAR_16));
 FUNC_9(&VAR_16, VAR_8);
 VAR_16.index = VAR_18;

 switch (VAR_15) {
 case 128:
  FUNC_7(&VAR_16, 0, VAR_5,
          VAR_6);
  FUNC_5(&VAR_16, VAR_12,
      VAR_10);
  break;
 case 129:
  VAR_17 = VAR_3;
  FUNC_7(&VAR_16, 0, VAR_17, VAR_17);
  FUNC_7(&VAR_16, 1, VAR_17, VAR_17);
  FUNC_7(&VAR_16, 2, VAR_17, VAR_17);
  FUNC_7(&VAR_16, 3, VAR_17, VAR_17);
  FUNC_5(&VAR_16, VAR_11,
      VAR_10);
  break;
 default:
  return -VAR_0;
 }


 FUNC_4(&VAR_16, VAR_7);
 FUNC_3(&VAR_16, VAR_13, 1);

 FUNC_6(&VAR_16, VAR_4,
     VAR_4);

 FUNC_10(&VAR_16, VAR_9);


 FUNC_2(VAR_14, VAR_16.index, VAR_8);
 FUNC_1(VAR_14, &VAR_16);

 return 0;
}
