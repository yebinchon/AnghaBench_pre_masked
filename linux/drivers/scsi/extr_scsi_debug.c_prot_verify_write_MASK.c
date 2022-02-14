
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct t10_pi_tuple {int dummy; } ;
struct sg_mapping_iter {int length; int consumed; struct t10_pi_tuple* addr; } ;
struct scsi_cmnd {int dummy; } ;
typedef int sector_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct scsi_cmnd*,int ,unsigned int,int) ;
 int VAR_2 ;
 int FUNC_3 (struct t10_pi_tuple*,void*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (void*,scalar_t__) ;
 scalar_t__ FUNC_5 (struct scsi_cmnd*) ;
 int FUNC_6 (struct scsi_cmnd*) ;
 scalar_t__ FUNC_7 (struct scsi_cmnd*) ;
 int FUNC_8 (struct scsi_cmnd*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_9 (struct sg_mapping_iter*) ;
 int FUNC_10 (struct sg_mapping_iter*,int ,scalar_t__,int) ;
 int FUNC_11 (struct sg_mapping_iter*) ;

__attribute__((used)) static int FUNC_12(struct scsi_cmnd *VAR_5, sector_t VAR_6,
        unsigned int VAR_7, u32 VAR_8)
{
 int VAR_9;
 struct t10_pi_tuple *VAR_10;
 void *VAR_11;
 sector_t VAR_12 = VAR_6;
 int VAR_13;
 int VAR_14;
 struct sg_mapping_iter VAR_15;
 struct sg_mapping_iter VAR_16;

 FUNC_0(FUNC_7(VAR_5) == 0);
 FUNC_0(FUNC_5(VAR_5) == 0);

 FUNC_10(&VAR_16, FUNC_6(VAR_5),
   FUNC_5(VAR_5),
   VAR_0 | VAR_1);
 FUNC_10(&VAR_15, FUNC_8(VAR_5), FUNC_7(VAR_5),
   VAR_0 | VAR_1);


 while (FUNC_9(&VAR_16)) {
  VAR_14 = 0;
  if (FUNC_1(!FUNC_9(&VAR_15))) {
   VAR_9 = 0x01;
   goto out;
  }

  for (VAR_13 = 0; VAR_13 < VAR_16.length;
       VAR_13 += sizeof(struct t10_pi_tuple)) {



   if (VAR_14 >= VAR_15.length) {
    if (FUNC_1(!FUNC_9(&VAR_15))) {
     VAR_9 = 0x01;
     goto out;
    }
    VAR_14 = 0;
   }

   VAR_10 = VAR_16.addr + VAR_13;
   VAR_11 = VAR_15.addr + VAR_14;

   VAR_9 = FUNC_3(VAR_10, VAR_11, VAR_12, VAR_8);
   if (VAR_9) {
    FUNC_4(VAR_11, VAR_4);
    goto out;
   }

   VAR_12++;
   VAR_8++;
   VAR_14 += VAR_4;
  }
  VAR_15.consumed = VAR_14;
  FUNC_11(&VAR_15);
 }
 FUNC_11(&VAR_16);

 FUNC_2(VAR_5, VAR_6, VAR_7, 0);
 VAR_3++;

 return 0;

out:
 VAR_2++;
 FUNC_11(&VAR_15);
 FUNC_11(&VAR_16);
 return VAR_9;
}
