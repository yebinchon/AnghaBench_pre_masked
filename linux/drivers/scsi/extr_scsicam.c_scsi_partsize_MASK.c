
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct partition {int cyl; int sector; int end_cyl; int end_sector; int end_head; int nr_sects; int start_sect; int sys_ind; } ;


 unsigned int FUNC_0 (int *) ;
 int FUNC_1 (char*,unsigned int,...) ;

int FUNC_2(unsigned char *VAR_0, unsigned long VAR_1,
        unsigned int *VAR_2, unsigned int *VAR_3, unsigned int *VAR_4)
{
 struct partition *VAR_5 = (struct partition *)VAR_0, *VAR_6 = ((void*)0);
 int VAR_7, VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;


 if (*(unsigned short *) (VAR_0 + 64) == 0xAA55) {
  for (VAR_8 = -1, VAR_7 = 0; VAR_7 < 4; ++VAR_7, ++VAR_5) {
   if (!VAR_5->sys_ind)
    continue;




   VAR_9 = VAR_5->cyl + ((VAR_5->sector & 0xc0) << 2);
   if (VAR_9 > VAR_8) {
    VAR_8 = VAR_9;
    VAR_6 = VAR_5;
   }
  }
 }
 if (VAR_6) {
  VAR_12 = VAR_6->end_cyl + ((VAR_6->end_sector & 0xc0) << 2);
  VAR_11 = VAR_6->end_head;
  VAR_13 = VAR_6->end_sector & 0x3f;

  if (VAR_11 + 1 == 0 || VAR_13 == 0)
   return -1;






  VAR_15 = VAR_12 * (VAR_11 + 1) * VAR_13 +
      VAR_11 * VAR_13 + VAR_13;


  VAR_14 = FUNC_0(&VAR_6->start_sect)
      + FUNC_0(&VAR_6->nr_sects);


  VAR_10 = (VAR_14 - (VAR_11 * VAR_13 + VAR_13))
      / (VAR_11 + 1) / VAR_13;
  VAR_16 = VAR_10 * (VAR_11 + 1) * VAR_13 +
      VAR_11 * VAR_13 + VAR_13;






  if ((VAR_14 == VAR_15) ||
    (VAR_12 == 1023 && VAR_16 == VAR_14)) {
   *VAR_4 = VAR_13;
   *VAR_3 = VAR_11 + 1;
   *VAR_2 = VAR_1 / ((VAR_11 + 1) * VAR_13);
   return 0;
  }




 }
 return -1;
}
