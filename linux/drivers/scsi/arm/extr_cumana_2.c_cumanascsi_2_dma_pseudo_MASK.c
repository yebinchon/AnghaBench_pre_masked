
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_pointer {unsigned int this_residual; unsigned char* ptr; } ;
struct cumanascsi2_info {scalar_t__ base; } ;
struct Scsi_Host {scalar_t__ hostdata; } ;
typedef scalar_t__ fasdmadir_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned char*,int) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (unsigned long,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct Scsi_Host *VAR_5, struct scsi_pointer *VAR_6,
   fasdmadir_t VAR_7, int VAR_8)
{
 struct cumanascsi2_info *VAR_9 = (struct cumanascsi2_info *)VAR_5->hostdata;
 unsigned int VAR_10;
 unsigned char *VAR_11;

 VAR_10 = VAR_6->this_residual;
 VAR_11 = VAR_6->ptr;

 if (VAR_7 == VAR_2)
  FUNC_0 ("PSEUDO_OUT???\n");

 else {
  if (VAR_8 && (VAR_8 & 255)) {
   while (VAR_10 >= 256) {
    unsigned int VAR_12 = FUNC_1(VAR_9->base + VAR_1);

    if (VAR_12 & VAR_4)
     return;

    if (!(VAR_12 & VAR_3))
     continue;

    FUNC_2(VAR_9->base + VAR_0,
           VAR_11, 256 >> 1);
    VAR_11 += 256;
    VAR_10 -= 256;
   }
  }

  while (VAR_10 > 0) {
   unsigned long VAR_13;
   unsigned int VAR_14 = FUNC_1(VAR_9->base + VAR_1);

   if (VAR_14 & VAR_4)
    return;

   if (!(VAR_14 & VAR_3))
    continue;

   VAR_13 = FUNC_3(VAR_9->base + VAR_0);
   *VAR_11++ = VAR_13;
   if (--VAR_10 > 0) {
    *VAR_11++ = VAR_13 >> 8;
    VAR_10 --;
   }
  }
 }
}
