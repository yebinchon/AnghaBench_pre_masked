
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mvpp2_prs_entry {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mvpp2_prs_entry*,int ,int) ;
 int FUNC_1 (struct mvpp2_prs_entry*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct mvpp2_prs_entry *VAR_8,
          unsigned int VAR_9, int VAR_10,
          unsigned int VAR_11)
{

 if (VAR_10 < 0) {
  FUNC_1(VAR_8, VAR_5, 1);
  VAR_10 = 0 - VAR_10;
 } else {
  FUNC_0(VAR_8, VAR_5, 1);
 }


 FUNC_0(VAR_8, VAR_4,
      VAR_3);
 FUNC_1(VAR_8, VAR_4,
    VAR_10 & VAR_3);


 FUNC_0(VAR_8, VAR_7,
      VAR_6);
 FUNC_1(VAR_8, VAR_7, VAR_9);


 FUNC_0(VAR_8, VAR_2,
      VAR_1);
 FUNC_1(VAR_8, VAR_2,
    VAR_11 & VAR_1);


 FUNC_0(VAR_8, VAR_0, 1);
}
