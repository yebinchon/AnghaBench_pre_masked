
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ds_device {int spu_sleep; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ds_device*,int,int) ;
 int FUNC_1 (struct ds_device*,int ,int ) ;
 scalar_t__ FUNC_2 (struct ds_device*,int ,int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(struct ds_device *VAR_5)
{
 FUNC_1(VAR_5, VAR_2, 0);



 if (FUNC_2(VAR_5, VAR_3, VAR_4))
  FUNC_3("ds_reset_device: Error allowing strong pullup\n");

 if (VAR_5->spu_sleep) {

  u8 VAR_6 = VAR_5->spu_sleep>>4;
  if (FUNC_0(VAR_5, VAR_1 | VAR_0, VAR_6))
   FUNC_3("ds_reset_device: Error setting duration\n");
 }
}
