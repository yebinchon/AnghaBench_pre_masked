
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int hardware_lock; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int FUNC_0 (struct qla_hw_data*,int) ;
 int FUNC_1 (struct qla_hw_data*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int) ;

__attribute__((used)) static inline void
FUNC_7(scsi_qla_host_t *VAR_8)
{
 unsigned long VAR_9 = 0;
 struct qla_hw_data *VAR_10 = VAR_8->hw;
 int VAR_11, VAR_12;
 uint32_t VAR_13;
 uint32_t VAR_14;

 FUNC_4(&VAR_10->hardware_lock, VAR_9);

 FUNC_1(VAR_10, 0x80004, 0);
 FUNC_1(VAR_10, 0x82004, 0);


 FUNC_1(VAR_10, 0x60920, 0x02);
 FUNC_1(VAR_10, 0x60924, 0x02);
 FUNC_1(VAR_10, 0xf0920, 0x02);
 FUNC_1(VAR_10, 0xf0924, 0x02);


 VAR_14 = FUNC_0(VAR_10, 0x60840);
 VAR_14 &= ~(1<<12);
 FUNC_1(VAR_10, 0x60840, VAR_14);

 VAR_14 = FUNC_0(VAR_10, 0x60844);
 VAR_14 &= ~(1<<12);
 FUNC_1(VAR_10, 0x60844, VAR_14);

 VAR_14 = FUNC_0(VAR_10, 0x60848);
 VAR_14 &= ~(1<<12);
 FUNC_1(VAR_10, 0x60848, VAR_14);

 VAR_14 = FUNC_0(VAR_10, 0x6084C);
 VAR_14 &= ~(1<<12);
 FUNC_1(VAR_10, 0x6084C, VAR_14);

 for (VAR_11 = 0; VAR_11 < 100000; VAR_11++) {
  if ((FUNC_0(VAR_10, 0xd0000) & 0x10000000) == 0 &&
      (FUNC_0(VAR_10, 0x10600) & 0x1) == 0)
   break;
  FUNC_6(100);
 }


 for (VAR_11 = 0; VAR_11 < 4; VAR_11++) {
  FUNC_1(VAR_10,
      (VAR_7 + 8*VAR_11), (0xF01));
  FUNC_1(VAR_10,
      (VAR_7 + 4 + 8*VAR_11), (0x01010101));
 }


 FUNC_1(VAR_10, VAR_3, (0x011f0101));


 FUNC_1(VAR_10, 0x10610, 1);
 FUNC_1(VAR_10, 0x10600, 0);


 for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
  FUNC_1(VAR_10,
      (VAR_6 + 4*VAR_11), (0x0));
 }


 for (VAR_11 = 0; VAR_11 < 115; VAR_11++) {
  FUNC_1(VAR_10,
      (VAR_4 + 4*VAR_11), (0x0));
 }


 for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
  for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
   FUNC_1(VAR_10,
       (VAR_0 + 0x100*VAR_12 + 4*VAR_11), (0x0));


 for (VAR_12 = 0; VAR_12 < 4; VAR_12++)
  FUNC_1(VAR_10,
      (VAR_5 + 0x100*VAR_12), (0x3FF));


 FUNC_1(VAR_10, VAR_2, (0x2));
 FUNC_1(VAR_10, VAR_1, (0x3));


 FUNC_1(VAR_10, VAR_3, (0x0));


 FUNC_1(VAR_10, VAR_7, (0xF00));

 FUNC_5(&VAR_10->hardware_lock, VAR_9);


 for (VAR_13 = 10; VAR_13; VAR_13--) {
  FUNC_3(1000);
  FUNC_2();
 }
}
