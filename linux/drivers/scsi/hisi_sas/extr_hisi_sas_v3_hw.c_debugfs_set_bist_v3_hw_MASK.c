
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int debugfs_bist_linkrate; int debugfs_bist_phy_no; int debugfs_bist_code_mode; int debugfs_bist_mode; int debugfs_bist_cnt; struct device* dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct device*,char*,int,int,int,int) ;
 int FUNC_1 (struct hisi_hba*) ;
 int FUNC_2 (struct hisi_hba*) ;
 int FUNC_3 (struct hisi_hba*,int,int ) ;
 int FUNC_4 (struct hisi_hba*,int,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct hisi_hba *VAR_16, bool VAR_17)
{
 u32 VAR_18, VAR_19;
 u32 VAR_20 = VAR_16->debugfs_bist_linkrate;
 u32 VAR_21 = VAR_16->debugfs_bist_phy_no;
 u32 VAR_22 = VAR_16->debugfs_bist_code_mode;
 u32 VAR_23 = VAR_16->debugfs_bist_mode;
 struct device *VAR_24 = VAR_16->dev;

 FUNC_0(VAR_24, "BIST info:linkrate=%d phy_id=%d code_mode=%d path_mode=%d\n",
   VAR_20, VAR_21, VAR_22, VAR_23);
 VAR_19 = VAR_23 ? 2 : 1;
 if (VAR_17) {

  FUNC_1(VAR_16);


  VAR_18 = FUNC_3(VAR_16, VAR_21,
           VAR_9);
  VAR_18 &= ~VAR_5;
  VAR_18 |= (VAR_20 << VAR_6);
  FUNC_4(VAR_16, VAR_21,
         VAR_9, VAR_18);


  VAR_18 = FUNC_3(VAR_16, VAR_21,
           VAR_15);
  VAR_18 &= ~(VAR_0 |
    VAR_3 |
    VAR_7 |
    VAR_8 |
    VAR_2);
  VAR_18 |= ((VAR_22 << VAR_1) |
       (VAR_19 << VAR_4) |
       VAR_2);
  FUNC_4(VAR_16, VAR_21,
         VAR_15, VAR_18);

  FUNC_5(100);
  VAR_18 |= (VAR_7 | VAR_8);
  FUNC_4(VAR_16, VAR_21,
         VAR_15, VAR_18);


  FUNC_4(VAR_16, VAR_21,
         VAR_11,
         VAR_14);
  FUNC_4(VAR_16, VAR_21,
         VAR_12,
         VAR_13);


  FUNC_5(100);
  FUNC_3(VAR_16, VAR_21, VAR_10);
 } else {

  VAR_16->debugfs_bist_cnt += FUNC_3(VAR_16,
    VAR_21, VAR_10);
  FUNC_2(VAR_16);
 }

 return 0;
}
