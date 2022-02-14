
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ds1wm_data {int int_en_reg_none; int read_byte; int read_error; TYPE_1__* pdev; int * read_complete; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ds1wm_data*,int ) ;
 int FUNC_3 (struct ds1wm_data*,int ,unsigned char) ;
 int VAR_5 ;
 unsigned long FUNC_4 (int *,int ) ;

__attribute__((used)) static u8 FUNC_5(struct ds1wm_data *VAR_6, unsigned char VAR_7)
{
 unsigned long VAR_8;
 u8 VAR_9 = VAR_1 | VAR_6->int_en_reg_none;
 FUNC_0(VAR_5);

 FUNC_2(VAR_6, VAR_0);

 VAR_6->read_complete = &VAR_5;
 FUNC_3(VAR_6, VAR_2, VAR_9);

 FUNC_3(VAR_6, VAR_0, VAR_7);
 VAR_8 = FUNC_4(&VAR_5, VAR_3);

 VAR_6->read_complete = ((void*)0);
 if (!VAR_8) {
  FUNC_1(&VAR_6->pdev->dev, "read failed, timed out\n");
  VAR_6->read_error = -VAR_4;
  return 0xFF;
 }
 VAR_6->read_error = 0;
 return VAR_6->read_byte;
}
