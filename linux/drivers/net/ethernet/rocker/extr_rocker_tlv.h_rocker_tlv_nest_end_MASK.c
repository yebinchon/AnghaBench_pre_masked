
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int len; } ;
struct rocker_desc_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct rocker_desc_info*) ;

__attribute__((used)) static inline void FUNC_1(struct rocker_desc_info *VAR_0,
           struct rocker_tlv *VAR_1)
{
 VAR_1->len = (char *) FUNC_0(VAR_0) - (char *) VAR_1;
}
