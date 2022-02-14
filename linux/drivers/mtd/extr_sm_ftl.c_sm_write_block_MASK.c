
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sm_oob {int data_status; int ecc2; int ecc1; } ;
struct sm_ftl {int block_size; scalar_t__ smallpagenand; scalar_t__ unstable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int,int ,int ) ;
 int FUNC_2 (struct sm_oob*,int,int ) ;
 scalar_t__ FUNC_3 (struct sm_ftl*,int,int,int ) ;
 int FUNC_4 (struct sm_ftl*,int,int) ;
 int FUNC_5 (char*,int,int,int) ;
 int FUNC_6 (struct sm_oob*,int) ;
 int FUNC_7 (struct sm_ftl*,int,int,int,int *,struct sm_oob*) ;
 scalar_t__ FUNC_8 (int,unsigned long*) ;

__attribute__((used)) static int FUNC_9(struct sm_ftl *VAR_5, uint8_t *VAR_6,
     int VAR_7, int VAR_8, int VAR_9,
     unsigned long VAR_10)
{
 struct sm_oob VAR_11;
 int VAR_12;
 int VAR_13 = 0;


 FUNC_2(&VAR_11, 0xFF, VAR_2);
 FUNC_6(&VAR_11, VAR_9);
restart:
 if (VAR_5->unstable)
  return -VAR_1;

 for (VAR_12 = 0; VAR_12 < VAR_5->block_size;
    VAR_12 += VAR_3) {

  VAR_11.data_status = 0xFF;

  if (FUNC_8(VAR_12 / VAR_3, &VAR_10)) {

   FUNC_5("sector %d of block at LBA %d of zone %d"
    " couldn't be read, marking it as invalid",
    VAR_12 / VAR_3, VAR_9, VAR_7);

   VAR_11.data_status = 0;
  }

  if (VAR_5->smallpagenand) {
   FUNC_1(VAR_6 + VAR_12, VAR_4,
     VAR_11.ecc1,
     FUNC_0(VAR_0));

   FUNC_1(VAR_6 + VAR_12 + VAR_4,
     VAR_4, VAR_11.ecc2,
     FUNC_0(VAR_0));
  }
  if (!FUNC_7(VAR_5, VAR_7, VAR_8, VAR_12,
       VAR_6 + VAR_12, &VAR_11))
   continue;

  if (!VAR_13) {







   if (FUNC_3(VAR_5, VAR_7, VAR_8, 0))
    return -VAR_1;

   VAR_13 = 1;
   goto restart;
  } else {
   FUNC_4(VAR_5, VAR_7, VAR_8);
   return -VAR_1;
  }
 }
 return 0;
}
