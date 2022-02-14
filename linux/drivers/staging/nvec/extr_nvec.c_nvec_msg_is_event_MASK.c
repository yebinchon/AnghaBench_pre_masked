
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvec_msg {int* data; } ;



__attribute__((used)) static bool FUNC_0(struct nvec_msg *VAR_0)
{
 return VAR_0->data[0] >> 7;
}
