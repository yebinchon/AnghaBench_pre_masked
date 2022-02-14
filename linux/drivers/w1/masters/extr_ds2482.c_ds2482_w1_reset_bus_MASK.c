
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds2482_w1_chan {int channel; struct ds2482_data* pdev; } ;
struct ds2482_data {int w1_count; int access_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ds2482_data*,int ) ;
 int FUNC_2 (struct ds2482_data*,int ,int ) ;
 int FUNC_3 (struct ds2482_data*,int ) ;
 int FUNC_4 (struct ds2482_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static u8 FUNC_7(void *VAR_4)
{
 struct ds2482_w1_chan *VAR_5 = VAR_4;
 struct ds2482_data *VAR_6 = VAR_5->pdev;
 int VAR_7;
 u8 VAR_8 = 1;

 FUNC_5(&VAR_6->access_lock);


 FUNC_4(VAR_6);
 if (VAR_6->w1_count > 1)
  FUNC_3(VAR_6, VAR_5->channel);


 VAR_7 = FUNC_1(VAR_6, VAR_0);
 if (VAR_7 >= 0) {

  VAR_7 = FUNC_4(VAR_6);
  VAR_8 = !(VAR_7 & VAR_2);


  if (VAR_7 & VAR_3)
   FUNC_2(VAR_6, VAR_1,
          FUNC_0(0x00));
 }

 FUNC_6(&VAR_6->access_lock);

 return VAR_8;
}
