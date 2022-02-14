
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t10_pi_tuple {scalar_t__ app_tag; int ref_tag; int guard_tag; } ;
struct TYPE_2__ {unsigned int block_size; } ;
struct se_device {TYPE_1__ dev_attrib; } ;
struct se_cmd {scalar_t__ bad_sector; struct scatterlist* t_data_sg; struct se_device* se_dev; } ;
struct scatterlist {int offset; int length; } ;
typedef int sense_reason_t ;
typedef scalar_t__ sector_t ;
typedef int __u16 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*,unsigned int) ;
 int FUNC_2 (int ,void*,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*) ;
 unsigned int FUNC_5 (unsigned int,int) ;
 int FUNC_6 (char*,unsigned long long,int ,scalar_t__,int ) ;
 int FUNC_7 (struct se_cmd*,struct t10_pi_tuple*,int ,scalar_t__,unsigned int) ;
 struct scatterlist* FUNC_8 (struct scatterlist*) ;
 int FUNC_9 (struct scatterlist*) ;

sense_reason_t
FUNC_10(struct se_cmd *VAR_1, sector_t VAR_2, unsigned int VAR_3,
        unsigned int VAR_4, struct scatterlist *VAR_5, int VAR_6)
{
 struct se_device *VAR_7 = VAR_1->se_dev;
 struct t10_pi_tuple *VAR_8;
 struct scatterlist *VAR_9 = VAR_1->t_data_sg;
 sector_t VAR_10 = VAR_2;
 void *VAR_11, *VAR_12;
 int VAR_13;
 sense_reason_t VAR_14;
 int VAR_15 = 0;
 unsigned int VAR_16 = VAR_7->dev_attrib.block_size;

 for (; VAR_5 && VAR_10 < VAR_2 + VAR_3; VAR_5 = FUNC_8(VAR_5)) {
  VAR_12 = FUNC_3(FUNC_9(VAR_5)) + VAR_5->offset;
  VAR_11 = FUNC_3(FUNC_9(VAR_9)) + VAR_9->offset;

  for (VAR_13 = VAR_6; VAR_13 < VAR_5->length &&
    VAR_10 < VAR_2 + VAR_3;
    VAR_13 += sizeof(*VAR_8)) {
   __u16 VAR_17;
   unsigned int VAR_18;

   if (VAR_15 >= VAR_9->length) {
    VAR_15 -= VAR_9->length;
    FUNC_4(VAR_11 - VAR_9->offset);
    VAR_9 = FUNC_8(VAR_9);
    if (!VAR_9) {
     FUNC_4(VAR_12 - VAR_5->offset);
     return 0;
    }
    VAR_11 = FUNC_3(FUNC_9(VAR_9)) + VAR_9->offset;
   }

   VAR_8 = VAR_12 + VAR_13;

   FUNC_6("DIF READ sector: %llu guard_tag: 0x%04x"
     " app_tag: 0x%04x ref_tag: %u\n",
     (unsigned long long)VAR_10, VAR_8->guard_tag,
     VAR_8->app_tag, FUNC_0(VAR_8->ref_tag));

   if (VAR_8->app_tag == VAR_0) {
    VAR_15 += VAR_16;
    goto next;
   }

   VAR_18 = FUNC_5(VAR_16, VAR_9->length - VAR_15);
   VAR_17 = FUNC_1(VAR_11 + VAR_15, VAR_18);
   if (VAR_18 < VAR_16) {
    FUNC_4(VAR_11 - VAR_9->offset);
    VAR_9 = FUNC_8(VAR_9);
    if (!VAR_9) {
     FUNC_4(VAR_12 - VAR_5->offset);
     return 0;
    }
    VAR_11 = FUNC_3(FUNC_9(VAR_9)) + VAR_9->offset;
    VAR_15 = VAR_16 - VAR_18;
    VAR_17 = FUNC_2(VAR_17, VAR_11, VAR_15);
   } else {
    VAR_15 += VAR_16;
   }

   VAR_14 = FUNC_7(VAR_1, VAR_8, VAR_17, VAR_10, VAR_4);
   if (VAR_14) {
    FUNC_4(VAR_11 - VAR_9->offset);
    FUNC_4(VAR_12 - VAR_5->offset);
    VAR_1->bad_sector = VAR_10;
    return VAR_14;
   }
next:
   VAR_10++;
   VAR_4++;
  }

  VAR_6 = 0;
  FUNC_4(VAR_11 - VAR_9->offset);
  FUNC_4(VAR_12 - VAR_5->offset);
 }

 return 0;
}
