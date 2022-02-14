
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2x {char* fw_ver; int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int,int ) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,int,int,char*) ;
 int FUNC_5 (char*,int,int,int ) ;
 int FUNC_6 (char*,int ,int,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (char*,char*,int) ;

__attribute__((used)) static void FUNC_11(struct bnx2x *VAR_9)
{
 int VAR_10, VAR_11, VAR_12, VAR_13;
 char VAR_14[VAR_0+1];
 char VAR_15[VAR_8+1];
 char VAR_16[VAR_8+1];
 char *VAR_17;
 char *VAR_18 = ((void*)0);
 u8 VAR_19;

 VAR_10 = FUNC_4(VAR_9->pdev, 0, VAR_0, VAR_14);
 FUNC_3(VAR_9->fw_ver, 0, sizeof(VAR_9->fw_ver));

 if (VAR_10 < VAR_0)
  goto out_not_found;




 VAR_11 = FUNC_6(VAR_14, 0, VAR_0,
        VAR_4);
 if (VAR_11 < 0)
  goto out_not_found;

 VAR_12 = VAR_11 + VAR_5 +
      FUNC_8(&VAR_14[VAR_11]);

 VAR_11 += VAR_5;

 if (VAR_12 > VAR_0) {
  VAR_18 = FUNC_1(VAR_12, VAR_1);
  if (VAR_18 == ((void*)0))
   goto out_not_found;


  FUNC_2(VAR_18, VAR_14, VAR_0);
  VAR_10 = FUNC_4(VAR_9->pdev, VAR_0,
       VAR_12 - VAR_0,
       VAR_18 + VAR_0);
  if (VAR_10 < (VAR_12 - VAR_0))
   goto out_not_found;
  VAR_17 = VAR_18;
 } else
  VAR_17 = VAR_14;



 VAR_13 = FUNC_5(VAR_17, VAR_11, VAR_12,
       VAR_6);
 if (VAR_13 < 0)
  goto out_not_found;

 VAR_19 = FUNC_7(&VAR_17[VAR_13]);

 if (VAR_19 != VAR_8)
  goto out_not_found;

 VAR_13 += VAR_3;


 FUNC_9(VAR_15, VAR_8 + 1, "%04x", VAR_2);
 FUNC_9(VAR_16, VAR_8 + 1, "%04X", VAR_2);
 if (!FUNC_10(VAR_15, &VAR_17[VAR_13], VAR_8) ||
     !FUNC_10(VAR_16, &VAR_17[VAR_13], VAR_8)) {

  VAR_13 = FUNC_5(VAR_17, VAR_11, VAR_12,
      VAR_7);
  if (VAR_13 >= 0) {
   VAR_19 = FUNC_7(&VAR_17[VAR_13]);

   VAR_13 += VAR_3;

   if (VAR_19 < 32 && (VAR_19 + VAR_13) <= VAR_0) {
    FUNC_2(VAR_9->fw_ver, &VAR_17[VAR_13], VAR_19);
    VAR_9->fw_ver[VAR_19] = ' ';
   }
  }
  FUNC_0(VAR_18);
  return;
 }
out_not_found:
 FUNC_0(VAR_18);
 return;
}
