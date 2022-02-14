
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qbman_release_desc {int verb; } ;


 int FUNC_0 (struct qbman_release_desc*,int ,int) ;

void FUNC_1(struct qbman_release_desc *VAR_0)
{
 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->verb = 1 << 5;
}
