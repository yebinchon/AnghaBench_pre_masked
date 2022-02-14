
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2 {char* fw_version; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct bnx2*,int ,int *,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (int *,char*,int) ;
 int FUNC_4 (char*,int *,unsigned int) ;
 int FUNC_5 (int *,int,unsigned int,int ) ;
 int FUNC_6 (int *,int ,int,int ) ;
 unsigned int FUNC_7 (int *) ;
 unsigned int FUNC_8 (int *) ;

__attribute__((used)) static void
FUNC_9(struct bnx2 *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 u8 *VAR_13;
 unsigned int VAR_14, VAR_15, VAR_16;





 VAR_13 = FUNC_2(256, VAR_3);
 if (!VAR_13)
  return;

 VAR_10 = FUNC_0(VAR_9, 0x300, VAR_13 + 128,
        128);
 if (VAR_10)
  goto vpd_done;

 for (VAR_11 = 0; VAR_11 < 128; VAR_11 += 4) {
  VAR_13[VAR_11] = VAR_13[VAR_11 + 128 + 3];
  VAR_13[VAR_11 + 1] = VAR_13[VAR_11 + 128 + 2];
  VAR_13[VAR_11 + 2] = VAR_13[VAR_11 + 128 + 1];
  VAR_13[VAR_11 + 3] = VAR_13[VAR_11 + 128];
 }

 VAR_11 = FUNC_6(VAR_13, 0, 128, VAR_5);
 if (VAR_11 < 0)
  goto vpd_done;

 VAR_15 = FUNC_8(&VAR_13[VAR_11]);
 VAR_11 += VAR_6;
 VAR_14 = VAR_11 + VAR_15;

 if (VAR_14 > 128)
  goto vpd_done;

 VAR_12 = FUNC_5(VAR_13, VAR_11, VAR_15,
          VAR_7);
 if (VAR_12 < 0)
  goto vpd_done;

 VAR_16 = FUNC_7(&VAR_13[VAR_12]);

 VAR_12 += VAR_4;
 if (VAR_12 + VAR_16 > VAR_14 || VAR_16 != 4 ||
     FUNC_3(&VAR_13[VAR_12], "1028", 4))
  goto vpd_done;

 VAR_12 = FUNC_5(VAR_13, VAR_11, VAR_15,
          VAR_8);
 if (VAR_12 < 0)
  goto vpd_done;

 VAR_16 = FUNC_7(&VAR_13[VAR_12]);

 VAR_12 += VAR_4;
 if (VAR_12 + VAR_16 > VAR_14 || VAR_16 > 30)
  goto vpd_done;

 FUNC_4(VAR_9->fw_version, &VAR_13[VAR_12], VAR_16);
 VAR_9->fw_version[VAR_16] = ' ';

vpd_done:
 FUNC_1(VAR_13);
}
