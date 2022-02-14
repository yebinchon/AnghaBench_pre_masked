
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (char*,int,int) ;

int FUNC_11(void)
{
 int VAR_2, VAR_3;
 u32 VAR_4, VAR_5;
 u32 VAR_6[] = {
  VAR_1,
 };
 VAR_2 = FUNC_2();
 if (VAR_2)
  return VAR_2;
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_6); VAR_3++) {
  VAR_4 = VAR_6[VAR_3];
  for (VAR_5 = VAR_4;
       VAR_5 <= VAR_0;
       VAR_5 <<= 1) {
   FUNC_10("BTRFS: selftest: sectorsize: %u  nodesize: %u\n",
    VAR_4, VAR_5);
   VAR_2 = FUNC_6(VAR_4, VAR_5);
   if (VAR_2)
    goto out;
   VAR_2 = FUNC_3(VAR_4,
    VAR_5);
   if (VAR_2)
    goto out;
   VAR_2 = FUNC_4(VAR_4, VAR_5);
   if (VAR_2)
    goto out;
   VAR_2 = FUNC_8(VAR_4, VAR_5);
   if (VAR_2)
    goto out;
   VAR_2 = FUNC_9(VAR_4, VAR_5);
   if (VAR_2)
    goto out;
   VAR_2 = FUNC_7(VAR_4, VAR_5);
   if (VAR_2)
    goto out;
  }
 }
 VAR_2 = FUNC_5();

out:
 FUNC_1();
 return VAR_2;
}
