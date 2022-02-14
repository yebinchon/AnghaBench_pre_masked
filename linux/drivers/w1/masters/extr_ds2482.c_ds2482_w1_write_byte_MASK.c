
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds2482_w1_chan {int channel; struct ds2482_data* pdev; } ;
struct ds2482_data {int w1_count; int access_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ds2482_data*,int ,int ) ;
 int FUNC_1 (struct ds2482_data*,int ) ;
 int FUNC_2 (struct ds2482_data*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, u8 VAR_2)
{
 struct ds2482_w1_chan *VAR_3 = VAR_1;
 struct ds2482_data *VAR_4 = VAR_3->pdev;

 FUNC_3(&VAR_4->access_lock);


 FUNC_2(VAR_4);
 if (VAR_4->w1_count > 1)
  FUNC_1(VAR_4, VAR_3->channel);


 FUNC_0(VAR_4, VAR_0, VAR_2);

 FUNC_4(&VAR_4->access_lock);
}
