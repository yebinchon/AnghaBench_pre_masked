
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int type; int len; } ;
struct rocker_desc_info {int data_size; int tlv_size; } ;


 int VAR_0 ;
 int FUNC_0 (int ,void const*,int) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct rocker_tlv*) ;
 int FUNC_4 (int) ;
 struct rocker_tlv* FUNC_5 (struct rocker_desc_info*) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(struct rocker_desc_info *VAR_1,
     int VAR_2, int VAR_3, const void *VAR_4)
{
 int VAR_5 = VAR_1->data_size - VAR_1->tlv_size;
 int VAR_6 = FUNC_6(VAR_3);
 struct rocker_tlv *VAR_7;

 if (FUNC_7(VAR_5 < VAR_6))
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_1);
 VAR_1->tlv_size += VAR_6;
 VAR_7->type = VAR_2;
 VAR_7->len = FUNC_2(VAR_3);
 FUNC_0(FUNC_3(VAR_7), VAR_4, VAR_3);
 FUNC_1((char *) VAR_7 + VAR_7->len, 0, FUNC_4(VAR_3));
 return 0;
}
