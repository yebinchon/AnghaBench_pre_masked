
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wcn36xx_hal_cfg {int len; scalar_t__ reserve; scalar_t__ pad_bytes; int id; } ;
struct wcn36xx {scalar_t__ hal_buf; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(struct wcn36xx *VAR_2, size_t *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct wcn36xx_hal_cfg *VAR_6;
 u32 *VAR_7;

 if (*VAR_3 + sizeof(*VAR_6) + sizeof(u32) >= VAR_1) {
  FUNC_0("Not enough room for TLV entry\n");
  return -VAR_0;
 }

 VAR_6 = (struct wcn36xx_hal_cfg *) (VAR_2->hal_buf + *VAR_3);
 VAR_6->id = VAR_4;
 VAR_6->len = sizeof(u32);
 VAR_6->pad_bytes = 0;
 VAR_6->reserve = 0;

 VAR_7 = (u32 *) (VAR_6 + 1);
 *VAR_7 = VAR_5;

 *VAR_3 += sizeof(*VAR_6) + sizeof(u32);

 return 0;
}
