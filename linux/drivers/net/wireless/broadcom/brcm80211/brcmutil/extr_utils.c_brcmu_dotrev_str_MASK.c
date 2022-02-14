
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,...) ;

char *FUNC_1(u32 VAR_1, char *VAR_2)
{
 u8 VAR_3[4];

 if (!VAR_1) {
  FUNC_0(VAR_2, VAR_0, "unknown");
  return VAR_2;
 }
 VAR_3[0] = (VAR_1 >> 24) & 0xFF;
 VAR_3[1] = (VAR_1 >> 16) & 0xFF;
 VAR_3[2] = (VAR_1 >> 8) & 0xFF;
 VAR_3[3] = VAR_1 & 0xFF;

 if (VAR_3[3])
  FUNC_0(VAR_2, VAR_0, "%d.%d.%d.%d", VAR_3[0],
   VAR_3[1], VAR_3[2], VAR_3[3]);
 else if (VAR_3[2])
  FUNC_0(VAR_2, VAR_0, "%d.%d.%d", VAR_3[0],
   VAR_3[1], VAR_3[2]);
 else
  FUNC_0(VAR_2, VAR_0, "%d.%d", VAR_3[0],
   VAR_3[1]);

 return VAR_2;
}
