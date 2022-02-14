
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xen_front_pgdir_shbuf {scalar_t__ num_pages; scalar_t__ num_grefs; } ;


 scalar_t__ FUNC_0 (struct xen_front_pgdir_shbuf*) ;

__attribute__((used)) static void FUNC_1(struct xen_front_pgdir_shbuf *VAR_0)
{




 VAR_0->num_grefs = FUNC_0(VAR_0) + VAR_0->num_pages;
}
