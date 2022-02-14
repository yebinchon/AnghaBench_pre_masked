
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdp_umem {int headroom; int chunk_size_nohr; } ;



__attribute__((used)) static bool FUNC_0(struct xdp_umem *VAR_0)
{
 return VAR_0->headroom <= 0xffff && VAR_0->chunk_size_nohr <= 0xffff;
}
