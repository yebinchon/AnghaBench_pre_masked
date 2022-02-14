
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds2482_w1_chan {struct ds2482_data* pdev; } ;
struct ds2482_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ds2482_data*,int ,int ) ;
 int FUNC_2 (struct ds2482_data*) ;

__attribute__((used)) static u8 FUNC_3(void *VAR_3, int VAR_4)
{
 struct ds2482_w1_chan *VAR_5 = VAR_3;
 struct ds2482_data *VAR_6 = VAR_5->pdev;
 u8 VAR_7 = 1;





 if (VAR_4) {




  FUNC_2(VAR_6);

  VAR_7 = FUNC_1(VAR_6, VAR_0,
   FUNC_0(VAR_2 |
      VAR_1));
  FUNC_2(VAR_6);
 }

 return VAR_7;
}
