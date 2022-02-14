
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct adapter {int dummy; } ;
typedef int csum ;
typedef int __be32 ;


 int FUNC_0 (struct adapter*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (int const) ;
 int FUNC_3 (struct adapter*,int,int) ;
 int FUNC_4 (struct adapter*,int,int,int const*) ;

int FUNC_5(struct adapter *VAR_5, const u8 *VAR_6, unsigned int VAR_7)
{
 u32 VAR_8;
 unsigned int VAR_9;
 const __be32 *VAR_10 = (const __be32 *)VAR_6;
 int VAR_11, VAR_12, VAR_13 = VAR_2 >> 16;

 if ((VAR_7 & 3) || VAR_7 < VAR_3)
  return -VAR_1;
 if (VAR_7 > VAR_4 + 8 - VAR_2)
  return -VAR_0;

 for (VAR_8 = 0, VAR_9 = 0; VAR_9 < VAR_7 / sizeof(VAR_8); VAR_9++)
  VAR_8 += FUNC_2(VAR_10[VAR_9]);
 if (VAR_8 != 0xffffffff) {
  FUNC_0(VAR_5, "corrupted firmware image, checksum %u\n",
         VAR_8);
  return -VAR_1;
 }

 VAR_11 = FUNC_3(VAR_5, VAR_13, VAR_13);
 if (VAR_11)
  goto out;

 VAR_7 -= 8;
 for (VAR_12 = VAR_2; VAR_7;) {
  unsigned int VAR_14 = FUNC_1(VAR_7, 256U);

  VAR_11 = FUNC_4(VAR_5, VAR_12, VAR_14, VAR_6);
  if (VAR_11)
   goto out;

  VAR_12 += VAR_14;
  VAR_6 += VAR_14;
  VAR_7 -= VAR_14;
 }

 VAR_11 = FUNC_4(VAR_5, VAR_4, 4, VAR_6);
out:
 if (VAR_11)
  FUNC_0(VAR_5, "firmware download failed, error %d\n", VAR_11);
 return VAR_11;
}
