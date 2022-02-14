
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker_desc_info {char const* tlv_size; int data; } ;



__attribute__((used)) static inline void FUNC_0(struct rocker_desc_info *VAR_0,
       const struct rocker_tlv *VAR_1)
{
 VAR_0->tlv_size = (const char *) VAR_1 - VAR_0->data;
}
