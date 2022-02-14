
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rocker_tlv {int dummy; } ;
struct rocker_desc_info {int dummy; } ;
struct rocker {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;


 int FUNC_0 (struct rocker const*,struct rocker_tlv const*) ;
 int FUNC_1 (struct rocker const*,struct rocker_tlv const*) ;
 int FUNC_2 (struct rocker_tlv const*) ;
 int FUNC_3 (struct rocker_tlv const**,int ,struct rocker_desc_info const*) ;

__attribute__((used)) static int FUNC_4(const struct rocker *VAR_5,
    const struct rocker_desc_info *VAR_6)
{
 const struct rocker_tlv *VAR_7[VAR_3 + 1];
 const struct rocker_tlv *VAR_8;
 u16 VAR_9;

 FUNC_3(VAR_7, VAR_3, VAR_6);
 if (!VAR_7[VAR_4] ||
     !VAR_7[VAR_2])
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_7[VAR_4]);
 VAR_8 = VAR_7[VAR_2];

 switch (VAR_9) {
 case 129:
  return FUNC_0(VAR_5, VAR_8);
 case 128:
  return FUNC_1(VAR_5, VAR_8);
 }

 return -VAR_1;
}
