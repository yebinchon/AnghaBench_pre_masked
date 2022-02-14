
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hisi_hba {int n_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct hisi_hba*,int,int ) ;
 int FUNC_1 (struct hisi_hba*,int,int ,int) ;

__attribute__((used)) static int FUNC_2(struct hisi_hba *VAR_7)
{
 int VAR_8;
 u32 VAR_9;

 for (VAR_8 = 0; VAR_8 < VAR_7->n_phy; VAR_8++) {

  VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_0);
  FUNC_1(VAR_7, VAR_8, VAR_0, VAR_9);
  VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_3);
  FUNC_1(VAR_7, VAR_8, VAR_3, VAR_9);
  VAR_9 = FUNC_0(VAR_7, VAR_8, VAR_5);
  FUNC_1(VAR_7, VAR_8, VAR_5, VAR_9);


  FUNC_1(VAR_7, VAR_8, VAR_1, 0x3ce3ee);
  FUNC_1(VAR_7, VAR_8, VAR_4, 0x17fff);
  FUNC_1(VAR_7, VAR_8, VAR_6, 0x8000012a);


  FUNC_1(VAR_7, VAR_8, VAR_1,
    0x3fffff & ~VAR_2);
 }

 return 0;
}
