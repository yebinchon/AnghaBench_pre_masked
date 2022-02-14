
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lan743x_rx {int ring_size; } ;



__attribute__((used)) static int FUNC_0(struct lan743x_rx *VAR_0, int VAR_1)
{
 return ((++VAR_1) % VAR_0->ring_size);
}
