
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qed_bmap {scalar_t__ max_count; int bitmap; } ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static bool FUNC_1(struct qed_bmap *VAR_0)
{
 return VAR_0->max_count == FUNC_0(VAR_0->bitmap, VAR_0->max_count);
}
