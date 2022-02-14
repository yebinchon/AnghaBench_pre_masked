
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int len; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline struct rocker_tlv *FUNC_1(const struct rocker_tlv *VAR_0,
       int *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0->len);

 *VAR_1 -= VAR_2;
 return (struct rocker_tlv *) ((char *) VAR_0 + VAR_2);
}
