
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct s3crcrec {int addr; int len; int dowrite; } ;
struct imgchunk {int addr; int len; int* data; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int,int ) ;

__attribute__((used)) static int FUNC_2(struct imgchunk *VAR_0, unsigned int VAR_1,
      struct s3crcrec *VAR_2, unsigned int VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 int VAR_6;
 u32 VAR_7;
 u32 VAR_8 = 0;
 u32 VAR_9;
 u8 *VAR_10;
 u32 VAR_11;

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (!VAR_2[VAR_5].dowrite)
   continue;
  VAR_7 = VAR_2[VAR_5].addr;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   VAR_8 = VAR_0[VAR_6].addr;
   VAR_9 = VAR_0[VAR_6].addr + VAR_0[VAR_6].len;
   if (VAR_7 - 2 >= VAR_8 && VAR_7 < VAR_9)
    break;
  }
  if (VAR_6 >= VAR_1) {
   FUNC_1("Failed to find chunk for crcrec[%d], addr=0x%06x len=%d , aborting crc.\n",
          VAR_5, VAR_2[VAR_5].addr, VAR_2[VAR_5].len);
   return 1;
  }


  FUNC_0("Adding crc @ 0x%06x\n", VAR_2[VAR_5].addr - 2);
  VAR_11 = VAR_7 - VAR_8 - 2;
  VAR_10 = VAR_0[VAR_6].data + VAR_11;
  *VAR_10 = 0xde;
  *(VAR_10 + 1) = 0xc0;
 }
 return VAR_4;
}
