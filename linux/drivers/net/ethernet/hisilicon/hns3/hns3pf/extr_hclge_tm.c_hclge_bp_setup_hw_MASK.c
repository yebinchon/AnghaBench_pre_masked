
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hclge_vport {int qs_offset; } ;
struct hclge_dev {int num_alloc_vport; struct hclge_vport* vport; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct hclge_dev*,int,int,int) ;
 int FUNC_1 (int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct hclge_dev *VAR_5, u8 VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  u32 VAR_8 = 0;
  int VAR_9, VAR_10;

  for (VAR_9 = 0; VAR_9 < VAR_5->num_alloc_vport; VAR_9++) {
   struct hclge_vport *VAR_11 = &VAR_5->vport[VAR_9];
   u16 VAR_12 = VAR_11->qs_offset + VAR_6;
   u8 VAR_13, VAR_14;

   VAR_13 = FUNC_1(VAR_12, VAR_0,
           VAR_1);
   VAR_14 = FUNC_1(VAR_12, VAR_3,
        VAR_4);
   if (VAR_7 == VAR_13)
    VAR_8 |= (1 << VAR_14);
  }

  VAR_10 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
