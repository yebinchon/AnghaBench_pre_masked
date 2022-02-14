
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hinic_api_cmd_chain {scalar_t__ cons_idx; scalar_t__ prod_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hinic_api_cmd_chain*) ;
 unsigned long VAR_2 ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct hinic_api_cmd_chain *VAR_3)
{
 int VAR_4 = -VAR_1;
 unsigned long VAR_5;

 VAR_5 = VAR_2 + FUNC_1(VAR_0);
 do {
  FUNC_0(VAR_3);


  if (VAR_3->cons_idx == VAR_3->prod_idx) {
   VAR_4 = 0;
   break;
  }

  FUNC_2(20);
 } while (FUNC_3(VAR_2, VAR_5));

 return VAR_4;
}
