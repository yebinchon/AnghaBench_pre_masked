
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker_desc_info {int tlv_size; scalar_t__ data; } ;



__attribute__((used)) static inline struct rocker_tlv *
FUNC_0(struct rocker_desc_info *VAR_0)
{
 return (struct rocker_tlv *) ((char *) VAR_0->data +
            VAR_0->tlv_size);
}
