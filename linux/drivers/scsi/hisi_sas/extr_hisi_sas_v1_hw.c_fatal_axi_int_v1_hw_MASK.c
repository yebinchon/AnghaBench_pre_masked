
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {struct device* dev; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct hisi_hba*,int ) ;
 int FUNC_2 (struct hisi_hba*,int ,int) ;
 int FUNC_3 (char*,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_7, void *VAR_8)
{
 struct hisi_hba *VAR_9 = VAR_8;
 struct device *VAR_10 = VAR_9->dev;
 u32 VAR_11 = FUNC_1(VAR_9, VAR_0);
 u32 VAR_12 = FUNC_1(VAR_9, VAR_5);

 if (VAR_11 & VAR_4)
  FUNC_3("%s: Fatal DQ_CFG_ERR interrupt (0x%x)\n",
        FUNC_0(VAR_10), VAR_12);

 if (VAR_11 & VAR_3)
  FUNC_3("%s: Fatal CQ_CFG_ERR interrupt (0x%x)\n",
        FUNC_0(VAR_10), VAR_12);

 if (VAR_11 & VAR_2)
  FUNC_3("%s: Fatal AXI_WRONG_INT interrupt (0x%x)\n",
        FUNC_0(VAR_10), VAR_12);

 if (VAR_11 & VAR_1)
  FUNC_3("%s: Fatal AXI_OVERLF_INT incorrect interrupt (0x%x)\n",
        FUNC_0(VAR_10), VAR_12);

 FUNC_2(VAR_9, VAR_0, VAR_11 | 0x30000000);

 return VAR_6;
}
