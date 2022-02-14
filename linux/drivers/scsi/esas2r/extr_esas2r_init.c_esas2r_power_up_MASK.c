
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct esas2r_adapter {int flags; int disable_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct esas2r_adapter*) ;
 int FUNC_3 (struct esas2r_adapter*,int) ;
 int FUNC_4 (struct esas2r_adapter*) ;
 int FUNC_5 (struct esas2r_adapter*,int) ;
 int FUNC_6 (int ,int *) ;

bool FUNC_7(struct esas2r_adapter *VAR_3, bool VAR_4)
{
 bool VAR_5;

 FUNC_1(VAR_1, &VAR_3->flags);
 FUNC_4(VAR_3);
 FUNC_6(VAR_0, &VAR_3->flags);
 FUNC_0(&VAR_3->disable_cnt);


 VAR_5 = FUNC_2(VAR_3);
 if (!FUNC_3(VAR_3, VAR_4))
  VAR_5 = 0;


 FUNC_5(VAR_3, 1);


 FUNC_1(VAR_2, &VAR_3->flags);
 return VAR_5;
}
