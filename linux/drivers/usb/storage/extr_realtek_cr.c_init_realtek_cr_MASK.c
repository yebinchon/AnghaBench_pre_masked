
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct us_data {int max_lun; struct rts51x_chip* extra; int extra_destructor; } ;
struct rts51x_status {int dummy; } ;
struct rts51x_chip {int max_lun; int flag; struct rts51x_chip* status; struct us_data* us; } ;


 scalar_t__ FUNC_0 (struct rts51x_chip*,int) ;
 scalar_t__ FUNC_1 (struct rts51x_chip*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct rts51x_chip*) ;
 int FUNC_3 (struct rts51x_chip*) ;
 scalar_t__ FUNC_4 (struct rts51x_chip*) ;
 int FUNC_5 (struct us_data*) ;
 int FUNC_6 (struct rts51x_chip*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (struct us_data*) ;
 int VAR_3 ;
 int FUNC_9 (struct us_data*,int ) ;
 int FUNC_10 (struct us_data*) ;
 scalar_t__ VAR_4 ;
 int FUNC_11 (struct us_data*,char*,int) ;

__attribute__((used)) static int FUNC_12(struct us_data *VAR_5)
{
 struct rts51x_chip *VAR_6;
 int VAR_7, VAR_8, VAR_9;

 VAR_6 = FUNC_7(sizeof(struct rts51x_chip), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_5->extra = VAR_6;
 VAR_5->extra_destructor = VAR_3;
 VAR_5->max_lun = VAR_6->max_lun = FUNC_10(VAR_5);
 VAR_6->us = VAR_5;

 FUNC_11(VAR_5, "chip->max_lun = %d\n", VAR_6->max_lun);

 VAR_7 = (VAR_6->max_lun + 1) * sizeof(struct rts51x_status);
 VAR_6->status = FUNC_7(VAR_7, VAR_2);
 if (!VAR_6->status)
  goto INIT_FAIL;

 for (VAR_8 = 0; VAR_8 <= (int)(VAR_6->max_lun); VAR_8++) {
  VAR_9 = FUNC_9(VAR_5, (u8) VAR_8);
  if (VAR_9 < 0)
   goto INIT_FAIL;
 }

 if (FUNC_1(VAR_6, 0x0138) || FUNC_1(VAR_6, 0x0158) ||
     FUNC_1(VAR_6, 0x0159)) {
  if (FUNC_0(VAR_6, 0x5888) || FUNC_0(VAR_6, 0x5889) ||
    FUNC_0(VAR_6, 0x5901))
   FUNC_2(VAR_6);
  if (FUNC_3(VAR_6) == 16) {
   if (FUNC_4(VAR_6))
    FUNC_2(VAR_6);
  }
 }





 FUNC_11(VAR_5, "chip->flag = 0x%x\n", VAR_6->flag);

 (void)FUNC_5(VAR_5);

 return 0;

INIT_FAIL:
 if (VAR_5->extra) {
  FUNC_6(VAR_6->status);
  FUNC_6(VAR_5->extra);
  VAR_5->extra = ((void*)0);
 }

 return -VAR_0;
}
