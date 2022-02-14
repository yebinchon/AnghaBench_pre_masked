
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rocker_tlv {int dummy; } ;
struct rocker_desc_info {int dummy; } ;
struct rocker {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct rocker_desc_info const*) ;
 int FUNC_2 (struct rocker const*,struct rocker_tlv const**) ;
 int FUNC_3 (struct rocker_tlv const**,int ,struct rocker_desc_info const*) ;

__attribute__((used)) static void FUNC_4(const struct rocker *VAR_1,
     const struct rocker_desc_info *VAR_2)
{
 const struct rocker_tlv *VAR_3[VAR_0 + 1];
 struct sk_buff *VAR_4 = FUNC_1(VAR_2);

 if (!VAR_4)
  return;
 FUNC_3(VAR_3, VAR_0, VAR_2);
 FUNC_2(VAR_1, VAR_3);
 FUNC_0(VAR_4);
}
