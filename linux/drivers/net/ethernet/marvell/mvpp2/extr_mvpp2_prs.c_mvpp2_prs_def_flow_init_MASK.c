
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {scalar_t__ index; } ;
struct mvpp2 {int dummy; } ;
typedef int pe ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2*,struct mvpp2_prs_entry*) ;
 int FUNC_2 (struct mvpp2*,scalar_t__,int ) ;
 int FUNC_3 (struct mvpp2_prs_entry*,int,int ) ;
 int FUNC_4 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_5 (struct mvpp2_prs_entry*,int ) ;
 int FUNC_6 (struct mvpp2_prs_entry*,int ) ;

__attribute__((used)) static void FUNC_7(struct mvpp2 *VAR_5)
{
 struct mvpp2_prs_entry VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_0(&VAR_6, 0, sizeof(VAR_6));
  FUNC_5(&VAR_6, VAR_3);
  VAR_6.index = VAR_1 - VAR_7;


  FUNC_6(&VAR_6, 0);


  FUNC_3(&VAR_6, VAR_7, VAR_2);
  FUNC_4(&VAR_6, VAR_4, 1);


  FUNC_2(VAR_5, VAR_6.index, VAR_3);
  FUNC_1(VAR_5, &VAR_6);
 }
}
