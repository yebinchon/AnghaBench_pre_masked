
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct brcmf_sdio_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct brcmf_sdio_dev*,int ,int *) ;
 int FUNC_4 (struct brcmf_sdio_dev*,int ,int,int*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void *VAR_9)
{
 struct brcmf_sdio_dev *VAR_10 = VAR_9;
 int VAR_11 = 0;
 u8 VAR_12, VAR_13;


 VAR_13 = VAR_6 | VAR_3;
 FUNC_4(VAR_10, VAR_7, VAR_13, &VAR_11);
 if (VAR_11) {
  FUNC_2("error writing for HT off\n");
  return VAR_11;
 }



 VAR_12 = FUNC_3(VAR_10, VAR_7, ((void*)0));

 if ((VAR_12 & ~VAR_4) != VAR_13) {
  FUNC_2("ChipClkCSR access: wrote 0x%02x read 0x%02x\n",
     VAR_13, VAR_12);
  return -VAR_0;
 }

 FUNC_1(((VAR_12 = FUNC_3(VAR_10, VAR_7,
           ((void*)0))),
   !FUNC_0(VAR_12)),
   VAR_2);

 if (!FUNC_0(VAR_12)) {
  FUNC_2("timeout on ALPAV wait, clkval 0x%02x\n",
     VAR_12);
  return -VAR_1;
 }

 VAR_13 = VAR_6 | VAR_5;
 FUNC_4(VAR_10, VAR_7, VAR_13, &VAR_11);
 FUNC_5(65);


 FUNC_4(VAR_10, VAR_8, 0, ((void*)0));

 return 0;
}
