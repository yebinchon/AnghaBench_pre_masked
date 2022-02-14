
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sg_mapping_iter {void* addr; int length; } ;
struct scsi_cmnd {int dummy; } ;
typedef size_t sector_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (size_t) ;
 void* VAR_3 ;
 int FUNC_1 (void*,void*,size_t) ;
 size_t FUNC_2 (int ,size_t) ;
 int FUNC_3 (struct scsi_cmnd*) ;
 int FUNC_4 (struct scsi_cmnd*) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (struct sg_mapping_iter*) ;
 int FUNC_6 (struct sg_mapping_iter*,int ,int ,int) ;
 int FUNC_7 (struct sg_mapping_iter*) ;

__attribute__((used)) static void FUNC_8(struct scsi_cmnd *VAR_5, sector_t VAR_6,
     unsigned int VAR_7, bool VAR_8)
{
 size_t VAR_9;
 void *VAR_10;
 const void *VAR_11 = VAR_3 + VAR_4;
 struct sg_mapping_iter VAR_12;


 VAR_9 = VAR_7 * sizeof(*VAR_3);

 FUNC_6(&VAR_12, FUNC_4(VAR_5),
   FUNC_3(VAR_5), VAR_0 |
   (VAR_8 ? VAR_2 : VAR_1));

 while (FUNC_5(&VAR_12) && VAR_9 > 0) {
  size_t VAR_13 = FUNC_2(VAR_12.length, VAR_9);
  void *VAR_14 = FUNC_0(VAR_6);
  size_t VAR_15 = 0;

  if (VAR_11 < VAR_14 + VAR_13)
   VAR_15 = VAR_14 + VAR_13 - VAR_11;

  VAR_10 = VAR_12.addr;

  if (VAR_8)
   FUNC_1(VAR_10, VAR_14, VAR_13 - VAR_15);
  else
   FUNC_1(VAR_14, VAR_10, VAR_13 - VAR_15);

  if (VAR_15) {
   if (VAR_8)
    FUNC_1(VAR_10 + VAR_13 - VAR_15, VAR_3, VAR_15);
   else
    FUNC_1(VAR_3, VAR_10 + VAR_13 - VAR_15, VAR_15);
  }

  VAR_6 += VAR_13 / sizeof(*VAR_3);
  VAR_9 -= VAR_13;
 }
 FUNC_7(&VAR_12);
}
