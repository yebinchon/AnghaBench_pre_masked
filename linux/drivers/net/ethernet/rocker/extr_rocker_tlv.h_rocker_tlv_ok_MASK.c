
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int len; } ;


 int VAR_0 ;

__attribute__((used)) static inline int FUNC_0(const struct rocker_tlv *VAR_1, int VAR_2)
{
 return VAR_2 >= (int) VAR_0 &&
        VAR_1->len >= VAR_0 &&
        VAR_1->len <= VAR_2;
}
