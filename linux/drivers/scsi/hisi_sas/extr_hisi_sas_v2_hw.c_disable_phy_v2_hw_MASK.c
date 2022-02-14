
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int rst_work; int wq; struct device* dev; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct hisi_hba*,int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct hisi_hba*,int,int ) ;
 int FUNC_3 (struct hisi_hba*,int,int ,int) ;
 int FUNC_4 (struct hisi_hba*,scalar_t__) ;
 int FUNC_5 (struct hisi_hba*,scalar_t__,int) ;
 scalar_t__ FUNC_6 (struct hisi_hba*,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct hisi_hba*,int) ;

__attribute__((used)) static void FUNC_9(struct hisi_hba *VAR_7, int VAR_8)
{
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 struct device *VAR_13 = VAR_7->dev;


 VAR_10 = FUNC_4(VAR_7, VAR_1 +
    VAR_0);
 VAR_10 |= 0x1;
 FUNC_5(VAR_7, VAR_1 +
  VAR_0, VAR_10);

 if (FUNC_6(VAR_7, VAR_8)) {
  if (FUNC_0(VAR_7, VAR_8))
   goto do_disable;


  FUNC_7(VAR_7->wq, &VAR_7->rst_work);
  return;
 }

 VAR_11 = FUNC_2(VAR_7, VAR_8, VAR_4);
 VAR_11 = (VAR_11 & 0x1fc0) >> 6;
 if (VAR_11 != 0x4)
  goto do_disable;

 if (!FUNC_8(VAR_7, VAR_8)) {
  FUNC_1(VAR_13, "phy%d, wait tx fifo need send break\n",
   VAR_8);
  VAR_12 = FUNC_2(VAR_7, VAR_8,
     VAR_5);
  VAR_12 |= VAR_6;
  FUNC_3(VAR_7, VAR_8, VAR_5,
     VAR_12);
 }

do_disable:
 VAR_9 = FUNC_2(VAR_7, VAR_8, VAR_2);
 VAR_9 &= ~VAR_3;
 FUNC_3(VAR_7, VAR_8, VAR_2, VAR_9);


 VAR_10 &= ~0x1;
 FUNC_5(VAR_7, VAR_1 +
  VAR_0, VAR_10);
}
