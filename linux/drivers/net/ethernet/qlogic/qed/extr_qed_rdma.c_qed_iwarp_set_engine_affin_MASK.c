
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct qed_dev {scalar_t__ l2_affin_hint; int iwarp_cmt; } ;
typedef enum qed_eng { ____Placeholder_qed_eng } qed_eng ;


 int FUNC_0 (struct qed_dev*,char*,int ) ;
 int FUNC_1 (struct qed_dev*,int,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct qed_dev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct qed_dev *VAR_6, bool VAR_7)
{
 enum qed_eng VAR_8;
 u8 VAR_9 = 0;
 int VAR_10;


 if (!VAR_6->iwarp_cmt)
  return -VAR_0;

 if (VAR_7)
  VAR_8 = VAR_1;
 else
  VAR_8 = VAR_6->l2_affin_hint ? VAR_3 : VAR_2;

 VAR_10 = FUNC_2(VAR_6, VAR_9, VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_6,
     "Failed to set the engine affinity of ppfid %d\n",
     VAR_9);
  return VAR_10;
 }

 FUNC_1(VAR_6, (VAR_4 | VAR_5),
     "LLH: Set the engine affinity of non-RoCE packets as %d\n",
     VAR_8);

 return 0;
}
