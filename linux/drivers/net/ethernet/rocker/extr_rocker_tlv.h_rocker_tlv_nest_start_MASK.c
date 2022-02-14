
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker_tlv {int dummy; } ;
struct rocker_desc_info {int dummy; } ;


 scalar_t__ FUNC_0 (struct rocker_desc_info*,int,int ,int *) ;
 struct rocker_tlv* FUNC_1 (struct rocker_desc_info*) ;

__attribute__((used)) static inline struct rocker_tlv *
FUNC_2(struct rocker_desc_info *VAR_0, int VAR_1)
{
 struct rocker_tlv *VAR_2 = FUNC_1(VAR_0);

 if (FUNC_0(VAR_0, VAR_1, 0, ((void*)0)) < 0)
  return ((void*)0);

 return VAR_2;
}
