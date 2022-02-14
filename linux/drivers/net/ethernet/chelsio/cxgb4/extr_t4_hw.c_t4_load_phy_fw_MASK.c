
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int portvec; } ;
struct adapter {int pf; int mbox; TYPE_1__ params; } ;
typedef int spinlock_t ;
typedef int __be32 ;


 int FUNC_0 (struct adapter*,char*,int,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct adapter*,int,unsigned long,unsigned long,size_t,int *,int ) ;
 int FUNC_8 (struct adapter*,int*) ;
 int FUNC_9 (struct adapter*,int ,int ,int ,int,int*,int*,int,int) ;
 int FUNC_10 (struct adapter*,int ,int ,int ,int,int*,int*,int) ;

int FUNC_11(struct adapter *VAR_5,
     int VAR_6, spinlock_t *VAR_7,
     int (*VAR_8)(const u8 *, size_t),
     const u8 *VAR_9, size_t VAR_10)
{
 unsigned long VAR_11 = 0, VAR_12 = 0;
 u32 VAR_13, VAR_14;
 int VAR_15 = 0, VAR_16 = 0;
 int VAR_17;




 if (VAR_8) {
  VAR_16 = VAR_8(VAR_9, VAR_10);
  VAR_17 = FUNC_8(VAR_5, &VAR_15);
  if (VAR_17 < 0)
   return VAR_17;

  if (VAR_15 >= VAR_16) {
   FUNC_0(VAR_5, "PHY Firmware already up-to-date, "
    "version %#x\n", VAR_15);
   return 0;
  }
 }







 VAR_13 = (FUNC_1(VAR_1) |
   FUNC_2(VAR_2) |
   FUNC_3(VAR_5->params.portvec) |
   FUNC_4(VAR_3));
 VAR_14 = VAR_10;
 VAR_17 = FUNC_9(VAR_5, VAR_5->mbox, VAR_5->pf, 0, 1,
     &VAR_13, &VAR_14, 1, 1);
 if (VAR_17 < 0)
  return VAR_17;
 VAR_11 = VAR_14 >> 8;
 VAR_12 = (VAR_14 & 0xff) << 16;




 if (VAR_7)
  FUNC_5(VAR_7);
 VAR_17 = FUNC_7(VAR_5, VAR_6, VAR_11, VAR_12,
      VAR_10, (__be32 *)VAR_9,
      VAR_4);
 if (VAR_7)
  FUNC_6(VAR_7);
 if (VAR_17)
  return VAR_17;






 VAR_13 = (FUNC_1(VAR_1) |
   FUNC_2(VAR_2) |
   FUNC_3(VAR_5->params.portvec) |
   FUNC_4(VAR_3));
 VAR_17 = FUNC_10(VAR_5, VAR_5->mbox, VAR_5->pf, 0, 1,
        &VAR_13, &VAR_14, 30000);




 if (VAR_8) {
  VAR_17 = FUNC_8(VAR_5, &VAR_15);
  if (VAR_17 < 0)
   return VAR_17;

  if (VAR_15 != VAR_16) {
   FUNC_0(VAR_5, "PHY Firmware did not update: "
    "version on adapter %#x, "
    "version flashed %#x\n",
    VAR_15, VAR_16);
   return -VAR_0;
  }
 }

 return 1;
}
