
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct fbtft_par {TYPE_1__* info; } ;
struct TYPE_2__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct fbtft_par*,int,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct fbtft_par *VAR_3, u32 *VAR_4)
{
 unsigned long VAR_5[VAR_2 * VAR_1];
 int VAR_6, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < 63; VAR_6++) {
  if (VAR_6 > 0 && VAR_4[VAR_6] < 2) {
   FUNC_0(VAR_3->info->device,
    "Illegal value in Grayscale Lookup Table at index %d. Must be greater than 1\n",
    VAR_6);
   return -VAR_0;
  }
  VAR_7 += VAR_4[VAR_6];
  VAR_5[VAR_6] = VAR_7;
  if (VAR_7 > 180) {
   FUNC_0(VAR_3->info->device,
    "Illegal value(s) in Grayscale Lookup Table. At index=%d, the accumulated value has exceeded 180\n",
    VAR_6);
   return -VAR_0;
  }
 }

 FUNC_1(VAR_3, 0xB8,
    VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4], VAR_5[5], VAR_5[6],
    VAR_5[7], VAR_5[8], VAR_5[9], VAR_5[10], VAR_5[11], VAR_5[12], VAR_5[13],
    VAR_5[14], VAR_5[15], VAR_5[16], VAR_5[17], VAR_5[18], VAR_5[19], VAR_5[20],
    VAR_5[21], VAR_5[22], VAR_5[23], VAR_5[24], VAR_5[25], VAR_5[26], VAR_5[27],
    VAR_5[28], VAR_5[29], VAR_5[30], VAR_5[31], VAR_5[32], VAR_5[33], VAR_5[34],
    VAR_5[35], VAR_5[36], VAR_5[37], VAR_5[38], VAR_5[39], VAR_5[40], VAR_5[41],
    VAR_5[42], VAR_5[43], VAR_5[44], VAR_5[45], VAR_5[46], VAR_5[47], VAR_5[48],
    VAR_5[49], VAR_5[50], VAR_5[51], VAR_5[52], VAR_5[53], VAR_5[54], VAR_5[55],
    VAR_5[56], VAR_5[57], VAR_5[58], VAR_5[59], VAR_5[60], VAR_5[61],
    VAR_5[62]);

 return 0;
}
